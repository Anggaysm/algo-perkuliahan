#include <iostream>
using namespace std;

int main(){
    int harga[4] = {8000, 5500, 1000, 4500};
    int loncatan;

    cout<<"sebelum diurutkan"<<endl;
    for(int i=0; i < 4; i++){
        cout<<harga[i]<<" ";
    }

    cout<<endl<<endl;
    cout<<"sudah diurutkan"<<endl;
    for(int luar=0; luar < 4; luar++){
        for(int dalem=4; dalem>=luar+1; dalem--){
            if(harga[dalem]<harga[dalem-1]){
                loncatan = harga[dalem];
                harga[dalem] = harga[dalem-1];
                harga[dalem-1] = loncatan;
            }
        }
        cout<<harga[luar]<<" ";
    }
}