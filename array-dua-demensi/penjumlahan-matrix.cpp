#include <iostream>
#include <iomanip> 
using namespace std;


int main (){
    int angkaA[3][4], angkaB[3][4],hasil[3][4];
    cout<<"Program Penjumlahan Matrix"<<endl;
    cout<<"==========================="<<endl;
    cout<<"Masukan Elemen Matrik A"<<endl;
    for(int matA =0; matA < 3; matA++){
        
        for(int matAdalem = 0; matAdalem < 4; matAdalem++){
        cout<<"Nilai A["<<matA<<"]["<<matAdalem<<"] = ";
        cin>>angkaA[matA][matAdalem];
        }
        cout<<endl;
    }

    for(int matB = 0; matB < 3; matB++){
        for (int matBdalem = 0; matBdalem < 4; matBdalem++)
        {
            cout<<"Nilai B["<<matB<<"]["<<matBdalem<<"] = ";
            cin>>angkaB[matB][matBdalem];
        }
        cout<<endl;
    }
    cout<<"Matrik A"<<endl<<"---------"<<endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout<<left<<setw(5)<<angkaA[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Matrik B"<<endl<<"---------"<<endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout<<left<<setw(5)<<angkaB[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Hasil"<<endl<<"-----------"<<endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
           hasil[i][j] = angkaA[i][j] + angkaB[i][j];
           cout<<left<<setw(5)<<hasil[i][j];
        }
        cout<<endl;
    }

    
}