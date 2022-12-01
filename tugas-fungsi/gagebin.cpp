#include <iostream>
using namespace std;

void hasil(int angka){
    for (int i = 1; i <= angka; i++){
        if (angka % 2 == 0){
            cout << "*";
        }else{
            cout << "#";
        }
    }

}


int main(){
    int input;
    cout << "Masukan angka: ";
    cin>> input;
    hasil(input);
}