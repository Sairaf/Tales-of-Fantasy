#include "Cidade.h"

Cidade::Cidade(string nome)
:nome(nome)
{
 int i;
 for(i = 0; i <(int) this->npc.size();i++)
  this->npc[i] = "Default";
}

Cidade::~Cidade()
{}

string Cidade::getNome () const{
return this->nome;
}

