#include <iostream>
using namespace std;

int main (){
    int luar, dalem;
    for(luar = 1; luar <= 5; luar++){
        for(dalem = 1; dalem <= luar; dalem++){
            cout << dalem;
        }
        cout << "\n";
    }
}