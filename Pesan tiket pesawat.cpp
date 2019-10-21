#include <iostream>
using namespace std;

int apa=0;
void astu () {
	cout<<"1.Jakarta"<<endl;
	cout<<"2.Bandung"<<endl;
	cout<<"3.Yogyakarta"<<endl;
	cout<<"4.Surabaya"<<endl;
	cout<<"5.Bali"<<endl;
	cout<<"Masukan Angka pilihan	: "; 	
}

void maskapai () {
	cout<<"1.Garuda Indonesia"<<endl;
	cout<<"2.Air Asia"<<endl;
	cout<<"3.Lion-R"<<endl;
}

void kelas() {
	cout<<"1.Ekonomi"<<endl;
	cout<<"2.Bisnis"<<endl;
	cout<<"3.Esklusif"<<endl;
} 


string asalnya (int a)
{ string aj;
	switch (a) {
	case 1 : aj="Jakarta"; break;
	case 2 : aj="Bandung"; break;
	case 3 : aj="Yogyakarta"; break;
	case 4 : aj="Surabaya"; break;
	case 5 : aj="Bali"; break;

default : "Anda salah input";
}
return (aj);
}

string tujuannya (int b)
{ string tuj;
	switch (b)
	{ 
	case 1 : tuj="Jakarta"; break;
	case 2 : tuj="Bandung"; break;
	case 3 : tuj="Yogyakarta"; break;
	case 4 : tuj="Surabaya"; break;
	case 5 : tuj="Bali"; break;
	
	default : "Maaf anda salah input";
	 } 
return (tuj);	
}

string maskapainya (int c) {
	string mask;
	switch (c) {
	case 1 : mask="Garuda Indonesia"; break;
	case 2 : mask="Air Asia"; break;
	case 3 : mask="Lion-R"; break;
	
	default : cout<<"Anda salah input"<<endl;
	}
	return (mask);
}

string kelasnya (int d) {
	string kel;
	switch (d) {
	case 1 : kel="Ekonomi"; break;
	case 2 : kel="Bisnis"; break;
	case 3 : kel="Esklusif";break;
	
	default : cout<<"Anda salah Input"<<endl;
	}
	return (kel);
}

