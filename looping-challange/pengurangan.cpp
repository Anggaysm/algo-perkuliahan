#include <iostream>
using namespace std;

int main (){
    int i,hasil = 0;
    for (i = 10; i >= 2; i -= 2){
        hasil = hasil + i;
        if(i > 2){
            cout << i << " + ";
        }else{
            cout << i;
        }
    }
    
    cout << " = " << hasil;
    
    // for (i = 10; i >= 2; i--){
    //     if (i%2==0)
    //     {
    //         hasil = hasil + i;
    //         if (i > 2)
    //         {
    //             cout << i << "+";
    //         }else{
    //             cout << i;
    //         }
            
    //     } 
    // }
    
}