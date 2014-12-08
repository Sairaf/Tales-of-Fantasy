#include "Acessorio.h"

Acessorio::Acessorio(int atk)
:Equipamento(atk)
{
 int i;
 //this->Add_Elemento(0);
}

Acessorio::Acessorio(const string& nome,const string& descricao,const int& b_Atk,const int& b_Def,const int& b_Mag,const int& p_Def,const string& elemento, const int& durabilidade)
:Equipamento(nome,descricao, b_Atk, b_Def, b_Mag, p_Def, durabilidade )
{
 int i;
 //this->Add_Elemento(0);
}

Acessorio::~Acessorio()
{
 int i;
// delete []this->efeito_Secundario;

}

Acessorio::Acessorio(const Acessorio& acessorio_Cpy)
:Equipamento(acessorio_Cpy)
{
// this->efeito_Secundario = acessorio_Cpy.efeito_Secundario;
}
/*
void Acessorio::setElemento_S(const Elemento& efeito){
 string aux = efeito.getNome_Elemento();
 if(aux.empty() == false){
  this->efeito_Secundario.push_back(efeito);
 }else{
  Elemento aux2();
  this->efeito_Secundario.push_back(aux2);
 }
}
*/
/*
void Acessorio::Add_Elemento(const int& id){

 switch(id)
 case 1:
    Elemento new_El = new Gelo;
    break;
 default
     new_El = new Gelo;
     break;
 this->setEfeito(new_El;)
}
*/

ostream& operator<<(ostream& output, const Acessorio& aces){
 int cont;
 output << static_cast <const Equipamento&> (aces) << "\n";
 output << "Elementos do Acessorio: ";
// output << aces.efeito_Secundario << " ";
 output << endl;
 return output;
}
