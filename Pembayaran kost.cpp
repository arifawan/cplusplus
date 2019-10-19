#include <iostream>
using namespace std;
#define lanjut system("cls")

int apa=0; int pilih,pilih1,pilih2;int i,j,c,d; int bantu,bantu4,bantu5,bantu6,bantu7; int cari,k; int tengah;
string user,pass; string bantu1,bantu2,bantu3; string g; 


struct datanya
{
	int nokamar;
	int bayartah;
	int bayarbul;
	int sort;
	int search;
	int x;
	int y;
	int cari;
	
	string nama;
	string asal;
	string kendaraan;
	string free;
}kost[1000];

void garis()
{
	cout<<"============================================="<<endl;
}


void login()
{
	cout<<"Program Kost"<<endl;
	cout<<"============"<<endl;
	cout<<"Login"<<endl;
	do 
	{
	cout<<"masukan username anda  : "; cin>>user;
	cout<<"masukan password anda  : "; cin>>pass;
	system("cls");
	if (user=="admin"&&pass=="1234")
	cout<<"\nselamat username dan pasword anda benar"<<endl;  
	else
	cout<<"\nusername dan atau password anda salah"<<endl<<endl;
	} 
	while (user!="admin" or pass!="1234");
}

void inputan()
{
	apa++;
	cout<<"Data ke-"<<apa<<endl;
	garis();
	cout<<"Input No.Kamar		: "; cin>>kost[apa].nokamar;
	cout<<"Input Nama		: "; cin>>kost[apa].nama;
	cout<<"Input Asal		: "; cin>>kost[apa].asal;
	cout<<"Input Kendaraan		: "; cin>>kost[apa].kendaraan;
}

void bayaran(int& x, int& y)
{
	garis();
	int a=1;
	while (a<=apa){
	if (kost[apa].bayartah<8000000) 
	{ 
		kost[apa].x=(8000000-kost[apa].bayartah);
		cout<<"Kekurangan bayar tahunan: "<<kost[apa].x<<endl;
	}
	if (kost[apa].bayartah>=8000000)
	{	cout<<"Pembayaran tahunan sudah lunas"<<endl;}
	
	garis();
	if(kost[apa].bayarbul<200000)
	{ 
		kost[apa].y=(200000-kost[apa].bayarbul);
		cout<<"Kekurangan bayar bulanan: "<<kost[apa].y<<endl;
	}
	if(kost[apa].bayarbul>=200000)
	{	cout<<"Pembayaran bulanan sudah lunas"<<endl;}
	a++;
	
	break;
	}
}


void sort()
{
	cout<<"Pilih Pengurutan data : "<<endl;
	cout<<"1. Babble Sort"<<endl;
	cout<<"2. Insertion Sort"<<endl;
}

