#include <iostream>
#include <string>
using namespace std;

int main() {
    int test;
    cin >> test;
    string ox[test];

    for (int i=0; i<test; i++)
    {
        cin >> ox[i];
        if(ox[i].length()>=80) throw ("error");
        for (int j=0; j<ox[i].length(); j++){
            if (!(ox[i][j]=='O'||ox[i][j]=='X')) throw ("error");
        }
    }

    for (int i=0; i<test; i++) {
        int sum =0;
        int count = 0;
        for (int j=0; j<ox[i].length(); j++){
            if(ox[i][j]=='O') {
                ++count;
                sum += count;
            }
            else count = 0;
        }
        cout << sum << '\n';
    }

    return 0;
}
