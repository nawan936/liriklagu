#include <iostream>
#include <windows.h>
using namespace std;

void tampilkanHuruf (string teks, int delay){
	for(char c : teks){
		cout << c << flush;
		Sleep(delay);
	}
	cout<< endl;
}

int main(){
	string lirik[] = {"sudah terbiasa terjadi tante", "teman datang ketika lagi butuh saja", "coba kalau lagi susah", "mereka semua menghilaaaaaaang...", "tante.."};
	
	int n = sizeof(lirik) / sizeof(lirik[0]);
	
	cout<< "====================================================";
	
	cout<< endl;
	cout<< endl;
	
	for(int i = 0; i < n; i++ ) {
		tampilkanHuruf(lirik[i], 100);
		Sleep(900);
	}
	
		cout<< "====================================================";
	
	return 0;
}
