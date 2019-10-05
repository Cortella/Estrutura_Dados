#include "ListaMedicoes.h"

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

//Metodos Publicos
ListaMedicoes::ListaMedicoes()
{
	size_ = 0;
	fim_ = new No();
	fim_->esq = fim_->dir = fim_;
}

ListaMedicoes::ListaMedicoes(const ListaMedicoes& l) : ListaMedicoes()
{
	*this = l;
}

No* ListaMedicoes::getSentinela()
{
	return fim_;;
}

void ListaMedicoes::inserir(int r)
{
	No* aux;
	if (vazia()) {
		this->inserirFinal(r);
	}
	else if (r > fim_->esq->valor) {
		this->inserirFinal(r);
	}
	else if (r < fim_->dir->valor) {
		this->inserirInicio(r);
	}
	else {
		for (No* i = fim_->dir; i != fim_; i = i->dir) {
			if (i->valor <= r && i->dir->valor > r) {
				aux = i;
				No* novo = new No(r, aux, aux->dir);
				i->dir = novo;
				size_++;
				break;
			}
		}
	}
}

void ListaMedicoes::retirar(int r)
{
	for (No* i = fim_->dir; i != fim_; i = i->dir) {
		if (i->valor == r) {
			No* anterior = i->esq;
			No* posterior = i->dir;
			anterior->dir = posterior;
			posterior->esq = anterior;
			delete i;
			size_--;
			break;
		}

	}
}

bool ListaMedicoes::existe(int r)
{
	if (Pesquisar(r) == nullptr) {
		return false;
	}
	else {
		return true;
	}
}

int ListaMedicoes::getSize()
{
	return size_;
}

void ListaMedicoes::imprimir()
{
	for (No* i = fim_->dir; i != fim_; i = i->dir) {
		cout << i->valor << " | ";
	}
}

bool ListaMedicoes::vazia()
{
	return (size_ == 0);
}

ListaMedicoes::~ListaMedicoes()
{
	// Apaga todos os elementos de *this.
	while (!vazia()) {
		removerPrimeiro();
	}
	// Libera a memória do sentinela.
	delete fim_;
}

//Metodos Privados

void ListaMedicoes::removerPrimeiro()
{
	No* primeiro = fim_->dir;
	No* segundo = primeiro->dir;
	fim_->dir = segundo;
	segundo->esq = fim_;
	delete primeiro;
	size_--;
}

void ListaMedicoes::inserirInicio(int r)
{
	No* aux = fim_->dir;
	fim_->dir = aux->esq = new No(r, fim_, aux);
	size_++;
}

void ListaMedicoes::inserirFinal(int r)
{
	No* aux = fim_->esq;
	fim_->esq = aux->dir = new No(r, aux, fim_);
	size_++;
}

No* ListaMedicoes::Pesquisar(int r)
{
	for (No* i = fim_->dir; i != fim_; i = i->dir) {
		if (i->valor == r) {
			return i;
		}
	}
	return nullptr;
}
