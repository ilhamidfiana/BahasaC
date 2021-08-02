#include<iostream>
#include <stdlib.h>
#include <Windows.h>
#include <stdio.h>
#include <iomanip>
#include <conio.h>
#include <unistd.h>
#include <cstdlib>
using namespace std;
int main(){
	int choose;
		awal :
		system ("cls");
		cout<<"Apakah anda cinta? pilih angka genap dan ganjil"<<endl;
        cout<<endl;
        cout<<"1. 1(True)"<<endl;
        cout<<"2. 0(False)"<<endl;
        cout<<endl;
        cout<<"Masukkan Pilihan Anda = ";cin>>choose;
        if(choose == 1){
        	cout<<"Pilihan anda sangat tepat :D"<<endl;
        	sleep(2);
        	cout<<"I Love Youuuuu :D........."<<endl;
		}
		else{
			cout<<"Gak bisa harus pilih 1 / True :V (2 detik)"<<endl;
			sleep(2);
			goto awal;
			
		}
    return 0;
}
