#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3;
	
	cout << "informe o primeiro n�mero";
	cin >> n1;
	
		cout << "informe o segundo n�mero";
	cin >> n2;
	
		cout << "informe o terceiro n�mero";
	cin >> n3;
	
	if( n1>n2 && n1>n3){
		cout << "Primeiro n�mero � maior";
	}
		
		else if( n2>n1 && n2>n3){
			cout << "Segundo n�mero � o maior";
		}
		
		else if( n3>n1 && n3>n2){
			cout << "Terceiro n�mero � o maior";
		}
	}
