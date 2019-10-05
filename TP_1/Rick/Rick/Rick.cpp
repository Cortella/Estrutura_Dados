#include <iostream>
#include <stdlib.h>
#include "ListaOperacoes.h"
#include "ListaMedicoes.h"
using namespace std;


int main() {

	ListaOperacoes* x = new ListaOperacoes();
	ListaMedicoes* medicoes = new ListaMedicoes();
	medicoes->inserir(50);
	medicoes->inserir(250);
	medicoes->inserir(150);
	medicoes->inserir(550);
	medicoes->imprimir();

	medicoes->inserir(1550);
	

	cout << "" << endl;
	x->preencherLista(medicoes);
	x->imprimir();
	medicoes->~ListaMedicoes();
	
	system("pause");
	return 0;
}