#include "FIlaOutput.h"

struct No {
  string valor;
  No* dir;
  No() {
    valor = "";
    dir = nullptr;
  }
  No(string v, No* d) {
    valor = v;
    dir = d;
  }
};

