#pragma once

#include "ListaMedicoes.h"
#include <iostream>

using std::cout;
using std::endl;

class Operador
{
public:
	//Cria um novo operador com listas vazias
	Operador();

	//Cria um novo operador com uma lista de recipientes existentes
	Operador(ListaMedicoes* l);

	//Adiciona novo recipiente e cria combinacoes
	void adicionar(int r);

	//Retira um recipiente quebrado
	void retirar(int r);

	//Retorna lista de recipentes
	ListaMedicoes getRecipientes();

	//Retorna lista de combinacoes
	ListaMedicoes getCombinacoes();
	//Imprime lista
	void imprimir();
	
private:
	ListaMedicoes *recipientes_;
	ListaMedicoes *volumes_;

	int* combinacoes(int v);

};

