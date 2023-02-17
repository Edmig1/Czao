#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float nasc, hoje, result;
	
	cout << "Informe seu ano de nascimento";
	cin >> nasc;
	
	cout << "informe o ano de hoje";
	cin >> hoje;
	
	result = (hoje-nasc);
	
	if(result>= 16){
		cout << "Pode entrar meu chapa, aparentemente você tem:" << result << " né?";
		
	} else{
		cout << "vai entrar não fia da puta";
	}
}

