#include "ListaRecipientes.h"


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


ListaRecipientes::ListaRecipientes()
{
	size_ = 0;
	fim_ = new No();
}

void ListaRecipientes::inserir(int r)
{
	if (this->size_ == 0) {
		No* x = new No();
		x->valor = r;
		fim_->dir = x = fim_->esq;
		size_++;
	}
	if (fim_->dir->valor > r) {
		inserirInicio(r);
	}
	if (fim_->esq->valor < r) {
		inserirFinal(r);
	}
		for (No* i = fim_->dir; i != fim_; i = i->dir) {
			if ((i->esq->valor < r) && (i->valor > r)) {
				No* insert = new No(r, i->esq, i);
				size_++;
			}
		}
	
}

bool ListaRecipientes::existe(int r)
{
	if (Pesquisar(r) == nullptr) {
		return false;
	}
	else {
		return true;
	}
}

int ListaRecipientes::getSize()
{
	return size_;
}

void ListaRecipientes::imprimir()
{
	for (No* i = fim_->dir; i != fim_; i = i->dir) {
		cout << i->valor << " | ";
	}
}

void ListaRecipientes::inserirInicio(int r)
{
	No* primeiro = fim_->dir;
	fim_->dir = primeiro->esq = new No(r, fim_, primeiro);
	size_++;
}

void ListaRecipientes::inserirFinal(int r)
{
	No* ultimo = fim_->esq;
	fim_->esq = ultimo->dir = new No(r, ultimo, fim_);
	size_++;
}

No* ListaRecipientes::Pesquisar(int r)
{
	for (No* i = fim_->dir; i != fim_; i = i->dir) {
		if (i->valor == r) {
			return i;
		}
	}
	return nullptr;
}
