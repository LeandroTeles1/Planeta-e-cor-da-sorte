#include <iostream>
#include <iomanip>
#include <locale.h>

using namespace std;

int main(){
	int mes;
	
	setlocale(LC_ALL,"portuguese");
	
	cout << "Informe o seu m�s de anivers�rio de 1 a 12: ";
	cin >> mes;
	
	switch(mes){
		case 1:
			cout << "Seu planeta � Saturno e sua cor � marrom.";
			break;
		case 5:
			cout << "Seu planeta � Saturno e sua cor � marrom.";
			break;
		case 9:
			cout << "Seu planeta � Saturno e sua cor � marrom.";
			break;
		case 2:
			cout << "Seu planeta � V�nus e sua cor � azul.";
			break;
		case 6:
			cout << "Seu planeta � V�nus e sua cor � azul.";
			break;
		case 10:
			cout << "Seu planeta � V�nus e sua cor � azul.";
			break;
		case 3:
			cout << "Seu planeta � Plut�o e sua cor � vermelha.";
			break;
		case 7:
			cout << "Seu planeta � Plut�o e sua cor � vermelha.";
			break;
		case 11:
			cout << "Seu planeta � Plut�o e sua cor � vermelha.";
			break;
		case 4:
			cout << "Seu planeta � Marte e sua cor � amarela.";
			break;
		case 8:
			cout << "Seu planeta � Marte e sua cor � amarela.";
			break;
		case 12:
			cout << "Seu planeta � Marte e sua cor � amarela.";
			break;
		default:
			cout << "O valor informado � inv�lido.";
	
	}

return 0;
}
