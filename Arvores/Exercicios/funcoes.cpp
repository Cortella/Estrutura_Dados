//Exercicios arvore

int soma(Apontador *no){
    if(no != nullptr){
        return no->item.chave +soma(no->esq) + soma(no->dir);
    }
    return 0;
}

int maiorBinario(Apontador *no){
    if(no->dir != nullptr){
        return maiorBinario(no->dir);
    }
    return no->item.chave;
}

int somaFolhas(Apontador *no){
    if(no == nullptr){
        return 0;
    }
    if(no->dir != nullptr || no->esq != nullptr){
        return somaFolhas(no->esq) + somaFolhas(no->dir);
    }
    return no->item.chave;
}

int paridade(Apontador no){
    if (no == nullptr){
        return 0;
    }else{
        if(no->item.chave % 2 == 0){
            return 1 + paridade(no->esq) + paridade(no->dir);
        }
        return 0 + + paridade(no->esq) + paridade(no->dir);
    }

int altura(Apontador *no){
    if(no == nullptr){
        return -1;
    }else{
        int alturaEsquerda = altura(no->esq);
        int alturaDireita = altura(no->dir);
        if(alturaEsquerda > alturaDireita){
            return 1 + alturaEsquerda;
        }else{
            return 1 + alturaDireita;
        }
    }
}



}