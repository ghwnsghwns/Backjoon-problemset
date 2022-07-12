#include <iostream>

using namespace std;

int main() {
    int level;
    cin >> level;
    if(!(level>=1&&level<=9)) throw('error');
    for(int i=1; i<=9; i++){
        cout << level << ' '<<'*'<< ' ' << i << ' ' << '=' << ' ' << level*i << '\n';
    }

        return 0;
}
