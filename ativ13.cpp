#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float a, r;;
	
	cout << "Informe o raio";
	cin >> r;
	
	a = r*r*3.14;
	 cout << "Sua área é: " << a;
}
