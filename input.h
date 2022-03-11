using namespace std;
#include <fstream>

class DataParkir {
	public :
		DataParkir();

		void to_file(){
			ofstream tulis;

			tulis.open("data/nama.txt");
			tulis << this->nama << endl;
			tulis.close();
		}
	private :
		string nama, kota, noplat;
		string ekstensi;
		int jenisKendaraan;
		float waktu;		
};



DataParkir::DataParkir(){
	cout << "Masukkan nama       : "; 
	getline(cin, nama);

	cout << "Masukkan plat nomor : ";
	cin >> kota >> noplat >> ekstensi;
	cout << "1) Mobil\n";
	cout << "2) Motor\n";

	cout << "Masukkan jenis      :";
	cin >> jenisKendaraan;

	cout << "Masukkan waktu      :";
	cin >> waktu;
}