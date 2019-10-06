#ifndef LISTA_OPERACOES_H
#define LISTA_OPERACOES_H

#include "ListaMedicoes.h"

struct Apontador;
struct  No;

class ListaOperacoes
{
public:
	//Cria Lista de combinacoes possiveis
	ListaOperacoes();

	//Preenche as combinacoes a apartir de uma lista de volumes existente
	//Max 15 combinacoe
	void preencherLista(ListaMedicoes* volumes);

	//limpa lista sem excluir sentinela
	void limparLista();

	//retorna ponteiro para primeiro elemento da Lista com um numero de operacoes especifico
	ListaMedicoes *getSubLista(int op);

	//Imprime a lista
	void imprimir();

	//insere elemento no fim da lista
	void inserir(int combinicao, int op);

	//cria primeiro combinacao
	void primeiraCombinacao(ListaMedicoes* list);

	//Busca elemento na lista
	int consultarOp(int r);

	//Desaloca memoria da lista
	~ListaOperacoes();
private:
	Apontador* fim_;
	int size_;

	//Remove primeiro elemento da lista deixa apenas o 0 (primeiro)
	void removerUltimo();

	//verifica se lista esta vazia
	bool vazia();

	//Verifica se elemento esta na lista
	bool existe(int e);

	
};

#endif