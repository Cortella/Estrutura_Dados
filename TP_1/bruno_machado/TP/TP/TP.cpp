// TP.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.


#include <cstdio> // em C substituir por #include <stdio.h>
#include "ListaMedicoes.h"
#include <stdlib.h>
#include "Fila.h"

void adicionar(ListaMedicoes* recipientes, ListaMedicoes* volumes,int valor) {
	recipientes->inserir(valor);
	if (volumes->vazia()) {
		volumes->inserir(valor);
	}
}
int main() {

	ListaMedicoes* recipientes = new ListaMedicoes();
	ListaMedicoes* volumes = new ListaMedicoes();
	

	system("pause");
	return 0;
}
