#include <iostream>
#include "input.h"
#include "proses.h"
// #include "output.h"


int main(){
	DataParkir input;
	input.to_file();
	input.ambilData();
	input.cetak();

	return 0;
}
