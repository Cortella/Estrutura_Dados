void ListaMedicoes::inserir(int r)
{
	if (this->size_ == 0) {
		No* x = new No();
		x->valor = r;
		fim_->dir = x = fim_->esq;
		size_++;
	}
	if (fim_->dir->valor > r) {
		inserirInicio(r);
	}
	if (fim_->esq->valor < r) {
		inserirFinal(r);
	}
	for (No* i = fim_->dir; i != fim_; i = i->dir) {
		if ((i->esq->valor < r) && (i->valor > r)) {
			No* insert = new No(r, i->esq, i);
			size_++;
		}
	}

}