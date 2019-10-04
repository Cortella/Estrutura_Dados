#include "Fila.h"

struct No {
	string valor;
	No* dir;
	No* esq;
	No() {
		valor = "";
		esq=dir = nullptr;
	}
	No(string v, No* d) {
		valor = v;
		dir = d;
	}
};

Fila::Fila()
{
	size_ = 0;
	fim_ = new No();
}

int Fila::getSize_()
{
	return size_;
}

void Fila::enfileirar(string r)
{
	if (this->size_ == 0) {
		No* primeiro = fim_->dir;
		primeiro
	}
}
