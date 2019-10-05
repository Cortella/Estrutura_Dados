// TP.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.


#include <cstdio> // em C substituir por #include <stdio.h>
#include "ListaMedicoes.h"
#include "Fila.h"
#include <stdlib.h>


int main() {

	ListaMedicoes* x = new ListaMedicoes();
	x->inserir(50);
	x->inserir(250);
	x->insereNegativos();
	x->imprimir();

	system("pause");
	return 0;
}
