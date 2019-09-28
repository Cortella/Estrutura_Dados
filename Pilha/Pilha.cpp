#include <iostream>
#include "Pilha.h"


Pilha::Pilha(){
    tamanho_ = 0;
    elementos_ = new double[tamanho_+1];
}

void Pilha::Empilhar(double k){
    this->elementos_[tamanho_] = k;
    tamanho_++;
}

void Pilha::Desempilhar(){
    if(this->Vazia()){
        std::cout << "stack overflow" <<std::endl;
    }else{
        this->~Pilha();
        tamanho_--;
    }
}

bool Pilha::Vazia(){
    if(this->tamanho_==0) {
        return true;
    }else{
        return false;
    }
}

void Pilha::Realocar(){
    
}

bool Pilha::operator==(Pilha& x){
    if(this->tamanho_ != x.tamanho_){
        return false;
    }
    for(int i=0;i<x.tamanho_;i++){
        if(this->elementos_[i] != x.elementos_[i]){
            return false;
        }
    }
return true;
}

void Pilha::operator=(Pilha& x){

}

double Pilha::Topo(){
    return this->elementos_[this->tamanho_];
}



Pilha::~Pilha(){
    delete[tamanho_] elementos_;
}

