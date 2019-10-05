#include "ListaVolumes.h"

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

ListaVolumes::ListaVolumes()
{
	op_ = new ListaMedicoes();
	fim_ = new Apontador();
	size_ = 1;
	fim_->dir = new Apontador(0, 0, fim_, fim_);
}


void ListaVolumes::adicionar(int r)
{

	if (!op_->existe(r)) {
		op_->inserir(r);
		op_->inserir(-r);
		for (int i = 1; i <= 10; i++) {
			for(No * j = fim_; j != fim_)
		}

	}
}

bool ListaVolumes::vazia()
{
	return (size_== 1);
}


