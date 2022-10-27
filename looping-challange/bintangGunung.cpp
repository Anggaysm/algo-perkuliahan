#include <iostream>
using namespace std;
int main (){
    int luar, dalem;
    for (luar = 1; luar <= 5; luar ++){
        for(dalem = 1; dalem <= luar; dalem++){
            cout << "* ";
        }
        cout << "\n";
    }
    for (luar = 4; luar >= 1; luar--){
        for(dalem = luar; dalem >= 1; dalem--){
            cout << "* ";
        }
        cout << "\n";
    }

}