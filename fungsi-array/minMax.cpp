#include <iostream>
using namespace std;

//ini buat inputan user
void inputan(int inputA[], int N){
    for (int i=0; i<N; i++){
        cout << "Masukan angka ke-"<<i+1<<":";
        cin>>inputA[i];
    }
}

//ini buat mencari nilai terbesar dari array
int findMax(int inputA[], int N){
    int max = 0;
    for (int i = 0; i < N; i++){
        if (inputA[i] > max)
        {
            max = inputA[i];
        }
        
    }
    return max;
}
//ini buat mencari nilai terkercil dari array
int findMin(int inputA[], int N){
    int min = inputA[0];
    for (int i = 0; i < N; i++){
        if (inputA[i] < min)
        {
            min = inputA[i];
        }
        
    }
    return min;
}
int main(){
    int jumlah;
    cout<<"Mencari Nilai terbanyak dari Array yang dimasukan"<<endl;
    cout<<"====================================================="<<endl;
    cout<<"Masukan banyak angka = ";
    cin >> jumlah;
    int angka[jumlah];
    inputan(angka, jumlah);
    cout<<"angka terbesar dari array = "<<findMax(angka, jumlah)<<endl;
    cout<<"angka terkecil dari array = "<<findMin(angka, jumlah)<<endl;
}