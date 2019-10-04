#pragma once

#include <string>
#include "ListaMedicoes.h"

using std::string;

struct Apontador;

class ListaVolumes
{
public:
	//Cria Lista de Volumes
	ListaVolumes();

	//Cria lista de volumes a partir de uma lista de recipientes existente
	ListaVolumes(ListaMedicoes* r);

	//Adiciona recipiente e cria combinaco es
	//Limitacao : Calcula ate 15 operacoes
	void adicionar(int r);
private:
	ListaMedicoes *recipientes_;
	Apontador* fim_;
	int size_;
};

