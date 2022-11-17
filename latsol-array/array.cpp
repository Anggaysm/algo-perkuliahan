#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

main ()
{
	int nim[5];
	int nama[5];
	int nilai[5];
	int i;
	
	cout << " Masukkan Data Mahasiswa \n" << " =======================================\n";
	for ( i=1; 1<=5; i++)
	{
		cout << " Masukkan Nim Ke   -" << i << " = "; cin >> nim[i];
		cout << " Masukkan Nama Ke  -" << i << " = "; cin >> nama[i];
		cout << " Masukkan Nilai Ke -" << i << " = "; cin >> nilai[i];
		cout << endl;
	}
}
