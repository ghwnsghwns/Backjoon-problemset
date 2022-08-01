#include <iostream>
#include <string>
using namespace std;

void lengthSort(string* strArr, int size);
void dicSort(string* strArr, int size);


int main() {
    int N;
    cin >> N;
    if (N<1||N>20000) throw ("Error");
    string *words = new string;

    for (int i=0; i<N; i++){
        cin >> words[i];
        if (words[i].length()>50) throw ("Error");
    }


    lengthSort(words, N);
    dicSort(words, N);

    for (int i=0; i<N; i++){
        cout << words[i] << '\n';
    }

    delete words;
    return 0;
}

void lengthSort(string *strArr, int size){
    string temp;
    for (int i=size; i>0; i--){
        for (int j=0; j<i; j++){
            if(strArr[j].length()<strArr[j+1].length()){
                temp = strArr[j];
                strArr[j] = strArr[j+1];
                strArr[j+1] = temp;
            }
        }
    }
    return;
}

void dicSort(string *strArr, int size){
    return;
}
