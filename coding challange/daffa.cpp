#include <iostream>
using namespace std;
int main(){

 //Deklarasi variabel
    int KB, HB, jml, penjualan, pot, total;
    string namaBarang;

    cout<<"Aplikasi Penjualan Barang"<<endl;
    cout<<"---------------------------------"<<endl;

//Proses input
    cout<<"Masukan Kode Barang     : ";
    cin>>KB;
    cout<<"Masukan Nama Barang     : ";
    cin>>namaBarang;
    cout<<"Masukan Jumlah          : ";
    cin>>jml;
    cout<<"---------------------------------"<<endl;

    switch (KB)
    {   
        case 'a' :
            HB = 10000;
            break;
        case 'b' :
            HB = 8000;
            break;
        case 'c' :
            HB = 6000;
            break;
        default :
            HB = 4000;
            break;
    }

    penjualan = HB * jml;
    total = penjualan - pot;

    cout<<"Penjualan               : Rp" <<penjualan<<endl;

    if (penjualan>100000){
        pot = 0.1 * penjualan;
        cout<<"Diskon                  : 10%"<<endl;
    }
    else {
        pot = 0;
        cout<<"-"<<endl;
    }
    cout<<"Total Penjualan         : Rp"<<total<<endl;
    cout<<"Terima Kasih";
}
