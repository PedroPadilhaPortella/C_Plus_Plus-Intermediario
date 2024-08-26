#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char** argv)
{
	int valor1, valor2;
	char operacao;
	
	cout << "Digite o primeiro numero: ";
	cin >> valor1;
	cout << "Digite a operacao a ser executada (+, -, *, /): ";
	cin >> operacao;
	cout << "Digite o segundo numero: ";
	cin >> valor2;
	
	switch(operacao)
	{
		case '+':
			printf("A soma de %i e %i e %i", valor1, valor2, valor1 + valor2);
			break;
		case '-':
			printf("A subtracao de %i e %i e %i", valor1, valor2, valor1 - valor2);
			break;
		case '*':
			printf("A multiplicacao de %i e %i e %i", valor1, valor2, valor1 * valor2);
			break;
		
		case '/':
			if(valor2 == 0){
				cout << "Nao e possivel realizar uma divisao por 0" << endl;
				break;
			}
			printf("A divisao de %i e %i e %.2f", valor1, valor2, ((float)valor1 / valor2));
			break;
		default:
			cout << "Operacao inexistente" << endl;
			break;
	}
	
	return 0;
}