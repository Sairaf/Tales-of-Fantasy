#include "Gelo.h"

Gelo::Gelo()
:Elemento("Gelo")
{
}
void Gelo::Add_Efeito(){
 this->setNome_Elemento("Gelo");
}

void Gelo::setNome_Elemento(const string& nome){
 if(nome.empty() == false)
  this->nome_Elemento = nome;
 else
  this->nome_Elemento = "Desconhecido";
}
