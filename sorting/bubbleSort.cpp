#include <iostream>
using namespace std;

int main(){
    int nilai [10] = {56, 78, 58, 80, 45, 90, 85, 60, 64, 35};
    int temp;

    cout << "Nilai sebelum diurutkan"<<endl;
    cout << "========================"<<endl;
    for (int a=0; a < 10; a++){
        cout<<nilai[a]<< " ";
    }
    cout<<endl<<endl;
    cout << "Nilai sesudah diurutkan Besar Ke Kecil"<< endl;
    cout << "========================"<<endl;
    for( int a=0; a<10; a++){
        for (int b=9; b>=a+1; b--){
            if(nilai[b]>nilai[b-1]){
                temp = nilai[b];
                nilai[b] = nilai[b-1];
                nilai[b-1] = temp;
            } 
        }
        cout << nilai[a]<< " ";
    }

}