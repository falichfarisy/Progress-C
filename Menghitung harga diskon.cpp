#include <iostream>
using namespace std;

float barang, diskon, total, bersih;//penentuan variabel barang, diskon, total, bersih

int main(){
	cout<<"Masukkan harga barang:Rp. "; cin>>barang; //perintah mengeluarkan tampilan dan memasukkan barang
	cout<<"Masukkan harga diskon(%): "; cin>>diskon; //perintah mengeluarkan tampilan dan memasukkan diskon

	cout<<"---------------------------+"<<endl; //batas input harga barang dan diskon
	
	cout<<"Harga barang:Rp. "<<barang<<endl; //tampilan harga awal
	total= (barang*diskon)/100; //penjumlahan harga diskon
	cout<<"Besar diskon:Rp. "<<total<<endl; //keluaran besar harga diskon
	cout<<"---------------------------+"<<endl; //tanda penjumlahan
	
	bersih= barang-total; //hitungan pengurangan harga awal dengan harga diskon
	cout<<"Harga bersih:Rp. "<<bersih; //keluaran harga bersih yng harus dibayar
	return 0; //tidak ada perulangan
}
