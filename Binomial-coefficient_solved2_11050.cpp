#include <iostream>
#include <algorithm>

using namespace std;

int Binomial_Coefficient(int, int);

int main(){
    int N,K;
    cin >> N >> K;
    if(N<1||N>10) throw ("Error");
    if(K<0||K>N) throw ("Error");

    cout << Binomial_Coefficient(N, K);


    return 0;
}

int Binomial_Coefficient(int n, int k){
    int n_fac = 1;
    int k_fac = 1;
    int diff_fac = 1;
    int result;

    for (int i=n; i>0; i--){
        n_fac *= i;
    }

    for (int i=k; i>0; i--){
        k_fac *= i;
    }

    for (int i=n-k; i>0; i--){
        diff_fac *= i;
    }

    result = n_fac / (k_fac * diff_fac);
    return result;
}
