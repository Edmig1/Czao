#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float sb, sa;
	cout << "Informe o sa�rio base";
	cin >> sb;
	
	if(sb <= 1000){
		sa = sb * 1.15;
		cout << "O sa�rio sabe era " << sb << "o sal�rio aumentado ficou " << sa ;
	}
		
		if(sb <= 2000 && sb >=1000){
		sa = sb * 1.1;
		cout << "O sa�rio sabe era " << sb << "o sal�rio aumentado ficou " << sa ;
		
		}
		if(sb >2000){
		sa = sb  1.05;
		cout << "O sa�rio sabe era " << sb << "o sal�rio aumentado ficou " << sa ;
		}
}

