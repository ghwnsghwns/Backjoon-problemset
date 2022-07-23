#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int numbers[N-1];
    int max, min;
    for (int i=0; i<N; i++){
        cin >> numbers[i];
        if(numbers[i]>1000000||numbers[i]<-1000000) throw ("error");
    }

    //find max
    max = numbers[0];
    for (int i=0; i<N; i++) {
        if (numbers[i]>=max) max = numbers[i];
    }

    //find min
    min = numbers[0];
    for (int i=0; i<N; i++) {
        if (numbers[i]<=min) min = numbers[i];
    }

    cout << min << ' ' << max;

    return 0;
}
