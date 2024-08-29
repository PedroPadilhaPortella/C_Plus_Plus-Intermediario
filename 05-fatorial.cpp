#include <iostream>
#include <stdio.h>

/*
	Calculo do fatorial
	0! --> 1! = 1
	3! --> 3 * 2 * 1 = 6
	4! --> 4 *3 * 2 * 1 = 24
	5! --> 5 * 4 *3 * 2 * 1 = 120
*/

using namespace std;

bool par(int numero) {
	return numero % 2;
}

int main(int argc, char** argv)
{
	int numero, fatorial = 1;
	
	cout << "Digite um numero para calcular o fatorial: ";
	cin >> numero;

		
	for(int i = 1; i < numero; i++) {
		fatorial = fatorial * (i + 1);
	}
	
	printf("O fatorial de %i e %i\n", numero, fatorial);
	
	return 0;
}