#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n;
	
	cout << "INFORME UM N�MERO";
	cin >> n;
	
	if(n >0){
		cout << "seu n�mero � positivo";
	}
	else if (n== 0){
		cout << "seu n�mero � 0";
		
	}
	else{
		cout << "seu n�mero � negativo";
	}
}
