#include <iostream>
#include <string>
using namespace std;

int main (){
	int angka [] {3,5,6,8,12,54};
	cout << "Angka " << angka [5]<< endl;
	char huruf []= {'x','y','z'};
	printf("huruf %c",huruf [2]);
	string nama []= {"bagas","tanaka","panca"};
	cout << " Nama = " << nama [0]<< endl;  
	int nilai [3][5]=
	{
		{10,20,30,40},
		{50,60,70,80},
		{90,100},
	};
	cout <<"Nilai"<< nilai [1][2]<<endl;
	int x = 0;
	for(x ; x <= 5 ; x++){
		cout << angka [x]<<endl;
	}
}