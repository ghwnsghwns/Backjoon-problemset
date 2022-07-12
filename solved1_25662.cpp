#include<iostream>

using namespace std;

int main(){
    int numbers[0]={};
    
    for(int i=0; i<9;i++){
        cin >> numbers[i];
            if(nubmers[i]>100) throw("Scope error!");
    }
    int max = numbers[0];
    int max_index=0;
    for(int i=1; i<9; i++){
        if(max<=numbers[i]){
            max=numbers[i];
            max_index=i;
        }
    }
    cout << max << endl;
    cout << max_index << endl
    return 0;
}
