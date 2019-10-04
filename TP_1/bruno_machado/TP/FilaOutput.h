#pragma once

#include <string>
#include <iostream>

struct No;
class FilaOutput
{
public:

	//Cria Fila Vazia
	FilaOutput();

	//Retorna o tamanho da fila
	int getSize_();

	//Insere um novos elementos na fila
	void inserir(string r);

	//Retira elemento da primeira posicao da fila
	void retirar();

	//Busca elemento existente na fila
	bool existe(string r);
	
private:
	int size_;
	No* fim_;

};

