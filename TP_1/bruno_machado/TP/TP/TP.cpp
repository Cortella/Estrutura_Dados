//main

// TP.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.


#include <cstdio>
#include <iostream>
#include "ListaRecipientes.h"
#include "ListaOperacoes.h"
#include "Fila.h"

int main() {
	int q;
	char e;
	ListaRecipientes* recipientes = new ListaRecipientes();
	Medicao* m = new Medicao(*recipientes);
	m - _medir();
	Fila* saida = new Fila();
	while (scanf("%d %c", &q, &e) != EOF) {

		//Indica que Rick deseja fazer uma medicao
		if (e == 'p') {

		}

		//Recipiente quebrou e precisa ser removido
		if (e == 'r') {
			recipientes->retirar(q);
		}

		//Indica a inclusao de um recipiente na lista
		if (e == 'i') {
			recipientes->inserir(q);
		}
		// veja que a funcao bar() sempre retorna 1, entao o programa sempre
		// vai imprimir 1.
		// Troque essa funcao (inclusive o nome dela) caso queira tirar uma nota
		// melhor no TP!
		printf("%d\n", bar());
	}
	return 0;
}
