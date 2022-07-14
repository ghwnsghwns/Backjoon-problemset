#include <iostream>

using namespace std;

int main() {
   /*c,d,e,f,g,a,b,C -> 1,2,3,4,5,6,7,8
    * 1~8입력 : ascending 출력
    * 8~1입력 : descending 출력
    * 아니면 mixed 출력*/
   int pitch[8];
   int temp=0;
   for(int i=0; i<sizeof(pitch)/sizeof(*pitch); i++){
       cin >> pitch[i];
       if(!(pitch[i]<=8&&pitch[i]>0)) throw('error');
   }
   
   for (int i=1; i<=sizeof(pitch)/sizeof(*pitch); i++) {
       if (pitch[i - 1] == i) temp = 1;
       else {
           temp = 0;
           break;
       }
   }
   

   for (int i=1; i<=sizeof(pitch)/sizeof(*pitch); i++) {
        if (pitch[i - 1] == sizeof(pitch)/sizeof(*pitch)+1-i) temp = -1;
        else {
            temp = 0;
            break;
        }
   }


   switch(temp){
       case 1: cout << "ascending";
           break;
       case -1: cout << "descending";
           break;
       case 0: cout << "mixed";
           break;
   }

   return 0;

}
// 아직 고쳐야함
