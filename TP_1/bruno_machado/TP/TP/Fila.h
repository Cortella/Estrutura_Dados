#pragma once

#include <string>
#include <iostream>

using std::string;
using std::cout;

struct No;

class Fila
{
public:

	//Cria Fila Vazia
	Fila();

	//Retorna o tamanho da fila
	int getSize_();

	//Insere um novos elementos na fila
	void enfileirar(string r);

	//Retira elemento da primeira posicao da fila
	void retirar();

	//Busca elemento existente na fila
	bool existe(string r);

private:
	int size_;
	No* fim_;

};

