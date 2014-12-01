#include "Equipamento.h"


Equipamento::Equipamento(int b_Atk)
:Item()
{
 this->bonus_Atk = b_Atk;
 this->bonus_Def = 0;
 this->bonus_Mag = 0;
 this->bonus_Vel = 0;
// this->Efeito_elemental = NULL;
}



Equipamento::Equipamento(const string& nome,const string& descricao, int b_Atk, int b_Def, int b_Mag, int b_Vel)
:Item(nome, descricao)
{
 this->bonus_Atk = b_Atk;
 this->bonus_Def = b_Def;
 this->bonus_Mag = b_Mag;
 this->bonus_Vel = b_Vel;
 //this->Efeito_elemental = elemento;
}

Equipamento::~Equipamento(){
}


Equipamento::Equipamento(const Equipamento& equipamento_Cpy)
:Item(equipamento_Cpy)
{
 this->bonus_Atk = equipamento_Cpy.bonus_Atk;
 this->bonus_Def = equipamento_Cpy.bonus_Def;
 this->bonus_Mag = equipamento_Cpy.bonus_Mag;
 this->bonus_Vel = equipamento_Cpy.bonus_Vel;
 //this->Efeito_elemental = equipamento_Cpy.Efeitoo_elemental;
}

ostream& operator<<(ostream& output, const Equipamento& equipamento){
 output << static_cast <const Item&> (equipamento) << "\n";
 output << "Bonus de ataque:" << equipamento.getAtk() << endl;
 output << "Bonus de defesa:" << equipamento.getDef() << endl;
 output << "Bonus de magia:"  << equipamento.getMag() << endl;
 output << "Bonus de velocidade:" << equipamento.getVel() << endl;
 //output << "Elemento:" equipamento.getElemento() << endl;
 return output;
}

void Equipamento::setAtk(const int& stat){
 if(stat>= 0)
  this->bonus_Atk = stat;
 else
  this->bonus_Atk = 0;
}

void Equipamento::setDef(const int& stat){
 if(stat>= 0)
  this->bonus_Def = stat;
 else
  this->bonus_Def = 0;
}

void Equipamento::setMag(const int& stat){
 if(stat>= 0)
  this->bonus_Mag = stat;
 else
  this->bonus_Mag = 0;
}

void Equipamento::setVel(const int& stat){
 if(stat>= 0)
  this->bonus_Vel = stat;
 else
  this->bonus_Vel = 0;
}
/*
void Equipamento::setElemento(const Elemento& elemento){
 string aux = >eleemento.getNome()
 if(elemento!= null && !aux.empty())
  this->Efeito_Elemental= elemento;
 else
  this->Efeito_Elemental= NULL;
}

*/

int Equipamento::getAtk() const {
return this->bonus_Atk;
}

int Equipamento::getDef() const {
return this->bonus_Def;
}

int Equipamento::getMag() const {
return this->bonus_Mag;
}

int Equipamento::getVel() const {
return this->bonus_Vel;
}
