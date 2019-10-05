#include "ListaOperacoes.h"

struct No {
	int valor;
	No* esq;
	No* dir;
	No() {
		valor = NULL;
		esq = dir = nullptr;
	}
	No(int v, No* e, No* d) {
		valor = v;
		esq = e;
		dir = d;
	}
};

struct Apontador {
	int valor;
	int operacoes;
	Apontador* esq;
	Apontador* dir;
	Apontador() {
		valor = NULL;
		esq = dir = nullptr;
	}
	Apontador(int v, int o, Apontador* e, Apontador* d) {
		valor = v;
		operacoes = 0;
		esq = e;
		dir = d;
	}
};

ListaOperacoes::ListaOperacoes()
{
	fim_ = new Apontador();
	fim_->esq = fim_->dir = fim_;
	Apontador* aux = fim_->dir;
	fim_->dir = aux->esq = new Apontador(0, 0, fim_, aux);
	size_++;
	
}

/*void ListaOperacoes::preencherLista(ListaMedicoes* volumes)
{
	Apontador *zero = new Apontador (0,0,fi)
	No* aux = volumes->getSentinela();
	for (Apontador *i = fim_->dir; i != fim_ ; i = i->dir){
		for (No* j = aux->dir; j != aux; j = j->dir) {
			adicionar(j->valor);

		}
	}
}*/

void ListaOperacoes::limparLista()
{
	while (!vazia()) {
		removerUltimo();
	}
}

void ListaOperacoes::imprimir()
{
	for (Apontador *i = fim_->dir; i != fim_; i = i->dir) {
		cout << i->operacoes << "|" << i->valor << endl;
	}
}

ListaOperacoes::~ListaOperacoes()
{
	limparLista();

	// Libera a memória do sentinela.
	delete fim_;
}

void ListaOperacoes::removerUltimo()
{
	Apontador* ultimo = fim_->esq;
	Apontador* penultimo = ultimo->dir;
	fim_->esq = penultimo;
	penultimo->dir = fim_;
	delete ultimo;
	size_--;
}

bool ListaOperacoes::vazia()
{
	return (size_ == 1);
}


