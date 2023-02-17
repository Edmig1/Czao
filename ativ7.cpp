#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float sb, sa;
	cout << "Informe o saário base";
	cin >> sb;
	
	if(sb <= 1000){
		sa = sb * 1.15;
		cout << "O saário sabe era " << sb << "o salário aumentado ficou " << sa ;
	}
		
		if(sb <= 2000 && sb >=1000){
		sa = sb * 1.1;
		cout << "O saário sabe era " << sb << "o salário aumentado ficou " << sa ;
		
		}
		if(sb >2000){
		sa = sb  1.05;
		cout << "O saário sabe era " << sb << "o salário aumentado ficou " << sa ;
		}
}

