#include <iostream>
using namespace std;

int x=0; int pilih; 
struct data{
	int beli;
	int jual;
}
plg[1000];


int main(){
	plg[x].jual=0;
	
do { 
	cout<<"Masukan jumlah tiket yang akan dibeli	: "; cin>>plg[x].beli;
	plg[x].jual=plg[x].jual+plg[x].beli;
	system ("cls");
	cout<<"=================================================="<<endl;
	cout <<"Jumlah tiket yang terjual sekarang	: ["<<plg[x].jual<<"]"<<endl;
	cout<<"Jumlah uang masuk sekarang		: "<<plg[x].jual*5000<<endl;
	cout<<"=================================================="<<endl;
	cout<<"Tambah pemebli : 1.Yes/2.No     : "; cin>>pilih;
	cout<<endl;
} 
while (pilih==1);
cout<<"Anda keluar dari program"<<endl;
}
