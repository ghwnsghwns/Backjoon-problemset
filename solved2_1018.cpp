#include <iostream>
#include <string>
using namespace std;

string T1[8] = {
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
};
string T2[8] = {
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",

};


int T1_count(int x, int y, string *board){
    int count=0;
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(board[x+i][y+j]!=T1[i][j])
                ++count;
        }
    }
    return count;
}

int T2_count(int x, int y, string *board){
    int count=0;
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(board[x+i][y+j]!=T2[i][j])
                ++count;
        }
    }
    return count;
}

int main() {
    int M,N;
    cin >> N >> M;
    if((M<8||M>50)&&(N<8||N>50)) throw ("Error");
    string board[M];


    for (int i=0; i<M; i++){
            cin >> board[i];
            //if((board[j][i]!='W')||(board[j][i]!='B')) throw ("Error")
            if(board[i].length()!=N) throw ("Error");
    }

    int temp[2] = {64, 64};

    for(int i=0; i<N-7; i++){
        for(int j=0; j<M-7; j++){
            if(T1_count(j, i, board)<temp[0]) temp[0] = T1_count(j, i, board);
        }
    }

    for(int i=0; i<N-7; i++){
        for(int j=0; j<M-7; j++){
            if(T2_count(j, i, board)<temp[1]) temp[1] = T2_count(j, i, board);
        }
    }

    if(temp[0] <= temp[1]) cout << temp[0];
    else cout << temp[1];

    return 0;
}
//Runtime Error
