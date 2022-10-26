#include <iostream>
using namespace std;

int main (){
    int hasil = 1,i; //kenapa hasil di kasih value 1, karna kalo 0 dikali berapapun hasilnya akan 0
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