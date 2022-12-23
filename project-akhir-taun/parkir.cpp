#include <iostream>
using namespace std;

int biaya(){
    int jam, sejam;
    cout << "Lama Parkir /jam : ";
    cin >> jam;
    

    for(int i = 1; i < jam; i++){
        sejam += 2000;
    }
    return sejam;
}

void motor(){
    int pertama = 2000 + biaya();
    cout << "Total biaya parkir : Rp" << pertama;
}

void mobil(){
    int pertama = 5000 + biaya();
    cout << "Total biaya parkir : Rp" << pertama;
}
int main(){
    int jenis;
    cout << "1. Motor"<<endl<< "2. Mobil"<< endl << "Pilih kendaraan : ";
    cin >> jenis;
    switch (jenis)
    {
    case 1:
        motor();
        break;
    
    case 2:
        mobil();
        break;
    
    default:
        cout << "Kendaraan tidak cocok, Parkir geratis";
    }
}