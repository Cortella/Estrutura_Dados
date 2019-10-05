#include <iostream>
#include <stdlib.h>
#include "ListaOperacoes.h"
#include "ListaMedicoes.h"
using namespace std;


int main() {

	ListaOperacoes* x = new ListaOperacoes();
	ListaMedicoes* medicoes = new ListaMedicoes();


	cout << "" << endl;
	x->imprimir();
	medicoes->~ListaMedicoes();
	
	system("pause");
	return 0;
}