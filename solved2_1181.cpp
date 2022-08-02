#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool compare(string s1, string s2){
    if(s1.length()==s2.length()) return s1<s2;
    else return s1.length()<s2.length();
};

int N;
string words[20000];

int main() {
    cin >> N;
    if (N<1||N>20000) throw ("Error");

    for (int i=0; i<N; i++){
        cin >> words[i];
        if(words[i].length()>50) throw ("Error");
    }

    sort(words, words+N, compare);

    cout << words[0] << '\n';
    for(int i=1; i<N; i++){
        if(words[i]==words[i-1]) continue;
        cout << words[i] << '\n';
    }

    return 0;
}
