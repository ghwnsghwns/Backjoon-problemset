#include <iostream>
#include <string>

using namespace std;

int main() {
    int strCount=0;
    cin >> strCount;
    int repeat[strCount];
    string strArr[strCount];

    for (int i=0; i<strCount; i++){
        cin >> repeat[i] >> strArr[i];
    }

    for (int i=0; i<strCount; i++){
        for (int j=0; j<strArr[i].length();j++) {
            for(int k=0; k<repeat[i]; k++){
                cout<<strArr[i][j];
            }
        }
        cout<<'\n';
    }
    return 0;
}
