#include "Operador.h"

Operador::Operador()
{
	recipientes_ = new ListaMedicoes();
	volumes_ = new ListaMedicoes();
}

Operador::Operador(ListaMedicoes* l)
{
	recipientes_ = l;
	volumes_ = new ListaMedicoes();
}

void Operador::adicionar(int r)
{
	No* fim = recipientes_->getSentinela();
	recipientes_->inserir(r);
	if (volumes_->vazia()) {
		volumes_->inserir;
	}
	else {
		for(No *i = fim->dir;)
	}
}

void Operador::retirar(int r)
{
	recipientes_->retirar(r);
}

ListaMedicoes Operador::getRecipientes()
{
	return *recipientes_;
}

ListaMedicoes Operador::getCombinacoes()
{
	return *volumes_;
}

void Operador::imprimir()
{
	recipientes_->imprimir();
	cout << endl;
	volumes_->imprimir();
}

