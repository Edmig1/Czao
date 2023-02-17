#include <iostream>
using namespace std;

main(){
		setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, result;
	
	cout << "Informe o primeiro número";
	cin >> n1;
	
		cout << "Informe o segundo número";
	cin >> n2;
	
	if(n1>n2){
		cout << "Primeiro número é maior";
	}
		if(n2>n1){
		cout << "Segundo número é maior";
	}
		if(n1==n2){
		cout << "São iguais";
	}
	
}

