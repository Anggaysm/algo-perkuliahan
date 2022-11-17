#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    float nilai[5], min, max, total;
    long nim[5];
    string nama[5];

    cout<< "Masukan Data Mahasiswa"<<endl;
    cout<< "======================="<<endl;

    for(int input = 0; input < 5 ; input++){
        cout<<"Masukan Nim   Ke- "<< input << " = "; 
        cin >> nim[input];
        cout<<"Masukan Nama  Ke- "<< input << " = "; 
        getline(cin>>ws, nama[input]);
        cout<<"Masukan Nilai Ke- "<< input << " = "; 
        cin >> nilai[input];
        cout<<endl;
    }
    cout<<endl;
    cout<<"Daftar Nilai Mahasiswa"<< endl ;
    cout<<"======================="<< endl;

    cout<<"----------------------------------------"<< endl;
    cout<<left<<setw(5)<<"No"<<left<<setw(10)<<"Nim"<<left<<setw(10)<<"Nama"<<left<<setw(8)<<"Nilai"<<endl;
    cout<<"----------------------------------------"<< endl;
    for(int output = 0; output<5; output++){
        cout<<left<<setw(5)<<output<<
            left<<setw(10)<<nim[output]
            <<left<<setw(10)<<nama[output]
            <<left<<setw(8)<<nilai[output]<<endl;
    }
    cout<<"----------------------------------------"<< endl;
    max=nilai[0];
    for(int besar=0; besar < 5; besar++){
        if (nilai[besar]>max)
        {
            max=nilai[besar];
        }
    }
    min=nilai[0];
    for(int kecil=0; kecil < 5; kecil++){
        if (nilai[kecil]<min)
        {
            min=nilai[kecil];
        }
    }
    cout<<"Nilai terbesar = "<<max<<endl;
    cout<<"Nilai Terkecil = "<<min<<endl;

}