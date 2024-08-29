#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char** argv)
{
	int tabuada;
	
	cout << "Digite um numero para calcular a tabuada: ";
	cin >> tabuada;
		
	for(int i = 1; i <= 10; i++) {
		printf("%i x %i = %i\n", tabuada, i, tabuada * i);
	}
	
	return 0;
}