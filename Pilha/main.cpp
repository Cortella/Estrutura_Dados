//Implementacao TAD Pilha
#include <iostream>
#include "Pilha.h"
using namespace std;

int main(){
    Pilha *p = new Pilha();
    p->push(5);
    cout<< p->getTopo();
    
    return 0;
}