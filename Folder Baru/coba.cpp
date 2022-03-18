#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int bil1,bil2, pil;
	float hasil;
	string operasi;
	
	cout<<"PILIH OPRASI ARITMATIKA"<<endl;
	cout<<"1. Penjumlahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<"5. Modulus"<<endl;
	cout<<endl;
	
	cout<<" : ;PILIHAN ANDA";
	cin>>pil;
	cout<<"Masukan Bilangan pertama : ";
	cin>>bil1;
	cout<<"Masukan Bilangan kedua : ";
	cin>>bil2;	
	
	if(pil == 1){
	    hasil=bil1+bil2;
		operasi='+';
	}
	else if(pil == 2) {
		hasil=bil1-bil2;
		operasi='-';
	}
	else if(pil ==3){
		hasil=bil1*bil2;
		operasi='*';
	}
	else if(pil == 4){
		hasil=bil1/bil2;
		operasi='/';
	}
	else if(pil == 5){
		hasil=bil1%bil2;
		operasi='%';
	}
	else{
			cout<<"Salah BANG"<<endl;
	}
	cout<<"-----------------------------"<<endl;
	cout<<"    "<<bil1<<operasi<<bil2<<"="<<hasil<<endl;
	cout<<"-----------------------------"<<endl;
	
	getch();
}
