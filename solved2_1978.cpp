#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int);
int PNSearch(int *, int);

int main() {
    int N;
    cin >> N;
    if(N>100||N<1) throw ("Error");

    int data[N];
    for (int i=0; i<N; i++){
        cin >> data[i];
        if(data[i]>1000||data[i]<1) throw ("Error");
    }
    sort(data, data+N);

    int result = PNSearch(data, N);
    cout << result;

    return 0;
}

bool isPrime(int n){
    if(n==1) return false;
    for(int i=2; i<n; i++){
        if(n%i==0) return false;
    }
    return true;
}


int PNSearch(int *numbers, int size){
    int count = 0;
    for (int i=0; i<size; i++){
        if(isPrime(numbers[i])) ++count;
    }
    return count;
}
