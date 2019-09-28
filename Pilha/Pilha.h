#ifndef PILHA_H
#define PILHA_H

#include <iostream>

using namespace std;

class Pilha{
    private:
    int *vet_;
    int max_tam_;
    int topo_;

    public:
    //Cria pilha vazia com 100 posicoes
    Pilha();

    //Empilhar
    void push(int e);

    //Desempilhar
    void pop();

    //retorna o valor no topo
    int getTopo();

    //verifica se pilha esta vazia
    bool vazia();

    //Libera memoria alocada
    ~Pilha();
}

#endif