#include <iostream>
using namespace std;

int main(){
    int hBarang, jumlah, total;
    string namaBarang;
    char kode;
    cout << "Aplikasi Penjualan Barang" << endl;
    cout << "-------------------------------" << endl;
    cout << "Kode Barang : ";
    cin >> kode;
    cout << "Nama Barang : ";
    getline(cin >> ws, namaBarang);
    cout << "Jumlah Barang : ";
    cin >> jumlah;
    cout << "--------------------------------------" << endl;
    
    switch (kode)
    {
    case 'a': case 'A':
        hBarang = 10000;
        break;
    case 'b': case 'B' : 
        hBarang = 8000;
        break;
    case 'c': case 'C' :
        hBarang = 6000;
        break;
    default:
        hBarang = 4000;
        break;
    }
    int penjualan = hBarang * jumlah;
    cout << "Harga Barang : Rp " << hBarang << endl;
    cout << "Pejualan : Rp " << penjualan << endl;
    if (penjualan > 100000)
    {
        total = penjualan - (penjualan * 0.1);
        int discon = penjualan * 0.1;
        cout << "Diskon : Rp " << discon<< endl;
        cout << "Total Penjualan : Rp " << total << endl;
    }else{
        cout << "Diskon : Rp-" << endl;
        cout << "Total Penjualan : Rp " << penjualan << endl;
    }
    

    cout<< "---------------------------------------"<< endl;
    cout<< "Terimakasih";

}