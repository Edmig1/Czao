#include <iostream>


using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");

	float p1,p2,result;
	
	cout << "Informe a Primeira Nota";
	cin >> p1;
	
	cout << "Informe a Segunda Nota";
	cin >> p2;
	
	result = (p1+p2) / 2;
	
	if(result >= 7){
		cout << "voc� passou seu buxa, sua nota foi:" << result << " parab�ns";
	} else{
		cout << "Se fudeu";
	}
	
}
