#include <iostream>
using namespace std;

main(){
		setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, result;
	
	cout << "Informe o primeiro n�mero";
	cin >> n1;
	
		cout << "Informe o segundo n�mero";
	cin >> n2;
	
	if(n1>n2){
		cout << "Primeiro n�mero � maior";
	}
		if(n2>n1){
		cout << "Segundo n�mero � maior";
	}
		if(n1==n2){
		cout << "S�o iguais";
	}
	
}

