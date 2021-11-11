#include <iostream>
using namespace std;
	int main(){
	    cout<<"=========Nama = Wasda Bil Husna============== \n";
	    cout<<"=========Nim = F1G121033==================== \n";
		cout<<"========SELAMAT DATANG DI INTRUKSI PERULANGAN============= \n";
		cout<<"============INTRUKSI PERULANGAN WHILE================ \n";
		cout<<"=============PEMBELIAN BAKSO WASDA================= \n";
		//Anda akan melakukan program pembelian bakso dengan menggunakan intruksi perulangan while//
		int input,porsi,harga = 15000,hasil =0;
		cout<<"harga per porsi = 15000 \n";
		//anda menetapkan harga bakso per porsi seharga 15.000//
		cout<<"ingin berapa kali melakukan pemesanan = ";
		//Anda akan memasukkan nilai input untuk melakukan suatu perulangan//
		cin>>input;
		
		int i = 1;
		while (i <= input){
			cout<<"masukkan pesanan bakso ke "<<i<<"(porsi): "; 
			i++;
	        cin>>porsi;
			hasil=hasil + porsi;
		}
		cout<<"total pesanan bakso anda adalah = "<<hasil<<"(porsi) \n ";
		cout<<"total harga yang harus anda bayarkan adalah = Rp"<<hasil*harga;
		
    return 0;
		
	}
