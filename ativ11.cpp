#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3;
	
	cout << "informe o primeiro número";
	cin >> n1;
	
		cout << "informe o segundo número";
	cin >> n2;
	
		cout << "informe o terceiro número";
	cin >> n3;
	
	if( n1>n2 && n1>n3){
		cout << "Primeiro número é maior";
	}
		
		else if( n2>n1 && n2>n3){
			cout << "Segundo número é o maior";
		}
		
		else if( n3>n1 && n3>n2){
			cout << "Terceiro número é o maior";
		}
	}
