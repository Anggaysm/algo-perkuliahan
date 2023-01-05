#include <iostream>
using namespace std;

int harga(){
    int hargabarang[5] = {10000,7000,20000,3000,15000};
    int kode;
    cin >> kode;
    return hargabarang[kode-1];
}

int perhitungan(int jumlahbrg, int hargabrg){
    return (jumlahbrg*hargabrg);
}


int kembalian(int uangPembeli, int hargaBarang){
    if (uangPembeli < hargaBarang)
    {
        cout << "Uang anda Kurang";
    }else if(uangPembeli == hargaBarang){
        cout << "Uang Pas tidak ada kembalian";
    }else{
        return uangPembeli - hargaBarang;
    }
    return 0;
}



int main(){
    int total = 0;
    jump:
    string barang [5] = {"Oreo", "es krim", "baigon", "mineral","keripik"};

    for (int i = 0; i < 5; i++)
    {
        cout << i+1 << ". "<< barang[i]<<endl;
    }
    cout << "Pilih barang yang ingin anda beli (1-5) :";
    
    int hargaBrg = harga();


    int jumlah;
    cout << "Jumlah barang: ";
    cin >> jumlah;
    int hitung;
    hitung = perhitungan(jumlah, hargaBrg);
    cout << "Total Sementara "<< hitung<< endl;
    
    total += hitung;
    char lagi;
    cout << "Apakah ada yang ingin dibeli lagi ? (y/n)";
    cin >> lagi;
    if (lagi == 'n'){
        cout << "Total belanjaan Anda : Rp" << total<< endl;
        int uang;
        cout << "Uang Pembeli : Rp";
        cin >> uang;
        int kembali = kembalian(uang, total);
        cout << "Kembalian anda adalah : Rp"<< kembali<< endl;
        cout << "Terimasih telah Belanja Di sini ";
    }else{
        goto jump;
    }
    
}   