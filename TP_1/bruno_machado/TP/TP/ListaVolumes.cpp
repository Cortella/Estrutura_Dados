#include "ListaVolumes.h"

struct Apontador {
	string valor;
	Apontador* esq;
	Apontador* dir;
	Apontador() {
		valor = NULL;
		esq = dir = nullptr;
	}
	Apontador(int v, Apontador* e, Apontador* d) {
		valor = v;
		esq = e;
		dir = d;
	}
};

ListaVolumes::ListaVolumes()
{
	recipientes_ = new ListaMedicoes();
	fim_ = new Apontador();
	size_ = 0;
}

ListaVolumes::ListaVolumes(ListaMedicoes* r)
{
	recipientes_ = r;
	fim_ = new Apontador();
	size_ = 0;
}

void ListaVolumes::adicionar(int r)
{
	recipientes_->inserir(r);
	
}
