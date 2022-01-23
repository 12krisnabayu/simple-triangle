#include <iostream>//header untuk cin dan cout
#include <conio.h>//header untuk getch
#include<fstream>
#include <conio.h>

using namespace std;//wajib untuk iostream

int main()//fungsi utama
{
    int a,t,luas;/*deklarasi variable dengan tipe data
    integer, a untuk alas dan t untuk tinggi*/
    char judul;//judul
    
	system("cls");
 	
 	ifstream file;
 	file.open("judul.txt");
 		while(!file.eof())
 	{
     file.get(judul);
     cout<<judul;
 	}
 		file.close();
 		
    cout << "Masukkan alas : ";//untuk ditampilkan
    cin>>a;//untuk input ke variable a
    cout << "Masukkan tinggi : ";//untuk ditampilkan
    cin>>t;//untuk input ke variable b
    luas=(a*t)/2;//rumus luas segitiga
    cout <<"Luas Segitiga = "<<luas;//menampilkan hasil luas
    getch();//untuk menahan tampilan

    getch();
	return 0;//mengembalikan nilai variable
}
