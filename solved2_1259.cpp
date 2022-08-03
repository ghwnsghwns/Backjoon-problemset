#include <iostream>
#include <sstream>
using namespace std;

int numbers[10000];

int palindrome(int);

int main() {
    int index = 0;
    for (int i=0; i<10000; i++){
        cin >> numbers[i];
        if (numbers[i]==0) {
            index = i;
            break;
        }
    }
    for (int i=0; i<index; i++){
        if(palindrome(numbers[i])) cout << "yes" << '\n';
        else cout << "no" << '\n';
    }



    return 0;
}

int palindrome(int a){
    stringstream intStr;
    int count=0;
    intStr << a;
    for (int i=0; i<intStr.str().length()/2; i++){
        if(intStr.str()[i]==intStr.str()[intStr.str().length()-i-1])
            ++count;
    }
    if(count == intStr.str().length()/2) return 1;
    else return 0;
}
