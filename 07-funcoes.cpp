#include <iostream>
#include <stdio.h>

using namespace std;

bool par(int numero);
void status();
void status(string message);

int main(int argc, char** argv)
{
	int numero;
	
	cout << "Digite um numero para saber se ele e par ou impar: ";
	cin >> numero;
	
	status();
	
	printf("O numero de %i e %s\n", numero, par(numero) ? "Par": "Impar");
	
	status("Calculo Concluido!");
	
	return 0;
}

bool par(int numero) {
	return numero % 2 == 0;
}

void status() {
	cout << endl << "Calculando..." << endl << endl;
}

void status(string message) {
	cout << endl << message << endl << endl;
}