#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float c, f;
	
	cout << "Insira os Graus Celsius";
	cin >> c;
	
	f = c* 1.8 + 32;
	cout << "os Fahrenheits são: " <<f;
}


