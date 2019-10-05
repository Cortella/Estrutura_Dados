#pragma once

#include <string>
#include "ListaOperacoes.h"

using std::string;

struct Apontador;

class ListaVolumes
{
public:
	//Cria Lista de Volumes
	ListaVolumes();

	//Adiciona recipiente e cria combinaco es
	//Limitacao : Calcula ate 10 operacoes
	void adicionar(int r);
private:
	ListaOperacoes *op_;
	Apontador* fim_;
	int size_;

	//verifica se lista esta vazia
	bool vazia();
	//verifica se um elemento esta na lista
	
	
};

