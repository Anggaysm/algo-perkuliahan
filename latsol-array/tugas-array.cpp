#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
main ()
{
	int nilai[20];
	int nim[20];
	string nama[20];
	int i, max, min;
	cout<<"Masukkan Data Mahasiswa"<<endl;
	cout<<"======================="<<endl;
	for (i=1; i<=5; i++)
	{	
		cout<<" Masukkan Nim   Ke- "<<i << " = "; cin>>nim[i];
		cout<<" Masukkan Nama  Ke- "<<i << " = "; cin>>nama[i];
		cout<<" Masukkan Nilai Ke- "<<i << " = "; cin>>nilai[i];
		cout<<endl;
	}
	cout<<endl;
	cout << "Daftar Nilai Mahasiswa\n";
	cout << "======================\n";
	cout << "-------------------------------------\n";
	cout << "No	NIM		Nama	Nilai\n";
	cout << "-------------------------------------\n";
	
	
	for (i=1; i<5; i++)
	{
		cout << i << "	" << nim[i] << "	" << nama[i] << "	" << nilai[i];
		cout << endl;
	}
	
	cout << "-------------------------------------\n";
	
	//nilai tertinggi
	
	max = nilai[1];
	for (i=1; i<=5; i++)
	{
		if (nilai[i] > max)
		{
			max = nilai[i];
		}
	}
	
	//nilai terendah
	
	min = nilai[1];
	for ( i=1; i<=5; i++)
	{
		if (nilai[i] < min)
		{
			min = nilai[i];
		}
	}
	cout<<" Nilai Tertinggi : "<<max<<endl;
	cout<<" Nilai Terendah  : "<<min<<endl;
	
	return 0;

}
