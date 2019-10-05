
#include "fila.h"

using std::string;

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

Fila::Fila() {
	tamanho_ = 0;
	fim_ = new No();
	fim_->esq = fim_->dir = fim_;
}

void Fila::inserir(int r) {
	No* ultimo = fim_->esq;
	fim_->esq = ultimo->dir = new No(r, ultimo, fim_);
	tamanho_++;
}


Fila::~Fila() {
	
	// Apaga todos os elementos de *this.
	while (!vazia()) {
		RemoverPrimeiro();
	}
	// Libera a memória do sentinela.
	delete fim_;
}

void Fila::RemoverPrimeiro() {
	//imprime primeiro da fila
	cout << this->primeiro() << endl;
	No* primeiro = fim_->dir;
	No* segundo = primeiro->dir;
	fim_->dir = segundo;
	segundo->esq = fim_;
	delete primeiro;
	tamanho_--;
}

bool Fila::vazia() const {
	return (tamanho_ == 0);
}


int Fila::primeiro() const {
	return fim_->dir->valor;
}