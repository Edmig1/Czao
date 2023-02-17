#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	float sb, sa, ht;
	cout << "Informe seu salário ";
	cin >> sb;
	cout << "informe as horas que você trabalhou";
	cin >> ht;
	
	sa = sb + (ht * 12);
	cout << "Seu salário será de: " << sa;
}
