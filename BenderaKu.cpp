#include<iostream>
#include <stdlib.h>
#include <Windows.h>
#include <stdio.h>
#include <iomanip>
#include <conio.h>
#include <unistd.h>
#include <cstdlib>
using namespace std;

int l, k;
void setcolor(unsigned short color)
{
HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);

SetConsoleTextAttribute(hCon,color);
}
void benderamerah(){
	
	for(l=0;l<5;l++){
		for(k=0;k<22;k++){
			setcolor(4);
			cout<<"*";	
		}
	cout<<endl;
	}
	
}

void benderaputih(){
	for(l=0;l<5;l++){
		for(k=0;k<22;k++){
			setcolor(7);
			cout<<"*";
		}
	cout<<endl;
	}
}
int main(){
	system ("cls");
	cout<<"Selamat Hari Kemerdekaan Untuk Indonesia 76Thn"<<endl;
    sleep(5);
    benderamerah();
    benderaputih();
    cout<<endl;
	sleep(2);
	cout<<"Indonesia - Ilham Idfiana"<<endl;
}
