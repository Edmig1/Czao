#include <iostream>


using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");

	string letra, result;
	
	cout << "informe sua letra";
	
	cin >> letra;
	
	if(letra == "a" or letra == "e" or letra == "i" or letra == "o" or letra == "u"){
		cout << "é uma vogal";
	}else {
		cout << "é consoante saporra";
	}
	
}
