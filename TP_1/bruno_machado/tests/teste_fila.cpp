//TESTE FILA

#include <iostream>
#include <stdlib.h>
#include "../TP/TP/FilaOutput.h"

using namespace std;

int main(){
cout<< "Inicio do TESTE FILA \n";
FilaOutput *fila = new FilaOutput();
fila->inserir("p 30");
fila->inserir("p 40");
fila->inserir("p 50");
fila->inserir("p 45");
cout << "Size = " << fila->getSize_ <<endl;
cout<< "Existe = " << fila->existe() <<endl;
fila->imprimir();
system("pause");
return 0;
}