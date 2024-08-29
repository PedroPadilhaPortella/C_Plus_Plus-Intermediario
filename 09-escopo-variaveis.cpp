#include <iostream>

using namespace std;

int numero_global = 1;

void foo() {
	int numero_local = 1;
	static int numero_estatico = 1;
	cout << "Numero Global: " << numero_global << endl;
	cout << "Numero Local: " << numero_local << endl;
	cout << "Numero Estatico: " << numero_estatico << endl << endl;
	numero_global++;
	numero_local++;
	numero_estatico++;
}

int main(int argc, char** argv)
{
	foo();
	foo();
	foo();
	return 0;
}