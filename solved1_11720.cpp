#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    if(N>100||N<1) throw ("Error");
    string num;
    int result=0;

    cin >> num;
    if(num.length()!=N) throw ("Error");
    for (int i=0; i<num.length(); i++){
       result += num[i]-'0';
    }
    cout << result;

    return 0;
}
