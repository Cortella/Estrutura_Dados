#ifndef FILA_H
#define FILA_H

#include <string>
#include <iostream>

using std::cout;
using std::endl;

struct No;

class Fila {
public:
	// Cria uma fila vazia.
	Fila();

	// Insere um elemento no fim da fila.
	void inserir(int s);

	// Desaloca a memória alocada para a fila.
	~Fila();

private:
	No* fim_;  // Ponteiro para o sentinela da lista encadeada.
	int tamanho_;  // N�mero de elementos na fila;

	// Retorna o primeiro elemento da fila.
	// PRECONDI��O: A fila não pode estar vazia.
	int primeiro() const;

	// Retira o primeiro elemento da fila.
	// PRECONDIÇÃO: A fila não pode estar vazia.
	void RemoverPrimeiro();

	// Testa se a fila está vazia.
	bool vazia() const;

};

#endif