#include <iostream>
using namespace std;

int main (){
    int hasil = 1,i;
    for (i = 1; i <= 10; i++){
        hasil = hasil * i;
        if (i < 10){
            cout << i << " * ";
        }else{
            cout << i;
        }
    }
    cout << " = " << hasil;
}