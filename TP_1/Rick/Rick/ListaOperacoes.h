#pragma once

#include <string>
#include "ListaMedicoes.h"

using std::string;

struct Apontador;
struct  No;

class ListaOperacoes
{
public:
	//Cria Lista de Volumes
	ListaOperacoes();

	//Preenche as combinacoes a apartir de uma lista de volumes existente
	//void preencherLista(ListaMedicoes* volumes);

	//limpa lista sem excluir sentinela
	void limparLista();

	//Imprime a lista
	void imprimir();

	//Desaloca memoria da lista
	~ListaOperacoes();
private:
	Apontador* fim_;
	int size_;

	//Remove primeiro elemento da lista deixa apenas o 0 (primeiro)
	void removerUltimo();

	//verifica se lista esta vazia
	bool vazia();

};

