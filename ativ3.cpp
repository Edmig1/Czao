#include <iostream>


using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");

	float p1,p2, f, result;
	
	cout << "Informe a Primeira Nota";
	cin >> p1;
	
	cout << "Informe a Segunda Nota";
	cin >> p2;
	
	cout << "Quantas faltas você teve?";
	cin >> f;
	
	result = (p1+p2) / 2;
	
	if(result >= 7 && f<=25){
		cout << "você passou seu buxa, sua nota foi:" << result << " parabéns";
	} else{
		cout << "Se fudeu";
	}
	
}
