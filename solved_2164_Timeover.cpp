#include <iostream>
using namespace std;

class card {
public :
    int cardnumber[500000];
    int bottom = -1;
    int top = 0;

    void stack(int data){
        if(bottom<500000){
            bottom++;
            cardnumber[bottom] = data;
        }
        else cout<<"FULL CARD"<<'\n';;
    }

    int shuffle(){
        int temp;
        if(bottom==-1) {
            cout << "NO CARD";
            return -1;
        }
        else {
            cardnumber[top] = 0;
            ++top;
            temp = cardnumber[top];
            for (int i=top; i<bottom; i++){
                cardnumber[i] = cardnumber[i+1];
            }
            cardnumber[bottom] = temp;
        }
        return temp;
    }
};

int main() {
    int N;
    cin >> N;
    card C;
    for (int i=0; i<N; i++){
        C.stack(i+1);
    }

    while (C.top<C.bottom){
        C.shuffle();
    }

    cout << C.cardnumber[C.bottom];

    return 0;
}
