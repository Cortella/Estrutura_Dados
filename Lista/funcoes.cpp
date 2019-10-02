//Funcoes para lista encadeada

void moveMenor(TipoLista *lista){
    Apontador *anterior_ao_menor = lista->Primeiro;
    Apontador *it = lista->primeiro->prox;

    while(it != nullptr){
        if(it->prox->item.chave < anterior_ao_proximo->prox->item.chave){
            anterior_ao_menor = it;

            it = it->prox;
        }
    } 
}