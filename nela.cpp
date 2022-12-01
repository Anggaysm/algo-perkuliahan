// Syifa Naila Dwi Artanti
// 27
// 12 IPA 2

#include <conio.h>
#include <stdio.h>
#include <windows.h>

main (){
	float  luas_segitiga,  luas_persegi, alas, tinggi, panjang, lebar;
	int pilih;
	char s;
	
	menu:
    	system("cls");
    	printf("\nProgram Menghitung Bangun Datar");
    	printf("\nPILIH MENU : \n");
    	printf("1. Segitiga\n");
    	printf("2. Persegi Panjang\n");
    	printf("3. Keluar\n");
    	printf("Masukan Pilihan Menu = "); scanf("%d", &pilih);
    	
    	switch(pilih){
    		case 1:
    		segitiga:
    		system("cls");
    		printf("Program Menghitung Segitiga\n");
    		printf("Masukan Alas = "); scanf("%f", &alas);
    		printf("Masukan Tinggi = "); scanf("%f", &tinggi);
    		luas_segitiga=(alas*tinggi)*0.5;
    		printf("hasil luas segitiga = %.2f", luas_segitiga);
    		printf("\nApakah Anda Ingin Mengulanginya | Ya = Y | Tidak = T | Menu Utama = M | = ");s=getche();
    		printf("\n");
    		
    		if (s=='y'|| s=='Y'){
    			goto segitiga;
    		}
    		else if(s=='t'||s=='T'){
    			goto exit;
    		}
    		else if(s=='m'||s=='M'){
    			goto menu;
			}
			break;
			
			case 2:
			persegi:
			system("cls");
    		printf("Program Menghitung Persegi Panjang\n");
    		printf("Masukan Nilai Panjang = "); scanf("%f", &panjang);
    		printf("Masukan Nilai lebar = "); scanf("%f", &lebar);
    		luas_persegi=panjang*lebar;
    		printf("hasil Perhitungan Luas Persegi Panjang = %.2f", luas_persegi);
    		printf("\nApakah Anda Ingin Mengulanginya | Ya = Y | Tidak = T | Menu Utama = M | = ");s=getche();
    		printf("\n");
    		
    		if (s=='y'|| s=='Y'){
    			goto persegi;
    		}
    		else if(s=='t'||s=='T'){
    			goto exit;
    		}
    		else if(s=='m'||s=='M'){
    			goto menu;
			}
			break;
			
			case 3:
			exit:
				system("cls");
				printf("\nTerima Kasih Telah Belajar Informatika");break;
				
			default:
			printf("Input yang anda masukan salah!!");
			}
    		getch();
		}