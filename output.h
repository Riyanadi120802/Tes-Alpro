using namespace std;

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
