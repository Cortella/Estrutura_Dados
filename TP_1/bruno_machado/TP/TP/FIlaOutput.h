#pragma once

struct No;
class FilaOutput
{
public:

	//Cria Fila Vazia
	FilaOutput();

	//Retorna o tamanho da fila
	int getSize_();

	//Insere um novos elementos na fila
	void inserir(int e);

	//Retira elemento da primeira posicao da fila
	void retirar();

	//Busca elemento existente na fila
	bool existe(int e);
private:
	int size_;
	No fim_;

};

