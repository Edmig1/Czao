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
		cout << "Pode entrar meu chapa, aparentemente voc� tem:" << result << " n�?";
		
	} else{
		cout << "vai entrar n�o fia da puta";
	}
}

