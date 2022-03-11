using namespace std;
#include <fstream>

class DataParkir {
	public :
		DataParkir();
		void Sortdata();
		int toInteger(string x);

		void to_file(){
			ofstream tulis;

			tulis.open("data/nama.txt", ios::app);
			tulis << this->nama << endl;
			tulis.close();

			tulis.open("data/kota.txt", ios::app);
			tulis << this->kota << endl;
			tulis.close();

			tulis.open("data/nama_kota.txt", ios::app);
			if (this->kota == "AD")
				tulis << "Solo\n";
			else if (this->kota == "F")
				tulis << "Bogor\n";
			else if (this->kota == "AB")
				tulis << "Jogja\n";
			tulis.close();

			tulis.open("data/noplat.txt", ios::app);
			tulis << this->noplat << endl;
			tulis.close();

			tulis.open("data/ekstensi.txt", ios::app);
			tulis << this->ekstensi << endl;
			tulis.close();

			tulis.open("data/jenisKendaraan.txt", ios::app);
			if (this->jenisKendaraan == 1)
				tulis << "Mobil\n";
			else if (this->jenisKendaraan == 2)
				tulis << "Motor\n";
			tulis.close();


			tulis.open("data/waktu.txt", ios::app);
			if (this->waktu - (int(this->waktu)) == 0)
				tulis << this->waktu << endl;
			else
				tulis << int(this->waktu) + 1 << endl;
			tulis.close();
		}
		
		void ambilData();
		void cetak();
	
	private :
		string nama, kota, noplat, nama_kota;
		string ekstensi;
		int jenisKendaraan;
		float waktu;		
};



DataParkir::DataParkir(){
	cout << "Masukkan nama       : "; 
	getline(cin, nama);


	cout << "Masukkan plat nomor (huruf besar) : ";
	cin >> kota >> noplat >> ekstensi;
	cout << "1) Mobil\n";
	cout << "2) Motor\n";

	cout << "Masukkan jenis      :";
	cin >> jenisKendaraan;

	cout << "Masukkan waktu      :";
	cin >> waktu;
}
