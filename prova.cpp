#include <iostream>
#include <iomanip>
#include <locale.h>

using namespace std;

int main(){
	int mes;
	
	setlocale(LC_ALL,"portuguese");
	
	cout << "Informe o seu mês de aniversário de 1 a 12: ";
	cin >> mes;
	
	switch(mes){
		case 1:
			cout << "Seu planeta é Saturno e sua cor é marrom.";
			break;
		case 5:
			cout << "Seu planeta é Saturno e sua cor é marrom.";
			break;
		case 9:
			cout << "Seu planeta é Saturno e sua cor é marrom.";
			break;
		case 2:
			cout << "Seu planeta é Vênus e sua cor é azul.";
			break;
		case 6:
			cout << "Seu planeta é Vênus e sua cor é azul.";
			break;
		case 10:
			cout << "Seu planeta é Vênus e sua cor é azul.";
			break;
		case 3:
			cout << "Seu planeta é Plutão e sua cor é vermelha.";
			break;
		case 7:
			cout << "Seu planeta é Plutão e sua cor é vermelha.";
			break;
		case 11:
			cout << "Seu planeta é Plutão e sua cor é vermelha.";
			break;
		case 4:
			cout << "Seu planeta é Marte e sua cor é amarela.";
			break;
		case 8:
			cout << "Seu planeta é Marte e sua cor é amarela.";
			break;
		case 12:
			cout << "Seu planeta é Marte e sua cor é amarela.";
			break;
		default:
			cout << "O valor informado é inválido.";
	
	}

return 0;
}
