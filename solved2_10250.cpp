#include <iostream>
#include <algorithm>

using namespace std;

int ACMHotel(int, int, int);

int main () {

    int T;

    int H,W,N;

    cin >> T;

    int roomNumber[T];
  
    for (int i=0; i<T; i++){

        cin >> H >> W >> N;
        roomNumber[i] = ACMHotel(H,W,N);
    }
      for (int i=0; i<T; i++){

        cout << roomNumber[i] << '\n';
    }

}

int ACMHotel(int height, int width, int order){
    int room;
    int Hotel[height][width];
    if(order%height==0){
        room = height * 100 + order/height;
    }
    else{
        room = (order % height) * 100 + (order/height) + 1;
    }
   return room;
}
