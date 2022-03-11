#include <iostream>
#include "input.h"
#include "proses.h"
// #include "output.h"


int main(){
	DataParkir input;
	input.to_file();
	input.ambilData();
	//input.Sortdata();
	input.cetak();

	return 0;
}
