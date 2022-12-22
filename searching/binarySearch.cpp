#include <iostream>
using namespace std;

void integer(){
    int kunci, besar, ketemu;
    cout << "Masukan besar array : ";
    cin >> besar;

    int nilai [besar];
    

    for (int i = 0; i < besar; i++)
    {
        cout << "Masukan array ke-" << i+1 << " = ";
        cin >> nilai[i];
    }
    int l = 0;
    int r = besar - 1;
    cout<<endl;
    cout << "Nilai sesudah diurutkan Kecil ke besar"<< endl;
    cout << "========================"<<endl;
    int temp;
    for(int a=0; a<besar; a++){
        for (int b = besar -1; b >= a+1; b--)
        {
            if(nilai[b]<nilai[b-1]){
                temp = nilai[b];
                nilai[b] = nilai[b-1];
                nilai[b-1] = temp;
            } 
        }
        cout << nilai[a]<< " ";
    }
    cout<<endl;
    cout << "masukan angka yang ingin anda cari: ";
    cin >> kunci;

    while (l <= r){
        int mid = l + (r - l) /2;

        if(nilai[mid] == kunci){
            ketemu = mid;
            break;
        }
        if(nilai[mid] < kunci){
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }

    if (ketemu != 0)  
    {
        cout << "Posisi angka ada pada indeks ke " <<ketemu<< " dalam array";
    }else{
        cout << "angka tidak ditemukan";
    }
    
    
}
void real(){
    int besar, ketemu;
    float kunci;
    cout << "Masukan besar array : ";
    cin >> besar;

    float nilai [besar];

    for (int i = 0; i < besar; i++)
    {
        cout << "Masukan array ke-" << i+1 << " = ";
        cin >> nilai[i];
    }
    cout<<endl;
    cout << "Nilai sesudah diurutkan Kecil ke besar"<< endl;
    cout << "========================"<<endl;
    float temp;
    for(int a=0; a<besar; a++){
        for (int b = besar - 1; b >= a+1; b--)
        {
            if(nilai[b]<nilai[b-1]){
                temp = nilai[b];
                nilai[b] = nilai[b-1];
                nilai[b-1] = temp;
            } 
        }
        cout << nilai[a]<< " ";
    }
    cout<<endl;
    int l = 0;
    int r = besar - 1;
    cout << "masukan angka yang ingin anda cari: ";
    cin >> kunci;

    while (l <= r){
        int mid = l + (r - l) /2;

        if(nilai[mid] == kunci){
            ketemu = mid;
            break;
        }
        if(nilai[mid] < kunci){
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }

    if (ketemu != 0)  
    {
        cout << "Posisi angka ada pada indeks ke " <<ketemu<< " dalam array";
    }else{
        cout << "angka tidak ditemukan";
    }
    
    
}
void karakter(){
    int besar, ketemu;
    char kunci;
    cout << "Masukan besar array : ";
    cin >> besar;

    char nilai [besar];
    

    for (int i = 0; i < besar; i++)
    {
        cout << "Masukan array ke-" << i+1 << " = ";
        cin >> nilai[i];
    }
    int l = 0;
    int r = besar - 1;
    cout<<endl;
    cout << "Nilai sesudah diurutkan Kecil ke besar"<< endl;
    cout << "========================"<<endl;
    char temp;
    for(int a=0; a<besar; a++){
        for (int b = besar - 1; b >= a+1; b--)
        {
            if(nilai[b]<nilai[b-1]){
                temp = nilai[b];
                nilai[b] = nilai[b-1];
                nilai[b-1] = temp;
            } 
        }
        cout << nilai[a]<< " ";
    }
    cout<<endl;
    cout << "masukan angka yang ingin anda cari: ";
    cin >> kunci;

    while (l <= r){
        int mid = l + (r - l) /2;

        if(nilai[mid] == kunci){
            ketemu = mid;
            break;
        }
        if(nilai[mid] < kunci){
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }

    if (ketemu != 0)  
    {
        cout << "Posisi angka ada pada indeks ke " <<ketemu<< " dalam array";
    }else{
        cout << "angka tidak ditemukan";
    }
    
    
}

int main(){
    bool ulang;
    do{
        int opsi;
        cout<<"1. Array Integer"<< endl
            << "2. Array Real" << endl
            << "3. Array Char"<< endl
            << "4. Keluar"<< endl;

        cout << "Pilih Opsi Untuk Array : ";
        cin >> opsi;

        
        

        switch (opsi)
        {
        case 1:
            integer();
            ulang = false;
            break;
        
        case 2:
            real();
            ulang = false;
            break;
        case 3:
            karakter(); 
            ulang = false;
            break;
        case 4:
            cout << "Terimakasih";
            ulang = false;
            break;

        default:
            cout << "Pilihan tidak di temukan"<<endl;
            ulang = true;
            break;
        }

    } while (ulang);
}