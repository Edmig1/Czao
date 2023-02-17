#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float a, l;
	cout << "Informe o lado do quadrado";
	cin >> l;
	a = l*l;
	cout << "A área do quadrado é: " << a;
	
}