int sorting (int d) 
{
	switch (d) {
	case 1 : 
				cout<<"Babble Sort"<<endl; 
				for(i=1; i<=apa; i++)
				{
					for(j=apa; j>=i+1; j--)
					{
					if(kost[j].nokamar<kost[j-1].nokamar)
					{
						bantu=kost[j].nokamar;
						bantu1=kost[j].nama;
						bantu2=kost[j].asal;
						bantu3=kost[j].kendaraan;
						bantu4=kost[j].bayartah;
						bantu5=kost[j].x;
						bantu6=kost[j].bayarbul;
						bantu7=kost[j].y;
						
						kost[j].nokamar=kost[j-1].nokamar;
						kost[j].nama=kost[j-1].nama;
						kost[j].asal=kost[j-1].asal;
						kost[j].kendaraan=kost[j-1].kendaraan;
						kost[j].bayartah=kost[j-1].bayartah;
						kost[j].x=kost[j-1].x;
						kost[j].bayarbul=kost[j-1].bayarbul;
						kost[j].y=kost[j-1].y;
						
						kost[j-1].nokamar=bantu;
						kost[j-1].nama=bantu1;
						kost[j-1].asal=bantu2;
						kost[j-1].kendaraan=bantu3;
						kost[j-1].bayartah=bantu4;
						kost[j-1].x=bantu5;
						kost[j-1].bayarbul=bantu6;
						kost[j-1].y=bantu7;
					}
					}
				}
	
				cout<<"Hasil sort ascending	: "<<endl;
				for(c=1; c<=apa; c++)
				{
					garis();
					cout<<"No.Kamar		: "<<kost[c].nokamar<<endl;
					cout<<"Nama			: "<<kost[c].nama<<endl;
					cout<<"Asal			: "<<kost[c].asal<<endl;
					cout<<"Kendaraan		: "<<kost[c].kendaraan<<endl;
					garis();
					cout<<"Pembayaran tahunan	: "<<kost[c].bayartah<<endl;
					cout<<"Kekurangan tahunan	: "<<kost[c].x<<endl;
					garis();
					cout<<"Pembayaran bulanan	: "<<kost[c].bayarbul<<endl;
					cout<<"Kekurangan bulanan	: "<<kost[c].y<<endl;
					garis(); cout<<endl;
				} break;
				
	case 2 :
				cout<<"Insertion Sort"<<endl; 
				for(c=1; c<=apa; c++)
				{
					d=c;
					while((d>1)&&kost[d].nokamar>kost[d-1].nokamar)
					{
						bantu=kost[d].nokamar;
						bantu1=kost[d].nama;
						bantu2=kost[d].asal;
						bantu3=kost[d].kendaraan;
						bantu4=kost[d].bayartah;
						bantu5=kost[d].x;
						bantu6=kost[d].bayarbul;
						bantu7=kost[d].y;
						
						kost[d].nokamar=kost[d-1].nokamar;
						kost[d].nama=kost[d-1].nama;
						kost[d].asal=kost[d-1].asal;
						kost[d].kendaraan=kost[d-1].kendaraan;
						kost[d].bayartah=kost[d-1].bayartah;
						kost[d].x=kost[d-1].x;
						kost[d].bayarbul=kost[d-1].bayarbul;
						kost[d].y=kost[d-1].y;
						
						kost[d-1].nokamar=bantu;
						kost[d-1].nama=bantu1;
						kost[d-1].asal=bantu2;
						kost[d-1].kendaraan=bantu3;
						kost[d-1].bayartah=bantu4;
						kost[d-1].x=bantu5;
						kost[d-1].bayarbul=bantu6;
						kost[d-1].y=bantu7;
						
						d=d-1;
					}
				}
	
				cout<<"Hasil pengurutan descending : "<<endl;
				for(c=1; c<=apa; c++)
				{
					garis();
					cout<<"No.Kamar		: "<<kost[c].nokamar<<endl;
					cout<<"Nama			: "<<kost[c].nama<<endl;
					cout<<"Asal			: "<<kost[c].asal<<endl;
					cout<<"Kendaraan		: "<<kost[c].kendaraan<<endl;
					garis();
					cout<<"Pembayaran tahunan	: "<<kost[c].bayartah<<endl;
					cout<<"Kekurangan tahunan	: "<<kost[c].x<<endl;
					garis();
					cout<<"Pembayaran bulanan	: "<<kost[c].bayarbul<<endl;
					cout<<"Kekurangan bulanan	: "<<kost[c].y<<endl;
					garis(); cout<<endl;
				} break;
				
	
	default : cout<<"Anda salah Input"<<endl;
	}
	return (d);
}

void search()
{
	cout<<"Pilih Pencarian data : "<<endl;
	cout<<"1. Sequensial Search"<<endl;
	cout<<"2. Binary Search"<<endl;
}