void bayar(int n, int m, int mas,int kela, int& x) {
	
int singkat=(n==1&&m==2 or n==2&&m==1);
int singkat1=(n==1&&m==3 or n==3&&m==1);
int singkat2=(n==1&&m==4 or n==4&&m==1);
int singkat3=(n==1&&m==5 or n==5&&m==1);
int singkat4=(n==2&&m==3 or n==3&&m==2);
int singkat5=(n==2&&m==4 or n==4&&m==2);
int singkat6=(n==2&&m==5 or n==5&&m==2);
int singkat7=(n==3&&m==4 or n==4&&m==3);
int singkat8=(n==3&&m==5 or n==5&&m==3);
int singkat9=(n==4&&m==5 or n==5&&m==4);


if (singkat && mas==1 && kela==1)
{ x=700000;	}
if (singkat && mas==1 && kela==2)
{ x=750000;}
if (singkat && mas==1 && kela==3)
{ x=800000;}
if (singkat && mas==2 && kela==1)
{ x=650000;}
if (singkat && mas==2 && kela==2)
{ x=700000;}
if (singkat && mas==2 && kela==3)
{ x=740000;}
if (singkat && mas==3 && kela==1)
{ x=600000;}
if (singkat && mas==3 && kela==2)
{ x=640000;}
if (singkat && mas==3 && kela==3)
{ x=680000;}


if (singkat1 && mas==1 && kela==1)
{ x=730000;}
if (singkat1 && mas==1 && kela==2)
{ x=780000;}
if (singkat1 && mas==1 && kela==3)
{ x=820000;}
if (singkat1 && mas==2 && kela==1)
{ x=680000;}
if (singkat1 && mas==2 && kela==2)
{ x=750000;}
if (singkat1 && mas==2 && kela==3)
{ x=790000;}
if (singkat1 && mas==3 && kela==1)
{ x=620000;}
if (singkat1 && mas==3 && kela==2)
{ x=650000;}
if (singkat1 && mas==3 && kela==3)
{ x=700000;}


if (singkat2 && mas==1 && kela==1)
{ x=750000;}
if (singkat2 && mas==1 && kela==2)
{ x=800000;}
if (singkat2 && mas==1 && kela==3)
{ x=850000;}
if (singkat2 && mas==2 && kela==1)
{ x=700000;}
if (singkat2 && mas==2 && kela==2)
{ x=770000;}
if (singkat2 && mas==2 && kela==3)
{ x=810000;}
if (singkat2 && mas==3 && kela==1)
{ x=650000;}
if (singkat2 && mas==3 && kela==2)
{ x=680000;}
if (singkat2 && mas==3 && kela==3)
{ x=710000;}


if (singkat3 && mas==1 && kela==1)
{ x=900000;}
if (singkat3 && mas==1 && kela==2)
{ x=960000;}
if (singkat3 && mas==1 && kela==3)
{ x=1000000;}
if (singkat3 && mas==2 && kela==1)
{ x=850000;}
if (singkat3 && mas==2 && kela==2)
{ x=880000;}
if (singkat3 && mas==2 && kela==3)
{ x=920000;}
if (singkat3 && mas==3 && kela==1)
{ x=760000;}
if (singkat3 && mas==3 && kela==2)
{ x=800000;}
if (singkat3 && mas==3 && kela==3)
{ x=840000;}


if (singkat4 && mas==1 && kela==1)
{ x=700000;}
if (singkat4 && mas==1 && kela==2)
{ x=750000;}
if (singkat4 && mas==1 && kela==3)
{ x=790000;}
if (singkat4 && mas==2 && kela==1)
{ x=640000;}
if (singkat4 && mas==2 && kela==2)
{ x=700000;}
if (singkat4 && mas==2 && kela==3)
{ x=760000;}
if (singkat4 && mas==3 && kela==1)
{ x=600000;}
if (singkat4 && mas==3 && kela==2)
{ x=630000;}
if (singkat4 && mas==3 && kela==3)
{ x=680000;}


if (singkat5 && mas==1 && kela==1)
{ x=730000;}
if (singkat5 && mas==1 && kela==2)
{ x=770000;}
if (singkat5 && mas==1 && kela==3)
{ x=820000;}
if (singkat5 && mas==2 && kela==1)
{ x=650000;}
if (singkat5 && mas==2 && kela==2)
{ x=700000;}
if (singkat5 && mas==2 && kela==3)
{ x=740000;}
if (singkat5 && mas==3 && kela==1)
{ x=600000;}
if (singkat5 && mas==3 && kela==2)
{ x=640000;}
if (singkat5 && mas==3 && kela==3)
{ x=690000;}


if (singkat6 && mas==1 && kela==1)
{ x=850000;}
if (singkat6 && mas==1 && kela==2)
{ x=880000;}
if (singkat6 && mas==1 && kela==3)
{ x=950000;}
if (singkat6 && mas==2 && kela==1)
{ x=820000;}
if (singkat6 && mas==2 && kela==2)
{ x=860000;}
if (singkat6 && mas==2 && kela==3)
{ x=900000;}
if (singkat6 && mas==3 && kela==1)
{ x=730000;}
if (singkat6 && mas==3 && kela==2)
{ x=770000;}
if (singkat6 && mas==3 && kela==3)
{ x=810000;}


if (singkat7 && mas==1 && kela==1)
{ x=650000;}
if (singkat7 && mas==1 && kela==2)
{ x=700000;}
if (singkat7 && mas==1 && kela==3)
{ x=770000;}
if (singkat7 && mas==2 && kela==1)
{ x=600000;}
if (singkat7 && mas==2 && kela==2)
{ x=640000;}
if (singkat7 && mas==2 && kela==3)
{ x=690000;}
if (singkat7 && mas==3 && kela==1)
{ x=570000;}
if (singkat7 && mas==3 && kela==2)
{ x=620000;}
if (singkat7 && mas==3 && kela==3)
{ x=670000;}


if (singkat8 && mas==1 && kela==1)
{ x=850000;}
if (singkat8 && mas==1 && kela==2)
{ x=900000;}
if (singkat8 && mas==1 && kela==3)
{ x=950000;}
if (singkat8 && mas==2 && kela==1)
{ x=800000;}
if (singkat8 && mas==2 && kela==2)
{ x=830000;}
if (singkat8 && mas==2 && kela==3)
{ x=880000;}
if (singkat8 && mas==3 && kela==1)
{ x=700000;}
if (singkat8 && mas==3 && kela==2)
{ x=740000;}
if (singkat8 && mas==3 && kela==3)
{ x=780000;}



if (singkat9 && mas==1 && kela==1)
{ x=750000;}
if (singkat9 && mas==1 && kela==2)
{ x=800000;}
if (singkat9 && mas==1 && kela==3)
{ x=850000;}
if (singkat9 && mas==2 && kela==1)
{ x=700000;}
if (singkat9 && mas==2 && kela==2)
{ x=740000;}
if (singkat9 && mas==2 && kela==3)
{ x=800000;}
if (singkat9 && mas==3 && kela==1)
{ x=670000;}
if (singkat9 && mas==3 && kela==2)
{ x=700000;}
if (singkat9 && mas==3 && kela==3)
{ x=750000;}
}

