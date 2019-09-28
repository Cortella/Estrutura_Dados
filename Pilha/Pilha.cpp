#include "Pilha.h"

using namespace std;

Pilha::Pilha(){
    vet_ = new int[100];
    max_tam_ = 99;
    topo_ = -1;
}

void Pilha::push(int e){
    if(topo == max_tam_){
      cout<< "Pilha cheia"  
    }else{
        vet_[topo_+1] = e;
        topo_++;
    }
}

void Pilha::pop(){
    if(topo_ == -1){
        cout<<"Pilha vazia!! ";
    }else{
        topo_--;
    }

int Pilha::getTopo(){
    return vet_[topo_];
}

bool Pilha::vazia(){
    return(topo_ == -1);
}
}
Pilha::~Pilha(){
    delete[] vet;
}