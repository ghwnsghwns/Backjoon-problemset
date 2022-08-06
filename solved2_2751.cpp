#include <iostream>
#include <algorithm>
using namespace std;

int main () {
    int N;
    cin >> N;
    if(N<1||N>1000000) throw ("Error");

    int numbers[N];
    for (int i=0; i<N; i++){
        cin >> numbers[i];
        if(N>1000000||N<(-1000000)) throw ("Error");
    }
    sort(numbers, numbers+N);

    for (int i=0; i<N; i++){
        cout << numbers[i] << '\n';
    }


    return 0;
}
