#include <iostream>
using namespace std;

void inputan(int inputA[], int N){
    for (int i=0; i<N; i++){
        cout << "Masukan angka ke-"<<i+1<<":";
        cin>>inputA[i];
    }
}
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