using namespace std;
#include <fstream>

struct Simpan {
	string nama, plat, jenis, nama_kota;
	int waktu, harga, noplat;
};

int i=0;
Simpan data[10];

void DataParkir::ambilData(){
	ifstream baca;
	
	baca.open("data/nama.txt");
	while(!baca.eof()){
		baca >> data[i].nama;
		i++;
	}
	baca.close();
	
	i=0;
	baca.open("data/waktu.txt");
	while(!baca.eof()){
		baca >> data[i].waktu;
		i++;
	}
	baca.close();
	
	i=0;
	baca.open("data/nama_kota.txt");
	while(!baca.eof()){
		baca >> data[i].nama_kota;
		i++;
	}
	baca.close();
	
	i=0;
	baca.open("data/jenisKendaraan.txt");
	while(!baca.eof()){
		baca >> data[i].jenis;
		i++;
	}
	baca.close();
	
	i=0;
	baca.open("data/kota.txt");
	while(!baca.eof()){
		baca >> data[i].plat;
		i++;
	}
	baca.close();

	i=0;
	baca.open("data/noplat.txt");
	string x;
	while(!baca.eof()){
		baca >> x;
		data[i].plat += " " + x;
		i++;
	}
	baca.close();
	
	i=0;
	baca.open("data/ekstensi.txt");
	while(!baca.eof()){
		baca >> x;
		data[i].plat += " " + x;
		i++;
	}
	baca.close();
		
	for(int j=0; j<i; j++){
		if(data[j].jenis == "Mobil"){
			data[j].harga = data[j].waktu * 5000;
		} else {
			data[j].harga = data[j].waktu * 2000;
		}
	}
}

void DataParkir::cetak(){
	cout<<endl;
	for (int j=0; j<i-1; j++){
		cout<<data[j].nama<<" ";
		cout<<data[j].jenis<<" ";
		cout<<data[j].plat<<" ";
		cout<<data[j].waktu<<" ";
		cout<<data[j].harga<<" ";
		cout<<endl;
	}
}

