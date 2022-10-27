#include <iostream>
using namespace std;

int main (){
    int hasil, dalem, luar, total;
    total = 0;
    for (luar = 5; luar >= 1; luar--){
        hasil = 0;
        for(dalem = 1; dalem <= luar; dalem++){
            // cout << dalem;        
            hasil = dalem + hasil;
            if (dalem < luar)
            {
                cout << dalem << " + ";
            }else{
                cout << dalem;
            }
            
        }
        total += hasil;
        cout << " = " << hasil;
        cout << "\n";
    }
        cout << "total adalah :" << total;
}