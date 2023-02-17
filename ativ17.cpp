#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	string  n1, n2;
	int i1, i2;
	
	cout << "Pessoa 1 ,Informe sua idade";
	cin >> i1;
	
		cout << "Pessoa 1 ,Informe seu nome";
	cin >> n1;
	
		cout << "Pessoa 2 ,Informe sua idade";
	cin >> i2;
	
		cout << "Pessoa 2 ,Informe seu nome";
	cin >> n2;
	
	if(i1>i2){
		cout << "pessoa 1 é mais velha";
	}
	else{
		cout << "pessoa 2 é mais velha";
	}
}
