//Teste

#include <stdio.h>
#include "../TP/ListaRecipientes.h"

int main(){
    ListaRecipientes * recipientes = new ListaRecipientes();
    recipientes->inserir(50);
    recipientes->inserir(230);
    recipientes->inserir(280);
    recipientes->inserir(350);
    recipientes->inserir(290);

    ListaRecipientes *combinacoes = new ListaRecipientes();
    cout<<"Digite o numero de operacoes" <endl;
    system("pause");
    return 0;
}