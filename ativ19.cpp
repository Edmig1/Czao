#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");

	float an;
	
	cout << "informe algum ângulo do triângulo";
	cin >> an;
	
	if(an == 90){
		cout << "Seu triângulo é retângulo, pois possui ângulos de 90 graus";
	}
	if(an > 90){
		cout << "Seu Triângulo é Obtusângulo, pois possui um ângulo maior que 90 graus";
	}
	if(an < 90){
		cout << "Seu triângulo é Acutângulo, pois possui um ângulo menore que 90 graus";
	}

}

