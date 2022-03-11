using namespace std;
#include <fstream>
#include <sstream>

struct Simpan {
	string nama, plat, jenis, nama_kota, noplat;
	int waktu, harga;
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
	
	i=0;
	baca.open("data/noplat.txt");
	while(!baca.eof()){
		baca >> data[i].noplat;
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



int DataParkir::toInteger(string x){
	stringstream s;
	int y;
	s << x;
	s >> y;
	return y;
	
}

//void DataParkir::Sortdata(){
////	for(int j=0; j<i-1; j++){
////		cout<<toInteger(data[j].noplat);
////		cout<<endl;
////	}
//	for (int j = 0; j < i-1; j++){
////     swapped = false;
//     for (int k = 0; k < i-j-1; k++)
//     {
//        if (toInteger(data[k].noplat)> toInteger(data[k+1].noplat)){
//
//			Simpan tmp;
//			tmp.nama = data[k].nama;
//			tmp.waktu = data[k].waktu;
//			tmp.jenisKendaraan = data[k].jenisKendaraan;
//			tmp.nama_kota = data[k].nama_kota;
//			tmp.kota = data[k].kota;
//			tmp.noplat = data[k].noplat;
//			tmp.ekstensi = data[k].ekstensi;
//			
//			data[k].nama = data[k+1].nama;
//			data[k].waktu = data[k+1].waktu;
//			data[k].jenisKendaraan = data[k+1].jenisKendaraan;
//			data[k].nama_kota = data[k+1].nama_kota;
//			data[k].kota = data[k+1].kota;
//			data[k].noplat = data[k+1].noplat;
//			data[k].ekstensi = data[k+1].ekstensi;
//			
//			data[k+1].nama = tmp.nama;
//			data[k+1].waktu = tmp.waktu;
//			data[k+1].jenisKendaraan = tmp.jenisKendaraan;
//			data[k+1].nama_kota = tmp.nama_kota;
//			data[k+1].kota = tmp.kota;
//			data[k+1].noplat = tmp.noplat;
//			data[k+1].ekstensi = tmp.ekstensi;
//			
//			
//        }
//     } 
////     if (swapped == false)
////        break;
//	}
//}

