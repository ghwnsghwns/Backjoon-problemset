#include <iostream>
#include <string>

using namespace std;

class Stack {
    int *arr;
    int top;

public :
    Stack(int);
    ~Stack();

    void Push(int);
    int Pop();
    int Size();
    int Empty();
    int Top();
};

Stack::Stack(int size){
    arr = new int[size];
    top = -1;
}

Stack:: ~Stack(){
    delete[] arr;
}

void Stack::Push(int x){
    arr[++top]=x;
}

int Stack::Pop(){
    if(Empty()) return -1;
    else return arr[top--];
}

int Stack::Size(){
    return top+1;
}

int Stack::Empty() {
    if (top == -1) return 1;
    else return 0;
}

int Stack::Top(){
    if(Empty()) return -1;
    else return arr[top];
}

int main () {
    int N;
    cin >> N;
    Stack K(100);
    string order[N];
    if (N<1||N>10000) throw("Error");
    int count = -1;
    int result[10000];

    for (int i=0; i<N; i++){
        cin >> order[i];
        if(order[i]=="push") {
            int input;
            cin >> input;
            K.Push(input);
        }
        else if(order[i]=="pop") result[++count] = K.Pop();
        else if(order[i]=="size") result[++count] = K.Size();
        else if(order[i]=="empty") result[++count] = K.Empty();
        else if(order[i]=="top") result[++count] = K.Top();
        else throw("Invalid Order");
    }

    for (int i=0; i<=count; i++){
        cout << result[i] << '\n';
    }

    K.~Stack();

    return 0;
}
