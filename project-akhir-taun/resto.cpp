#include <iostream>
using namespace std;

// menginput harga Makanan
int hargaMakanan(int kodeMa){
    int harga[6]= {13000,12000,15000,10000,20000,23000};
    return harga[kodeMa-1];
}

// Menginput harga Minuman
int hargaMinuman(int kodeMi){
    int harga[5]= {3000,2500,5000,12000,5000};
    return harga[kodeMi-1];
}
// menu makanan
void menuMakanan (){
    string makanan[6] = {"Ayam Kremes", "Ayam Thailand", "Ayam Katsu", "Kebab", "Soto Ayam", "Soto Betawi" };
    for (int i = 0; i < 6; i++)
    {
        cout << i+1 << ". "<< makanan[i]<<endl;
    }
    cout << "Mau makan apa hari ini (1-6) :";
}

// menu minuman
void menuMinuman(){
     string minuman[5] = {"Air Mineral", "Es Teh", "Nutrisari", "Jus", "Kopi" };
        for (int i = 0; i < 5; i++)
        {
            cout << i+1 << ". "<< minuman[i]<<endl;
        }
        cout << "Untuk Minumanannya Mau apa? (1-5) :";
}


// menghitung Jumlah Porsi
int banyak(){
    int porsi;
    cout << "Untuk Berapa porsi : ";
    cin >> porsi;
    return porsi;
}

// menghitung harga makanan dalam porsi
int perhitunganMakan(int jmlhPorsi, int hargaMakanan){
    return (jmlhPorsi * hargaMakanan);
}

// menghitung harga minuman dalam porsi
int perhitunganMinum(int jmlhPorsi, int hargaMinuman){
    return (jmlhPorsi * hargaMinuman);
}

// inputan nambah porsi
char tambahLagi(){
    char tambah;
    cout << "Ingin Menambah Menu (y/n)?";
    cin >> tambah;
    return tambah;
}

// menghitung kembalian
int kembalian (int uangPembeli, int total){
    int kembali;
    if (total > uangPembeli)
    {
        cout << "Uang Kurang, Semua Makanan & Minuman dikembalikan";
    }else if (uangPembeli == total)
    {
        cout << "uang pas, tidak ada kembalian"<<endl<< "SELAMAT MENIKMATI :)";
    }else{
        kembali = uangPembeli - total;
        cout << "Kembalian anda sebesar : Rp"<<kembali<<endl<< "SELAMAT MENIKMATI :)";
    }
    return kembali;
}

int main(){
    cout << "Selamat Datang di Basti Resto"<< endl;
    cout << "=============================="<< endl << endl;
    int hargaSemua = 0;
    int hargaMinumSementara = 0;
    
    jump:
    int kodeMakanan;
    menuMakanan();
    cin >> kodeMakanan;

    int hargaMakan;
    if(kodeMakanan > 6){
        cout << "Makanan tidak tersedia. Silahkan Pilih ulang"<< endl;
        goto jump;
    }else{
        hargaMakan = hargaMakanan(kodeMakanan);
    }
    int porsiMakan = banyak();
    int hargaMakanan = perhitunganMakan(porsiMakan, hargaMakan);
    hargaSemua += hargaMakanan;
    cout << "Total Harga Makanan Anda : Rp" << hargaSemua << endl;
    char tambahMakan = tambahLagi();
    if (tambahMakan == 'n'){
        tambah:
        cout << endl << endl;
        int kodeMinuman;
        menuMinuman();
        cin >> kodeMinuman;
        
        int hargaMinum;
        if(kodeMinuman > 5){
            cout << "Makanan tidak tersedia. Silahkan Pilih ulang"<< endl;
            goto tambah;
        }else{
            hargaMinum = hargaMinuman(kodeMinuman);
        }
        int porsiMinun = banyak();
        int hargaMinuman = perhitunganMinum(porsiMinun, hargaMinum);
        hargaMinumSementara += hargaMinuman;
        cout << "Harga Minuman Anda : Rp" << hargaMinumSementara << endl;
        hargaSemua += hargaMinumSementara;

        char tambahMinum = tambahLagi();
        if(tambahMinum == 'n'){
            goto kasir;
        }else{
            goto tambah;
        }
    }else{
        goto jump;
    }
    
    kasir :
    
    cout << "Total Harga Keseluruhan adalah: Rp" << hargaSemua << endl;
    cout << "==================================================="<< endl;

    int uang;
    cout << "Masukan Uang anda : Rp";
    cin >> uang;

    kembalian(uang, hargaSemua);
}