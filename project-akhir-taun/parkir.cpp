#include <iostream>
using namespace std;

int biaya(){
    int jam, sejam, total;
    float potongan;
    cout << "Lama Parkir /jam : ";
    cin >> jam;

    

    for(int i = 1; i < jam; i++){
        sejam += 2000;
    }
    char member;
    cout << "Apakah punya kartu parkir member?(y/n)";
    cin >> member;
    if (member == 'y')
    {
        potongan = (sejam+2000) * 0.2;
        total = sejam - potongan;
    }else if (member == 'n')
    {
        total = sejam;
    }
    
    return total;
}

int motor(){
    int pertama = 2000 + biaya();
    cout << "biaya motor "<< " :Rp " <<pertama<<endl;
    return pertama;
}

int mobil(){
    int pertama = 5000 + biaya();
    cout << "biaya mobil "<< " :Rp " <<pertama<<endl;
    return pertama;
}



int totalKendaraan(){
    int totalKendaraan;
    cin >> totalKendaraan;
    int i, hargaunit, totalHarga = 0;
    int tipe [totalKendaraan];
    for ( i=0; i<totalKendaraan; i++){
        cout << "1. Motor"<<endl<< "2. Mobil"<< endl << "Tipe Kendaraan : ";
        cin >> tipe[i];
        switch (tipe[i])
        { 
        case 1:
            hargaunit = motor();
            break;
        case 2:
            hargaunit = mobil();
            break;
        
        default:
            cout << "Kendaraan tidak cocok, Parkir gratis" << endl;
        }
        totalHarga += hargaunit;
    }
    cout << "Total penghasilan hari ini: Rp";
    return totalHarga;

}


int main(){
    cout << "Total Kendaran Hari ini : ";
    cout << totalKendaraan();
}