#include <iostream>
using namespace std;
   int main(){
   	cout<<"=========WELCOME TO PROGRAM INTRUKSI PERULANGAN========== \n";
   	cout<<"============PERULANGAN DO WHILE=============== \n";
   	cout<<"===========PEMBELIAN BAKSO============== \n";
   	
   	int input,porsi,harga = 15000,hasil =0;
   	//anda akan melakukan intruksi perulangan pembelian bakso dengan menggunakan perulangan do while//
   	cout<<"harga per porsi = Rp15000 \n";
   	//anda telah menetapkan harga bakso untuk per porsi adalah 15.000//
   	cout<<"anda ingin berapa kali melakukan pemesanan: ";
   	//anda akan memasukkan input untuk melakukan perulangan sesuai yang anda inginkan//
   	cin>>input;
   	//anda akan memasukkan nilai i//
   	int i = 1;
   	do{
   	   cout<<"masukkan pesanan bakso ke "<<i<<"(porsi): ";
   	   i++;
   	   cin>>porsi;
   	   hasil=hasil+porsi;
   	   
      }
    while (i <= input);
    cout<<"total pesanan bakso anda adalah = "<<hasil<<"(porsi) \n ";
   	cout<<"total harga yang harus anda bayarkan adalah =Rp"<<hasil*harga;
    return 0;
   	
   	
   	
   }
