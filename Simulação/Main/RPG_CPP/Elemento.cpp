#include "Elemento.h"

Elemento::Elemento(string nome)
:nome_Elemento(nome)
{

}

Elemento::Elemento(const Elemento& elemento_Cpy)
{
 this->nome_Elemento = elemento_Cpy.nome_Elemento;
}

Elemento::~Elemento(){

}

ostream& operator<<(ostream& output, const Elemento& elemento){
 output <<"Nome do elemento:" << elemento.getNome_Elemento();
 return output;
}

 void Add_Efeito();
