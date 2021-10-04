#modul 1 ini dapat dilihat soalnya di https://docs.google.com/document/d/1EAzyKp-NBBJrl1T5grRiTS9TgzIrLq6b/edit

#include<iostream>
#include <stdlib.h>
#include <Windows.h>
#include <stdio.h>
#include <iomanip>
#include <conio.h>
#include <unistd.h>
#include <cstdlib>
using namespace std;

float jm,jk,jmm,jkm,waktu,waktum,uang;
float penambahan; 
void lama_waktu(float jm,float jk, float jmm,float jkm){
	waktu = jk - jm;
	waktum = jmm + jkm;
	if (waktum < 30){
		penambahan = 0;
	}
	else{
		penambahan = 2000;
		if(waktum == 60){
			waktu+=1;
			waktum = 0;
		}	
	}
}

void hitung_biaya(){
	uang = waktu * 3000 + penambahan;
}

void output(float jm,float jk, float jmm,float jkm){
	cout<<"Hasil "<<endl;
	cout<<"Jam Masuk Parkir (Jam) : "<<jm<<endl;
	cout<<"Jam Masuk Parkir (Mnt): "<<jmm<<endl;
	cout<<"Jam Masuk Keluar (Jam): "<<jk<<endl;
	cout<<"Jam Masuk Keluar (Mnt): "<<jkm<<endl;
	cout<<"Lama Parkir : "<<waktu<<" Jam "<<waktum<<" Menit "<<endl;
	cout<<"Biaya Parkir : "<<uang<<endl;
}

int main(){
	cout<<"Menghitung biaya parkir dan waktu parkir"<<endl;
	cout<<"Masukkan Jam Masuk (jam): ";cin>>jm;cout<<endl;
	cout<<"Masukkan Jam Masuk (mnt): ";cin>>jmm;cout<<endl;
	cout<<"Masukkan Jam Keluar (jam): ";cin>>jk;cout<<endl;
	cout<<"Masukkan Jam Keluar (mnt): ";cin>>jkm;cout<<endl;
	lama_waktu(jm,jk,jmm,jkm);
	hitung_biaya();
	output(jm,jk,jmm,jkm);
	return 0;
}
