#include <iostream>
#include <algorithm>

using namespace std;

struct Comp{
    int num;
    int count;
};

int main () {
    int N;
    int M;


    cin >> N;
    if (N<1||N>500000) throw ("Error");

    int card[N];
    for (int i=0; i<N; i++){
        cin >> card[i];
        if (card[i]>100000000||card[i]<-100000000) throw ("Error");
    }

    cin >> M;
    if (M<1||M>500000) throw ("Error");

    Comp card_comp[M];
    for (int i=0; i<M; i++){
        cin >> card_comp[i].num;
        card_comp[i].count=0;
        if (card_comp[i].num>100000000||card_comp[i].num<-100000000) throw ("Error");
    }

    for (int i=0; i<M; i++){
        for (int j=0; j<N; j++){
            if(card[j]==card_comp[i].num) {
                ++card_comp[i].count;
            }
        }
    }

    for (int i =0; i<M; i++){
        cout << card_comp[i].count << ' ';
    }

    return 0;
}
