#include <iostream>
using namespace std;

int main(){
    string nama,prodi,matkul, keterangan;
    double nilaiQ, nilaiMid, nilaiUas, nilaiTugas, NilaiAkhir, nim;
    cout<< "Aplikasi Nilai"<<endl;
    cout<< "-------------------------------"<<endl;
    cout<< "NIM : ";
    cin >> nim;
    cout<< "Nama : ";
    getline(cin >> ws, nama);
    cout<< "Prodi : ";
    getline(cin >> ws, prodi);
    cout<< "MataKuliah : ";
    cin >> matkul;
    cout<< "Niali Quiz : ";
    cin >> nilaiQ;
    cout<< "Nilai Mid : ";  
    cin >> nilaiMid;
    cout<< "Nilai UAS : ";
    cin >> nilaiUas;
    cout<< "Nilai Tugas : ";
    cin >> nilaiTugas;
    cout<< "-------------------------------"<<endl;
    NilaiAkhir =  0.15 * nilaiQ + 0.25 * nilaiMid + 0.3 * nilaiTugas + 0.3 * nilaiUas;

    cout<< "Nilai Akhir : "<< NilaiAkhir<<endl;
    if(NilaiAkhir >= 80 ){
        cout << "NH = A" << endl << "Mutu : 4" << endl << "LULUS";
    }else if (NilaiAkhir >=75){
        cout << "NH = B+" << endl << "Mutu : 3.5" << endl << "LULUS";
    }else if(NilaiAkhir >= 70){
        cout << "NH = B" << endl << "Mutu : 3" << endl << "LULUS";
    }else if(NilaiAkhir >= 65){
        cout << "NH = C+" << endl << "Mutu : 2.5" << endl << "LULUS";
    }else if(NilaiAkhir >= 60){
        cout << "NH = C" << endl << "Mutu : 2" << endl << "LULUS";
    }else if(NilaiAkhir >= 55){
        cout << "NH = D+" << endl << "Mutu : 1.5" << endl << "GAGAL";
    }else if (NilaiAkhir >= 50){
        cout << "NH = D" << endl << "Mutu : 1" << endl << "GAGAL";
    }else{
        cout << "NH = E" << endl << "Mutu : 0" << endl << "GAGAL";

    }
    
}