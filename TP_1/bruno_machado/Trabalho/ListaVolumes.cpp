#include "ListaOperacoes.h"

struct Apontador {
	int valor;
	int operacoes;
	Apontador* esq;
	Apontador* dir;
	Apontador() {
		valor = NULL;
		esq = dir = nullptr;
	}
	Apontador(int v,int o, Apontador* e, Apontador* d) {
		valor = v;
		operacoes = 0;
		esq = e;
		dir = d;
	}
};

ListaOperacoes::ListaOperacoes()
{
	op_ = new ListaMedicoes();
	fim_ = new Apontador();
	size_ = 1;
	fim_->dir = new Apontador(0, 0, fim_, fim_);
}


void ListaOperacoes::adicionar(int r)
{

}

bool ListaOperacoes::vazia()
{
	return (size_== 1);
}


