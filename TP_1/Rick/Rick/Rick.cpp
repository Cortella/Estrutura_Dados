//main

// TP.cpp : Este arquivo cont�m a fun��o 'main'. A execu��o do programa come�a e termina ali.


#include <cstdio> // em C substituir por #include <stdio.h>
#include <iostream>
#include "ListaMedicoes.h"
#include "ListaOperacoes.h"
#include "Fila.h"

int main() {
	int q;
	char e;
	ListaMedicoes* recipientes = new ListaMedicoes();
	ListaMedicoes* volumes = new ListaMedicoes();
	ListaOperacoes* operacoesPossiveis = new ListaOperacoes();
	Fila* saida = new Fila();
	while (scanf("%d %c", &q, &e) != EOF) {

		//Indica que Rick deseja fazer uma medicao
		if (e == 'p') {
			if (operacoesPossiveis->consultarOp(q) != -1) {
				saida->inserir(q);
			}
		}

		//Recipiente quebrou e precisa ser removido
		if (e == 'r') {
			recipientes->retirar(q);
			if (!recipientes->existe(q)) {
				volumes->retirar(q);
				operacoesPossiveis->limparLista();
				operacoesPossiveis->preencherLista(volumes);
			}
		}

		//Indica a inclusao de um recipiente na lista
		if (e == 'i') {
			recipientes->inserir(q);
			if (!volumes->existe(q)) {
				volumes->inserir(q);
				operacoesPossiveis->limparLista();
				operacoesPossiveis->preencherLista(volumes);
			}
		}
	}
	recipientes->~ListaMedicoes();
	volumes->~ListaMedicoes();
	operacoesPossiveis->~ListaOperacoes();
	saida->~Fila();
	return 0;
}


// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depura��o
// Depurar programa: F5 ou menu Depurar > Iniciar Depura��o

// Dicas para Come�ar: 
//   1. Use a janela do Gerenciador de Solu��es para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do c�digo-fonte
//   3. Use a janela de Sa�da para ver mensagens de sa�da do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de c�digo, ou Projeto > Adicionar Item Existente para adicionar arquivos de c�digo existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, v� para Arquivo > Abrir > Projeto e selecione o arquivo. sln
