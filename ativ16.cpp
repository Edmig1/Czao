#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	float sb, sa, ht;
	cout << "Informe seu sal�rio ";
	cin >> sb;
	cout << "informe as horas que voc� trabalhou";
	cin >> ht;
	
	sa = sb + (ht * 12);
	cout << "Seu sal�rio ser� de: " << sa;
}
