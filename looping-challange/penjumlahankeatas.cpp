#include <iostream>
using namespace std;

int main (){
    int hasil, dalem, luar, total;
    total = 0;
    for (luar = 3; luar >= 1; luar--){
        
        hasil = 0;
        for(dalem = 1; dalem <= luar; dalem++){     
            hasil = hasil + dalem;
            if (dalem < luar)
            {
                cout << dalem << " + ";
            }else{
                cout << dalem;
            }
            
        }
        total = total + hasil;
        cout << " = " << hasil;
        cout << "\n";
    }
        cout << "total adalah : " << total;

    
}