#include <iostream>
using namespace std;

string nama; //penentuan variabel nama
double ntugas, nuts, nuas;	//penentuan variabel tugas, Nilai uts, Nilai uas, rata-rata, nim, hasil, dan total
int nim;
float hasil, total;

int main(){
	cout<<"Masukkan Nama: "; //mengeluarkan perintah memasukkan nama
	cin>> nama; 	//input nama
	cout<<"Masukkan Nim: ";	//mengeluarkan perintah memasukkan nim
	cin>> nim; //input nim
	cout<<"=============="<<endl;//batas nama dan nim
	cout<<"Masukkan Nilai Tugas: ";//mengeluarkan perintah memasukkan nilai tugas
	cin>> ntugas;	//input tugas
	cout<<"Masukkan Nilai UTS: ";//mengeluarkan perintah memasukkan nilai uts
	cin>> nuts; //input nilai uts
	cout<<"Masukkan Nilai UAS: ";//mengeluarkan perintah memasukkan nilai uas
	cin>> nuas; //input nilai uas
	
	cout<<"Nama: "<<nama<<endl;//menampilkan nama
	cout<<"Nim: "<<nim<<endl;//menampilkan nim
	
	total=ntugas+nuts+nuas;//menjumlah nilai tugas, uts, dan uas
	hasil= total/3;//membagi 3 total dari penjumlahan nilai tugas, uts dan uas
	cout<<"Nilai rata-rata: "<<hasil;//mengeluarkan hasil dari pembagian nilai rata-rata dari nilai tugas, uts, dan uas
	return 0;
}
