#include <iostream>
using namespace std;

int main (){
    int luar, dalem, hasil;
    for (luar = 1; luar <= 3; luar++){
        for(dalem = 1; dalem <= luar; dalem++){
            cout << dalem ;
        }
        cout << "\n";
    }
}