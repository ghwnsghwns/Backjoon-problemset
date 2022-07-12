#include <iostream>

using namespace std;

int main() {
    int numbers[9];
    for(int i=0; i<9; i++){
        cin >> numbers[i];
        if(numbers[i]>100) throw("Scope Error.");
    }

    int max = numbers[0];
    int max_index = 0;
    for(int i=0; i<9; i++){
        if(max<=numbers[i]){
            max = numbers[i];
            max_index=i;
        }
    }

    cout<<max<<'\n';
    cout<<max_index+1<<'\n';

        return 0;
}
