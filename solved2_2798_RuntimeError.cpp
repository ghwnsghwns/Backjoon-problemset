#include <iostream>
#include <algorithm>
using namespace std;

int blackjack(int *, int, int);

int main () {
    int N;
    int M;

    cin >> N >> M;
    if(N<3||N>100) throw ("Error");
    if(M<3||M>3000000) throw ("Error");

    int cards[N];
    for (int i=0; i<N; i++){
        cin >> cards[i];
        if(cards[i]<1||cards[i]>100000) throw ("Error");
    }

    int result = blackjack(cards, N, M);

    cout << result;
    return 0;
}

int blackjack(int *nums, int size, int data){
    sort(nums, nums+size);
    bool min_condition = nums[0]+nums[1]+nums[2] > data;
    bool max_condition = nums[size-3] + nums[size-2] + nums[size-1] < data;
    if(min_condition||max_condition) throw("Error");
    int min = 3000000;
    int sum = 0;
    int output=0;
    for (int i=0; i < size -2; i++){
        for (int j=i+1; j < size -1; j++){
            for (int k = j+1; k<size; k++){
                sum = nums[i] + nums[j] + nums[k];
                if(data - sum < min && data - sum >=0) {
                    min = data - sum;
                    output = sum;
                }
            }
        }
    };
    return output;
}
