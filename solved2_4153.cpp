#include <iostream>
#include <cmath>
using namespace std;

bool isRightAngled (int, int, int);

class triangle {
public :
    int side_1;
    int side_2;
    int side_3;

    bool isRightAngled (int a, int b, int c){
        if (a>b&&a>c) {
            if(pow(a, 2)==pow(b, 2)+pow(c,2)) return true;
            else return false;
        }
        else if (b>a&&b>c) {
            if(pow(b, 2)==pow(c, 2)+pow(a,2)) return true;
            else return false;
        }
        else if (c>a&&c>b) {
            if(pow(c, 2)==pow(a, 2)+pow(b,2)) return true;
            else return false;
        }
        else return false;
    };
};

int main () {
    while(1){
        triangle T;
        cin >> T.side_1 >> T.side_2 >> T.side_3;
        if(T.side_1==0&&(T.side_2==0)&&(T.side_3==0)) break;

        if(T.isRightAngled(T.side_1, T.side_2, T.side_3))
            cout << "right" << '\n';
        else cout << "wrong" << '\n';
    }


}
