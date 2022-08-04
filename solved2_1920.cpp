#include <iostream>
#include <algorithm>
using namespace std;

int BinarySearch(int* Arr, int size, int data);

int main() {
    int N;
    cin >> N;
    if(N<1||N>100000) throw ("Error");
    int A[N];
    for (int i=0; i<N; i++){
        cin >> A[i];
    }
    sort(A, A+N);

    int M;
    cin >> M;
    if(M<1||M>100000) throw ("Error");
    int data[M];
    for (int i=0; i<M; i++) {
        cin >> data[i];
    }
    

    for (int i=0; i<M; i++){
        if(BinarySearch(A, N, data[i])) cout << 1 << '\n';
        else cout << 0 << '\n';
    }

    return 0;
}

int BinarySearch(int *Arr, int size, int data){
    int start = 0;
    int end = size-1;
    int middle;
    while (start <= end){
        middle = (start+end)/2;
        if(Arr[middle]==data) return 1;
        else if (Arr[middle]>data) end = middle-1;
        else start = middle + 1;
    }
    return 0;
}