void garis () {
	cout<<"============================"<<endl;
}

void garis1 () {
cout<<"================================================================"<<endl;	
}

struct data {
	string namadepan;
	string namabelakang;
	string alamat;
	string usia;
	string nomortel;
	string email;
	string username;
	string password;
	string tanggal;
	string waktu;
	string asal;
	string tujuan;
	string maskapai;
	string kelas;
	int harga;
	int byr;
	int sisanya;
	int hasil;
};
data penumpang[1000];

int main() {
int sisa=0, menu, as,ke,mas,kela,x,pilih;
string user, pass;


cout<<"		PROGRAM PENERBANGAN PESAWAT TERBANG 5 KOTA"<<endl;
cout<<"	      =============================================="<<endl<<endl;
cout<<"Sebelum Masuk program ini terlebih dahulu mendaftar"<<endl;
cout<<"==================================================="<<endl;
cout<<"Pembuatan akun "<<endl;
cout<<"=============="<<endl;
cout<<"masukan username yang anda inginkan : "; cin>>penumpang[apa].username;
cout<<"masukan password yang anda inginkan : "; cin>>penumpang[apa].password;
system ("cls");
cout<<"Username dan password telah tersimpan,Silahkan melanjutkan Login  "<<endl;
garis1(); cout<<endl;

cout<<"Login"<<endl;
garis();
do {
cout<<"masukan username anda  : "; cin>>user;
cout<<"masukan password anda  : "; cin>>pass;
if (user==penumpang[apa].username&&pass==penumpang[apa].password)
cout<<"\nselamat username dan pasword anda benar"<<endl;  
else
cout<<"\nusername dan atau password anda salah"<<endl<<endl;
} while (user!=penumpang[apa].username or pass!=penumpang[apa].password);

system ("cls");
cout<<"anda berhasil login, Silahkan pilih menu dibawah ini"<<endl;
garis1();


 do {
 cout<<"Pilih menu : "<<endl;
 cout<<"1.Pengisian data dan transaksi"<<endl;
 cout<<"2.History transaksi"<<endl;
 cout<<"3.Keluar "<<endl;
 cout<<"Masukan angka pilihan	: "; cin>>menu;
 cout<<"============================"<<endl;
 switch (menu) {
 	case 1 :{
	 do {  
	 		cout<<"Nama depan	: "; cin>>penumpang[apa].namadepan; 
			cout<<"Nama belakang	: "; cin>>penumpang[apa].namabelakang;
			cout<<"Asal kota	: "; cin>>penumpang[apa].alamat; 
			cout<<"Usia anda th	: "; cin>>penumpang[apa].usia;
			cout<<"Nomor telephon	: "; cin>>penumpang[apa].nomortel;
			cout<<"Email	 	: "; cin>>penumpang[apa].email;
			system ("cls");
			cout<<"Rute Penerbangan"<<endl;
			garis();
		
			do {
				cout<<"Pilih kota lepas landas	: "<<endl;
				astu ();
				cin>>as;
				garis();
				penumpang[apa].asal=asalnya (as);
				cout<<penumpang[apa].asal<<endl;
				garis();
				cout<<"Pilih kota mendarat	:  "<<endl;
				astu ();
				cin>>ke;
				penumpang[apa].tujuan=tujuannya (ke);
		
				if (penumpang[apa].asal==penumpang[apa].tujuan)
				{
				garis1();
				cout<<"Maaf sebaiknya anda menggunakan kendaraan umum atau pribadi saja"<<endl;
				garis1();
				}
			} while (penumpang[apa].asal==penumpang[apa].tujuan);
		 
			if (penumpang[apa].asal!=penumpang[apa].tujuan) 
			{
			garis();
			cout<<penumpang[apa].tujuan<<endl;
			garis1();
			cout<<"Masukan tanggal penerbangan (dd-mm-yyyy)	: "; cin>>penumpang[apa].tanggal;
			garis1();
			cout<<"Masukan waktu penerbangan			: "; cin>>penumpang[apa].waktu;
			garis1();
			cout<<"Pilih Maskapai : "<<endl;
			maskapai ();
			cout<<"Masukan Pilihan : "; cin>>mas;
			penumpang[apa].maskapai=maskapainya(mas);
			garis();
			cout<<penumpang[apa].maskapai<<endl;
			garis();
		 
			cout<<"Pilih kelas : "<<endl;
			kelas ();
			cout<<"Masukan Pilihan : "; cin>>kela;
			garis();
			penumpang[apa].kelas=kelasnya(kela);
			cout<<penumpang[apa].kelas<<endl;
			garis();
		 
			system ("cls");
			bayar(as,ke,mas,kela,x);
			penumpang[apa].harga=x;
			cout<<"Biaya Rp		: "<<penumpang[apa].harga<<endl;
			garis1();
			cout<<"Data Telah Tersimpan"<<endl;
			garis(); 
			}
			system ("cls");
			cout<<"Pembayaran dilakukan sebelum keberangkatan pesawat       "<<endl;
			cout<<" Jika anda tidak membayar sebelum keberangkatan, 		"<<endl;
			cout<<"    maka otomatis penerbangan anda dibatalkan 			"<<endl;
			garis1 ();
			cout<<"Biaya yang harus anda bayar RP	: "<<penumpang[apa].harga<<endl;
			garis1 ();
			do 
			{
		 		cout<<"\n\nMasukan pembayaran anda 	: "; cin>>penumpang[apa].byr;
		 		penumpang[apa].sisanya=sisa+penumpang[apa].byr;
		 		cout<<"Pembayaran anda kurang"<<endl;
		 	} 
			 while (penumpang[apa].sisanya<penumpang[apa].harga);
			 garis1();
			 
			cout<<"Sekarang Anda sudah lunas membayar"<<endl;
			penumpang[apa].hasil=penumpang[apa].sisanya-penumpang[apa].harga;
			cout<<"Sisa pembayaran anda RP : "<<penumpang[apa].hasil<<endl;
			garis1();
			cout<<endl;
	 		cout<<"Pilih : 1.ya/2.tidak	: "; cin>>pilih; cout<<endl;
	 		apa++;
	 		cout<<"============================"<<endl;
	 } while (pilih<2);
	 break;
	 }
	case 2 : 
	{		system ("cls");
			int c;
			for (c=0; c<apa; c++)
			{
				cout<<"		Rekepan Data Penerbangan"<<endl;
				cout<<"###############################################"<<endl;
				cout<<"Data Diri"<<endl;
				cout<<"=============================================="<<endl;
				cout<<"Nama depan		: "<<penumpang[c].namadepan<<endl; 
				cout<<"Nama belakang		: "<<penumpang[c].namabelakang<<endl;
				cout<<"Asal kota		: "<<penumpang[c].alamat<<endl;
				cout<<"Usia anda th		: "<<penumpang[c].usia<<endl;
				cout<<"Nomor telephon		: "<<penumpang[c].nomortel<<endl;
				cout<<"Email	 		: "<<penumpang[c].email<<endl;
				cout<<"=============================================="<<endl<<endl;
				cout<<"Rute Penerbangan dan Biaya"<<endl;
				cout<<"=============================================="<<endl;
				cout<<"Rute penerbangan	: "<<penumpang[c].asal<< " ke "<<penumpang[c].tujuan<<endl;
				cout<<"Tanggal			: "<<penumpang[c].tanggal<<endl;
				cout<<"Pukul			: "<<penumpang[c].waktu<<endl;
				cout<<"Maskapai		: "<<penumpang[c].maskapai<<endl;
				cout<<"Kelas			: "<<penumpang[c].kelas<<endl;
				cout<<"Biaya Rp		: "<<penumpang[c].harga<<endl;
				cout<<"=============================================="<<endl<<endl;
				cout<<"Pembayaran yang dilakukan"<<endl;
				cout<<"=============================================="<<endl;
				cout<<"Pembayaran anda RP	: "<<penumpang[c].sisanya<<endl;
				cout<<"Sisa pembayaran anda RP : "<<penumpang[c].hasil<<endl;
				cout<<"Sekarang Anda sudah lunas membayar"<<endl;
				cout<<"###############################################"<<endl;
				cout<<"	SELAMAT MELAKUKAN PENERBANGAN					 "<<endl;
				cout<<"###############################################"<<endl<<endl;
		
	 		}
			break;
	} 

 }
 } while (menu!=3);
 cout<<"Terima kasih telah masuk program kami, anda sekarang keluar dari program"<<endl;
}
