#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char** argv)
{
	string password, myPassword;
	myPassword = "Pedro123";
	int tentativas = 4;
		
	while(true) {
		cout << "Digite a senha: ";
		cin >> password;
		
		if(password == myPassword) {
			cout << "Login bem sucedido! Bem vindo Pedro" << endl;
			break;
		}

		--tentativas;		
		cout << "Senha incorreta, tente novamente! [" << tentativas << " tentativas restantes]" << endl;

		
		if(tentativas == 0) {
			cout << "Dispositivo bloqueado por excesso de tentativas!" << endl;
			break;
		}
	}
	
	return 0;
}