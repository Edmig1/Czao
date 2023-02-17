#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n;
	
	cout << "INFORME UM NÚMERO";
	cin >> n;
	
	if(n >0){
		cout << "seu número é positivo";
	}
	else if (n== 0){
		cout << "seu número é 0";
		
	}
	else{
		cout << "seu número é negativo";
	}
}
