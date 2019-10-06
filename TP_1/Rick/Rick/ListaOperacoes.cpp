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
		operacoes = NULL;
		esq = dir = nullptr;
	}
	Apontador(int v, int o, Apontador* e, Apontador* d) {
		valor = v;
		operacoes = o;
		esq = e;
		dir = d;
	}
};

ListaOperacoes::ListaOperacoes()
{
	fim_ = new Apontador();
	fim_->esq = fim_->dir = fim_;
	size_ = 0;
	medidas_ = new ListaMedicoes();
	Apontador* zero = fim_->dir;
	fim_->dir = zero = new Apontador(0, 0, fim_, fim_);
	size_++;
}

void ListaOperacoes::preencherLista(ListaMedicoes* volumes)
{
	No* aux = volumes->getSentinela();
	ListaMedicoes* anterior = new ListaMedicoes();
	for (int i = 2; i <= 15; i++) {
		anterior = this->getSubLista(i-1);
		No* j = volumes->getSentinela();
		for (j->dir ; j != volumes->getSentinela(); j = j->dir) {
			int positivo = j->valor;
			int negativo = -(j->valor);
			No* k	= anterior->getSentinela();
			for (k->dir; k != anterior->getSentinela(); k = k->dir) {
				int atual = k->valor;
				int resultado1 = atual + positivo;
				if ((resultado1 >= 0) && (!existe(resultado1))) {
					inserir(resultado1,i);
				}
				int resultado2 = atual + negativo;
				if ((resultado2 >= 0) && (!existe(resultado2))) {
						inserir(resultado2, i);
				}
			}
		}
	}
	
}

void ListaOperacoes::limparLista()
{
	while (!vazia()) {
		removerUltimo();
	}
}

ListaMedicoes *ListaOperacoes::getSubLista(int op)
{
	ListaMedicoes* aux = new ListaMedicoes();
	for (Apontador *i = fim_->dir; i != fim_; i = i->dir) {
		if (i->operacoes == op) {
			aux->inserir(i->valor);
		}
		if (i->operacoes > op) {
			break;
		}
	}
return aux;
}

void ListaOperacoes::imprimir()
{
	for (Apontador *i = fim_->dir; i != fim_; i = i->dir) {
		cout << i->operacoes << "|" << i->valor << endl;
	}
}

void ListaOperacoes::inserir(int combinacao, int op)
{
	Apontador* ultimo = fim_->esq;
	fim_->esq = ultimo->dir = new Apontador(combinacao,op, ultimo, fim_);
	size_++;
}

void ListaOperacoes::primeiraCombinacao(ListaMedicoes *list)
{
	No* aux = list->getSentinela();
	for (aux->dir; aux != list->getSentinela(); aux = aux->dir) {
		inserir(aux->valor,1);
	}
}

int ListaOperacoes::consultarOp(int r)
{
	for (Apontador* i = fim_->dir; i != fim_; i = i->dir) {
		if (r == i->valor) {
			return i->operacoes;
		}
	}
	return-1;
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

bool ListaOperacoes::existe(int e)
{
	for (Apontador* i = this->fim_->dir; i != fim_; i = i->dir) {
		if (i->valor == e) {
			return true;
		}
	}
	return false;
}


