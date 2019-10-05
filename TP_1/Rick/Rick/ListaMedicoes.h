#pragma once

#include <cstddef>
#include <iostream>

using namespace std;

struct No;

class ListaMedicoes
{
public:

	//Cria lista de recipientes vazia
	ListaMedicoes();

	//Cria lista de recipientes identica a passada por paramentro
	ListaMedicoes(const ListaMedicoes& l);


	//Retorna o sentilena da lista
	No* getSentinela();

	//Insere um novo recipiente na lista
	void inserir(int r);

	//Retira recipiente especifico
	void retirar(int r);

	//Limpa lista com excecao do sentinela
	void limparLista();

	//Verifica se elementos existe na lista
	bool existe(int r);

	//Retorna o tamanho da lista
	int getSize();

	//Imprime os elementos da lista
	void imprimir();

	//Verifica se a lista esta vazia
	bool vazia();

	//Desaloca memoria alocada para a lista
	~ListaMedicoes();

private:

	int size_;
	No* fim_;

	//Remove primeiro elemento
	void removerPrimeiro();

	//Insere no inicio da lista
	void inserirInicio(int r);

	//insere no fim da lista
	void inserirFinal(int r);

	//Retorna a posicao dos elemetnos na lista
	No* Pesquisar(int e);
};

