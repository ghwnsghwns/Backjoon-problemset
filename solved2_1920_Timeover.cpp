#include <iostream>
#include <algorithm>
using namespace std;

int Mapping(int* Arr, int size, int data);

int main() {
    int N;
    cin >> N;
    if(N<1||N>100000) throw ("Error");
    int A[N];
    for (int i=0; i<N; i++){
        cin >> A[i];
    }

    int M;
    cin >> M;
    if(M<1||M>100000) throw ("Error");
    int data[M];
    for (int i=0; i<M; i++) {
        cin >> data[i];
    }

    for (int i=0; i<M; i++){
        if(Mapping(A, N, data[i])) cout << 1 << '\n';
        else cout << 0 << '\n';
    }

        return 0;
}

int Mapping(int *Arr, int size, int data){
    int count = 0;
    for (int i=0; i<size; i++){
        if(Arr[i] == data) ++count;
    }
    if(count >= 1) return 1;
    else return 0;
}

//이진 탐색
