#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");

	float an;
	
	cout << "informe algum �ngulo do tri�ngulo";
	cin >> an;
	
	if(an == 90){
		cout << "Seu tri�ngulo � ret�ngulo, pois possui �ngulos de 90 graus";
	}
	if(an > 90){
		cout << "Seu Tri�ngulo � Obtus�ngulo, pois possui um �ngulo maior que 90 graus";
	}
	if(an < 90){
		cout << "Seu tri�ngulo � Acut�ngulo, pois possui um �ngulo menore que 90 graus";
	}

}

