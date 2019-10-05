#include <iostream>
#include <stdlib.h>
#include "ListaOperacoes.h"
using namespace std;

struct No {
	int valor;
	No* esq;
	No* dir;
	No() {
		valor = NULL;
		esq = dir = nullptr;
	}
	No(int v, No* e, No* d) {
		valor = v;
		esq = e;
		dir = d;
	}
};

int main() {

	ListaOperacoes* x = new ListaOperacoes();
	x->imprimir();
	x->~ListaOperacoes();
	system("pause");
	return 0;
}