int searching (int d)
{
	switch (d) {
	case 1 :	cout<<"Sequensial Search"<<endl;
				do 
				{
					cout<<"masukan data yg dicari	: "; cin>>cari; 
					for(k=1; k<=apa; k++)
					{
						if(kost[k].nokamar==cari)
						{
							cout<<"Data ditemukan"<<endl;
							garis();
							cout<<"No.Kamar		: "<<kost[k].nokamar<<endl;
							cout<<"Nama			: "<<kost[k].nama<<endl;
							cout<<"Asal			: "<<kost[k].asal<<endl;
							cout<<"Kendaraan		: "<<kost[k].kendaraan<<endl;
							garis();
							cout<<"Pembayaran tahunan	: "<<kost[k].bayartah<<endl;
							cout<<"Kekurangan tahunan	: "<<kost[k].x<<endl;
							garis();
							cout<<"Pembayaran bulanan	: "<<kost[k].bayarbul<<endl;
							cout<<"Kekurangan bulanan	: "<<kost[k].y<<endl;
							garis(); 
							break;
						}
					}
	
				} while (kost[k].nokamar!=cari);
				break;
				
	case 2 :	cout<<"Binary Search"<<endl;
					do {
						cout<<"Masukan data yang dicari : "; cin>>cari;
		
						int awal=1;
						int akhir=apa;
		
						while(awal<=akhir)
						{
							tengah=(awal+akhir)/2;
							if (cari<kost[tengah].nokamar) { awal=tengah+1; }
							else if (cari>kost[tengah].nokamar) { akhir=tengah-1;}
							else { awal=akhir+1;}
						}
	
					}
					while (cari!=kost[tengah].nokamar);
					
					if(cari==kost[tengah].nokamar)
					{
						cout<<"Data Ditemukan"<<endl;
						garis();
						cout<<"No.Kamar		: "<<kost[tengah].nokamar<<endl;
						cout<<"Nama			: "<<kost[tengah].nama<<endl;
						cout<<"Asal			: "<<kost[tengah].asal<<endl;
						cout<<"Kendaraan		: "<<kost[tengah].kendaraan<<endl;
						garis();
						cout<<"Pembayaran tahunan	: "<<kost[tengah].bayartah<<endl;
						cout<<"Kekurangan tahunan	: "<<kost[tengah].x<<endl;
						garis();
						cout<<"Pembayaran bulanan	: "<<kost[tengah].bayarbul<<endl;
						cout<<"Kekurangan bulanan	: "<<kost[tengah].y<<endl;
						garis();
					} 
					break;
					
	default : cout<<"Anda salah Input"<<endl;
	}
	return (d);
}

void lunas()
{
	do 
	{
	cout<<"masukan no.kamar yg ingin dilunasi	: "; cin>>cari; 
	for(k=1; k<=apa; k++)
	{
		if(kost[k].nokamar==cari)
		{
			cout<<"Data ditemukan"<<endl;
			garis();
			cout<<"No.Kamar		: "<<kost[k].nokamar<<endl;
			cout<<"Nama			: "<<kost[k].nama<<endl;
			cout<<"Asal			: "<<kost[k].asal<<endl;
			cout<<"Kendaraan		: "<<kost[k].kendaraan<<endl;
			garis();
			kost[k].free=g="Sudah Lunas";
			cout<<"Pembayaran tahunan	: "<<g<<endl;
			cout<<"Pembayaran bualanan	: "<<g<<endl;
			garis(); 
			break;
		}
	}
	
	} while (kost[k].nokamar!=cari);
}
	

int main()
{
	login();
	
	do
	{ lanjut;
	
	cout<<"PILIH MENU"<<endl;
	cout<<"1. Input data dan pembayaran penghuni kost"<<endl;
	cout<<"2. Data yang telah tersimpan secara terurut"<<endl;
	cout<<"3. Pencarian data penghuni kost"<<endl;
	cout<<"4. Pelunasan pembayaran penghuni kost"<<endl;
	cout<<"5. Keluar"<<endl;
	cout<<"Masukan pilih menu	: "; cin>>pilih;
	garis();
	switch (pilih)
	{
	case 1: inputan();
			garis();
			cout<<"Biaya tahunan yang harus dibayar Rp. 8.000.000,00 (Max angsur 2 kali)"<<endl; 
			cout<<"Input bayar tahunan	: "; cin>>kost[apa].bayartah;
			garis();
			cout<<"Biaya bulanan yang harus dibayar Rp. 200.000,00 (Max angsur 2 kali)"<<endl; 
			cout<<"Input bayar bulanan	: "; cin>>kost[apa].bayarbul;
			bayaran(kost[apa].bayartah, kost[apa].bayarbul);
			garis();
			system("pause"); break;
	
	case 2: sort();
			cout<<"Masukan pilihan anda	: "; cin>>pilih1;
			kost[apa].sort=sorting(pilih1);
			system("pause"); break;
	case 3: search();
			cout<<"Masukan pilihan anda	: "; cin>>pilih2;
			kost[apa].search=searching(pilih2);
			system("pause"); break; 
	case 4: lunas(); 
			system("pause"); break;
	case 5: break;
	default:cout<<"Inputan Salah "<<endl;system("pause");
			break;
	} 
} while(pilih!=5);
  cout<<"Terimakasih Telah Masuk Ke Program Kami"<<endl;
}

