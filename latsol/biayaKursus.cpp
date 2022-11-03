#include <iostream>
using namespace std;

int main(){
    string nama, alamat, lamaKursus;
    int biayaKursus, totalBiaya, biayaPendaftaran = 100000;
    char kodePaket;

    cout << "Formulir Pendaftaran Kursus" << endl;
    cout << "-------------------------------" << endl;
    cout << "Nama : ";
    getline(cin >> ws, nama);
    cout << "Alamat : ";
    getline(cin >> ws, alamat);
    cout << "Kode Paket : ";
    cin >> kodePaket;

    switch (kodePaket)
    {
    case 'a': case 'A':
        biayaKursus = 1500000, lamaKursus = "6 Bulan";
        break;
    case 'b' : case 'B':
        biayaKursus = 1000000, lamaKursus = "4 Bulan";
        break;
    case 'c': case 'C':
        biayaKursus = 750000, lamaKursus = "2 Bulan";
        break;
    default:
        biayaKursus = 500000, lamaKursus = "1 Bulan";
        break;
    }
    totalBiaya = biayaKursus + biayaPendaftaran;

    cout << "Biaya Pendaftaran sebesar = Rp" << biayaPendaftaran<< endl;
    cout << "Biaya Kursus sebesar = Rp" << biayaKursus<< " selama "<< lamaKursus << endl;
    cout << "Total Biaya sebesar = Rp" << totalBiaya << endl;

}