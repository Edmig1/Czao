#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	float l;
	
	cout << "quantidades de lados iguais";
	cin >> l;
	
	if(l=3)
	cout << "equil�tero";
	
	if(l=2)
	cout << "is�cele";
	
	if(l=0)
	cout << "escaleno";
	

}

