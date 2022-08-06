#include <iostream>
using namespace std;

int gcd(int, int);

int lcm(int, int);

int main() {
    int a, b;
    cin >> a >> b;
    if((a<1||a>10000)||(b<1||b>10000)) throw ("Error");
    cout << gcd(a, b) << '\n';
    cout << lcm(a, b) << '\n';

    return 0;
}

int gcd (int m, int n){
    int key;
    while (n!=0){
        key = m % n;
        m = n;
        n = key;
    }
    return m;
}

int lcm (int m, int n){
    return m*n/gcd(m, n);
}
