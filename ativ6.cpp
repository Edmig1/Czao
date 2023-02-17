#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float peso, altura, result;
	
	cout << "Informe seu Peso";
	cin >> peso;
	
	cout << "informe sua altura em metros";
	cin >> altura;
	
	result= peso/ (altura*altura);
	
	if(result < 18.5){
		cout << "abaixo do peso, seu imc é " << result; 
		}
		else if( result>=18.5 && result <=24.9){
			cout << "Peso normal, seu imc é " << result;
		}
		
		else if( result>=25 && result <=29.9){
			cout << "Sobrepeso, seu imc é " << result;
		}
			
		else if( result>=30 && result <=34.9){
			cout << "Obesidade Grau 1, seu imc é " << result;
		}
	
		else if( result>=35 && result <=39.9){
			cout << "Obesidade Grau 2, seu imc é " << result;
		}
		else if( result>=40 ){
			cout << "Obesidade Grau 3, seu imc é " << result;
		}
			
		
}
