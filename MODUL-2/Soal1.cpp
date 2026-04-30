#include <iostream>
using namespace std;

int main(){
	int umur, perlindungan=3;
	bool berhasil=false;
	string strategi;
	cout<<"=== GOBLET OF FIRE: TURNAMEN TRIWIZARD ==="<<endl;
	cout<<"Masukkan umur Anda: ";
	cin>>umur;
	if(umur<17){
		cout<<"Piala Api menolak Anda! Umur anda terlalu Kecil";
		return 0;
	}
	cout<<"--- TUGAS 1: NAGA HUNGARIAN HORNTAIL ---"<<endl;
	cout<<"Sisa perlindungan sihir: "<<perlindungan<<" kali."<<endl;
	do { 
		if (perlindungan<=0){
			cout<<">> KESEMPATAN HABIS! Anda ditarik keluar arena oleh pawang naga."<<endl;
			cout<<"MENGULANG TUGAS 1 DARI AWAL..."<<endl;
			system ("pause");
			perlindungan=3;
			berhasil=true;
		}
		cout<<"Pilih strategi (a: Sembunyi, b: Panggil Sapu): ";
		cin>>strategi;
		if(strategi=="a" || strategi=="A"){
			perlindungan--;
			cout<<"Naga menyemburkan api! Anda terluka."<<endl;
			cout<<"Sisa perlindungan sihir: "<<perlindungan<<" kali."<<endl;
			berhasil=true;
			continue;
		}
		if (strategi=="b" || strategi=="B"){
			cout<<"Berhasil! Anda mengambil Telur Emas!"<<endl;
			berhasil=false;
			system("pause");
			system("cls");
			break;
		}
		else cout<<"Pilihan tidak valid! Ulangi pilihan."<<endl;
		berhasil=true;
		continue;
	}
		while(berhasil);

		//TUGAS 2

		cout<<"--- TUGAS 2: DANAU HITAM ---"<<endl;
		int menit=10;
		string strategi2;
	do { 
		if (menit>=60){
			cout<<"Tepat 60 menit! Anda menyelematkan sandera."<<endl;
			system("pause");
			berhasil=false;
		}
		cout<<"Menit "<<menit<<"... Ada Grindylow!(l: Lawan, h: Hindari): ";
		cin>>strategi2;
		if(strategi2=="h" || strategi2=="H"){
			menit+=10;
			berhasil=true;
			continue;
		}
		if (strategi2=="l" || strategi2=="L"){
			cout<<"Oksigen Anda habis karena kelelahan bertarung!"<<endl;
			cout<<">> WAKTU/OKSIGEN HABIS! Putri duyung membawa Anda ke permukaan."<<endl;
			cout<<"MENGULANG TUGAS 2 DARI AWAL..."<<endl;
			system ("pause");
			menit=10;
			berhasil=true;
		}
		else cout<<"Pilihan tidak valid! Ulangi pilihan."<<endl;
		berhasil=true;
		continue;
	}
		while(berhasil);

		//TUGAS 3

		cout<<"--- TUGAS 2: DANAU HITAM ---"<<endl;
	
	return 0;
}