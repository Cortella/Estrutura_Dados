#pragma once

#include <string>
#include "ListaMedicoes.h"

using std::string;

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

	//insere elemnto no fim da lista
	void inserir(int combinicao, int op);

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

