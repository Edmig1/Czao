#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	string lo, sen;
	
	cout << "Digite seu Login";
	cin >> lo;
	cout << "Digite sua Senha";
	cin >> sen;
	
	if(lo== "admin" && sen== "admin"){
		cout << "pode entrar seu pola";
	} else{
		cout << "vai entrar não fela";
	}
}
