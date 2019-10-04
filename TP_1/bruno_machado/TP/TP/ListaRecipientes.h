#ifndef LISTA_MEDICOES_H
#define LISTA_MEDICOES_H


#include <cstddef>
#include <iostream>

using namespace std;

struct No;

class ListMedicoes
{
public:

	//Cria lista de recipientes vazia
	ListaRecipientes();

	//Insere um novo recipiente na lista
	void inserir(int r);

	//Retira recipiente especifico
	void retirar(int r);

	//Verifica se elementos existe na lista
	bool existe(int r);

	//Retorna o tamanho da lista
	int getSize();

	//Imprime os elementos da lista
	void imprimir();

	//retira elementos repetidos
	void retirarRepetidos();

	//Desaloca memoria alocada para a lista
	~ListaRecipientes();

private:

	int size_;
	No* fim_;


	//Insere no inicio da lista
	void inserirInicio(int r);

	//insere no fim da lista
	void inserirFinal(int r);
	//Retorna a posicao dos elemetnos na lista
	No* Pesquisar(int e);
};

#endif // !LISTA_RECIPIENTES_H