//Teste Lista

#include <iostream>
#include <stdlib.h>
#include "../TP/TP/ListaRecipientes.h"

using namespace std;

int main() {

	ListaRecipientes* l = new ListaRecipientes();
	l->inserir(50);
	l->inserir(200);
	l->inserir(150);
	l->inserir(1000);
	l->inserir(25);
	l->inserir(2050);
	l->imprimir();
	system("pause");
	return 0;
}