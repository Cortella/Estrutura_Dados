#ifndef PILHA_H
#define PILHA_H

#include <iostream>

class Pilha{
    public:
    //Cria pilha
    Pilha();

    //insere elemento no topo
    void Empilhar(double k);

    //Remove elemento do topo
    //Pre-condicao pilha nao pode estar vazia
    void Desempilhar();

    //Testa se a pilha nao esta vazia
    bool Vazia();

    //Retorna o elemento do topo da pilha
    //pre-condição:Pilha nao-vazia
    double Topo();

    //testa se a pilha corrente é igual a x
    bool operator==(Pilha& x);

    //SObrescreve todos os elementos da pilha corrente por aqueles em x
    void operator=(Pilha& x);

    //destrutor
    ~Pilha();
    
    private:
    double *elementos_;
    int tamanho_;
    
};

#endif