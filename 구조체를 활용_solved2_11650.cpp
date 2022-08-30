#include <iostream>
#include <algorithm>

using namespace std;

struct Coordinate{
    int x;
    int y;
};

bool comp (struct Coordinate A, struct Coordinate B){
    if(A.x == B.x) return A.y < B.y;
    else return A.x < B.x;
}

int main(){
    int N;
    cin >> N;
    if(N<1||N>100000) throw("Error");

    Coordinate Dot[N];

    for (int i=0; i<N; i++){
        cin>>Dot[i].x >> Dot[i].y;
    }

    sort(Dot, Dot+N, comp);

    for (int i=0; i<N; i++){
        cout << Dot[i].x << ' ' << Dot[i].y << '\n';
    }

    return 0;
}
