#include <iostream>
#include <cstring>
using namespace std;

int main (){
    char nama [100];
    char salinNama [100];
    char namaDua[100];
    int perbandingan;
    cout << "Masukan Nama untuk diuji : ";
    gets(nama);
    strcpy(salinNama, nama);
    cout << "Nama yang disalin adalah: "<< salinNama << endl;
    cout << "Panjang karakter adalah: " << strlen(nama) << endl;
    
    cout << "Masukan Nama kedua untuk perbandingan: " ;
    gets(namaDua);
    perbandingan = strcmp(nama, namaDua);
    if (perbandingan < 0)
    {
        cout << "nama kedua lebih panjang "<< namaDua << endl << "yang bejumlah karakter : " << strlen(namaDua) << endl;
        strlwr(namaDua);
        cout << "Nama dikonvert ke huruf kecil semua : " << namaDua << endl;
        strupr(namaDua);
        cout << "Nama dikonvert ke huruf besar : "<< namaDua<< endl;
        strrev(namaDua);
        cout << "Nama jika dibalik adalah: " << namaDua << endl;
    }else if (perbandingan > 0)
    {
        cout << "Nama Pertama lebih panjang " << nama << endl;
        strlwr(nama);
        cout << "Nama dikonvert ke huruf kecil semua : " << nama << endl;
        strupr(nama);
        cout << "Nama dikonvert ke huruf besar : "<< nama<< endl;
        strrev(nama);
        cout << "Nama jika dibalik adalah: " << nama << endl;
    }else{
        cout << "Panjang nama sama coyyyyy!!!!!" << endl;
    }
    strcat(nama, namaDua);
    cout << "Output semua ini dihasilkan dari nama "<<nama;
    
    
}