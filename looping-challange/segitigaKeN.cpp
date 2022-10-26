#include <iostream>
using namespace std;

int main(){
    int n,i,j;
    cout << "masukan bilangan :";
    cin >> n;

    if (n == 0)
    {
        cout << "Jangan bercanda terus,,, masa bilangan yang dimasukin 0";
    }
    

    for (i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << "\n";
    }
}