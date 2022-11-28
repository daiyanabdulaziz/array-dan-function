#include <iostream>
#include <string>
using namespace std;

void halo (string nama){
	cout << "halo, " << nama << endl;
}

void tambah(int angka1, int angka2){
	printf("tambah %d + %d = %d \n",
	angka1, angka2, angka1 + angka2);
	printf(	"kurang %d - %d = %d \n",
	angka1, angka2, angka1 - angka2);
	printf("kali %d * %d = %d \n",
	angka1, angka2, angka1 * angka2);
	printf("bagi %d / %d = %d \n",
	angka1, angka2,angka1 / angka2);
	printf("keliling-persegi 4 * %d = %d \n",
	angka1, angka2, angka1 / angka2);
	printf("luas-persegi %d * %d = %d \n",
	angka1, angka2, angka1 * angka2);
}

void volume(int nomer1,int nomer2,int nomer3){
	printf("volume-balok %d * %d * %d = %d \n",
	nomer1, nomer2, nomer3, nomer1 * nomer2 * nomer3);
}

int main(){
	halo("kamal");
	tambah(10,5);
	volume(2,4,5);
}