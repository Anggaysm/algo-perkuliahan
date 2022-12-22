#include <iostream>
using namespace std;

void integer(){
    int ketemu, kunci, besar;
    cout << "Masukan besar array : ";
    cin >> besar;
    int nilai [besar];
    for (int i = 0; i < besar; i++)
    {
        cout << "Masukan array ke-" << i+1 << " = ";
        cin >> nilai[i];
    }
    cout<<endl;

    cout << "masukan angka yang ingin anda cari: ";
    cin >> kunci;
    for(int cari=0; cari < besar; cari++){
        if (nilai[cari] == kunci)   
        {
            ketemu = cari;
            break;
        }else{
            ketemu = 0;
        }
        
    }

    if(ketemu != 0){
        cout << "Posisi angka yang ada masukan ada di index"<<ketemu<<" dalam array";
    }else{
        cout <<"ngga ada di array, makasih";
    }

    
}

void real (){
    int ketemu, besar;
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

    cout << "masukan angka yang ingin anda cari: ";
    cin >> kunci;
    for(int cari=0; cari < besar; cari++){
        if (nilai[cari] == kunci)   
        {
            ketemu = cari+1;
            break;
        }else{
            ketemu = 0;
        }
        
    }

    if(ketemu != 0){
        cout << "Posisi angka yang ada masukan ada di "<<ketemu<<" dalam array";
    }else{
        cout <<"ngga ada di array, makasih";
    }
}

void karakter (){
    int ketemu, besar;
    char kunci;
    cout << "Masukan besar array : ";
    cin >> besar;
    char nilai [besar];
    for (int i = 0; i < besar; i++)
    {
        cout << "Masukan array ke-" << i+1 << " = ";
        cin >> nilai[i];
    }
    cout<<endl;

    cout << "masukan angka yang ingin anda cari: ";
    cin >> kunci;
    for(int cari=0; cari < besar; cari++){
        if (nilai[cari] == kunci)   
        {
            ketemu = cari+1;
            break;
        }else{
            ketemu = 0;
        }
        
    }

    if(ketemu != 0){
        cout << "Posisi angka yang ada masukan ada di "<<ketemu<<" dalam array";
    }else{
        cout <<"ngga ada di array, makasih";
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
    