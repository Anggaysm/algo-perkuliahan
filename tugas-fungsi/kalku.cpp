#include <iostream>
#include <math.h>
 
using namespace std;
void jumlah(){
    int a, b;
    cout << "Mauskan Angka Pertama :";
    cin >> a;
    cout << "Mauskan Angka Kedua :";
    cin >> b;
    int hasil = a+b;
    cout <<"Hasil Perhitungan : "<< hasil;
}
void kurang(){
    int a, b;
    cout << "Mauskan Angka Pertama :";
    cin >> a;
    cout << "Mauskan Angka Kedua :";
    cin >> b;
    int hasil = a-b;
    cout <<"Hasil Perhitungan : "<< hasil;
}
void kali(){
    int a, b;
    cout << "Mauskan Angka Pertama :";
    cin >> a;
    cout << "Mauskan Angka Kedua :";
    cin >> b;
    int hasil = a*b;
    cout <<"Hasil Perhitungan : "<< hasil;
}
void bagi(){
    int a, b;
    cout << "Mauskan Angka Pertama :";
    cin >> a;
    cout << "Mauskan Angka Kedua :";
    cin >> b;
    int hasil = a/b;
    cout <<"Hasil Perhitungan : "<< hasil;
}
void mod(){
    int a, b;
    cout << "Mauskan Angka Pertama :";
    cin >> a;
    cout << "Mauskan Angka untuk dimodule :";
    cin >> b;
    int hasil = a%b;
    cout <<"Hasil Perhitungan : "<< hasil;
}
void pangkat(){
    int a,b;
    cout << "Mauskan Angka Pertama :";
    cin >> a;
    cout << "Mauskan Angka untuk dipangkat :";
    cin >> b;
    int hasil = pow(a,b);
    cout <<"Hasil Perhitungan : "<< hasil;
}
void akar(){
    int a;
    cout << "Mauskan Angka :";
    cin >> a;
    int hasil = sqrt(a);
    cout <<"Hasil Perhitungan : "<< hasil;
}


int main(){
    int opsi;
    cout << " 1. Penjumlahan" << endl
         << " 2. Pengurangan" << endl
         << " 3. Perkalian" << endl
         << " 4. Pembagian" << endl
         << " 5. Perpangkatan" << endl
         << " 6. Akar Pangkat" << endl
         << " 7. Modulus" << endl; 

    cout << "Pilih Opsi Aritmatika : ";
    cin >> opsi;
    switch (opsi)
    {
    case 1:
        jumlah();
        break;
    case 2:
        kurang();
        break;
    case 3:
        kali();
        break;
    case 4:
        bagi();
        break;
    case 5:
        pangkat();
        break;
    case 6:
        akar();
        break;
    case 7:
        mod();
        break;
    
    default:
    cout<<"1-7 doang banggg, kenapa yang dimasukin "<<opsi;
        break;
    }
}