#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

struct Member {
    int age;
    string name;
};

int comp (Member a, Member b){
    return a.age < b.age;
}

int main () {
    int N;
    cin >> N;
    if (N>100000||N<1) throw ("Error");

    struct Member members[N];
    for (int i=0; i<N; i++){
        cin >> members[i].age >> members[i].name;
        if (members[i].age<1||members[i].age>200) throw("Error");
        if (members[i].name.length()<1||members[i].name.length()>100) throw("Error");
    }

    stable_sort(members, members+N, comp);

    for (int i=0; i<N; i++){
        cout << members[i].age << ' ' << members[i].name << '\n';
    }

    return 0;
}
