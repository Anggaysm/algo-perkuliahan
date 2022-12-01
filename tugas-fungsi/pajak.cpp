#include <iostream>
using namespace std;


int potongan(int harga){
    int potongan = harga * 0.1;
    return potongan;
}

int main(){
    int input;
    cout << "Masukan Harga Pembelian : Rp";
    cin >> input;
    cout << "Pajak sebesar : Rp" << potongan(input)<<endl;
    int pajak = potongan(input);
    int total = pajak + input;
    cout << "Harga total sebesar : Rp"<< total;
}