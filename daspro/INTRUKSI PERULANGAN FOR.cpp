#include <iostream>
using namespace std;

int main(){
	cout<<"NAMA = WASDA BIL HUSNA \n";
	cout<<"NIM = F1G121033 \n";
	cout<<"STUDI = ILMU KOMPUTER \n";
	
	int i, input,porsi,harga =15000,hasil = 0;
	//anda akan melakukan intruksi perulangan untuk pembelian bakso//
	cout<<"========SELAMAT DATANG DI  PROGRAM INTRUKSI PERULANGAN FOR============== \n";
	cout<<"========Pembelian Bakso Wasda============ \n";
	cout<<"harga per porsi = Rp15000 \n";
	//harga bakso per porsi adalah Rp.15000//
	cout<<"ingin berapa kali melakukan pemesanan: ";
	//anda akan memasukkan angka sesuai keinginana anda yang akan di input untuk melakukan perulangan//
	cin>>input;
	
	for(i = 1; i <= input; i++){
		cout<<"masukkan pesanan bakso ke "<<i<<"(porsi): ";
		cin>>porsi;
		hasil=hasil+porsi;
		
	}
	    cout<<"total pesanan bakso anda adalah = "<<hasil<<"(porsi) \n ";
	    cout<<"total harga yang harus anda bayarkan =Rp"<<hasil*harga;
	    
	    return 0;
	    
	    
	
	
}
