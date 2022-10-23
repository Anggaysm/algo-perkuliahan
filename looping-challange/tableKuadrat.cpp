#include <iostream>
using namespace std;
#include <iomanip>
#include <cmath>


int main (){
    int bil;
    cout << left << setw(5) << "X" << left << setw(5) << "X^2" << left << setw(8) << "X^3" << endl << "-------------" << endl;
    for (bil = 1; bil <= 10; bil++){
        cout << left << setw(5) << bil << 
        left << setw(5) << pow(bil, 2) << 
        left << setw(5) << pow(bil, 3) << endl;
    }
}