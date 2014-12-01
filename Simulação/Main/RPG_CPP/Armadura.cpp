#include "Armadura.h"


Armadura::Armadura(const int& bonus)
:Equipamento(bonus){
}

Armadura::Armadura(const string& nome, const string& descricao, const int& b_Atk, const int& b_Def, const int&b_Mag, const int&b_Vel, const int& bonus)
:Equipamento(nome, descricao, b_Atk, b_Def, b_Mag,b_Vel)
{
 this->Add_Bonus(bonus);
}

Armadura::~Armadura()
{
}

Armadura::Armadura(const Armadura& armadura_Cpy)
:Equipamento(armadura_Cpy)
{
 this->poder_Defesa = armadura_Cpy.poder_Defesa;
}

void Armadura::set_P_Def(const int& bonus){
 if(bonus >= 0)  {
  this->poder_Defesa = bonus;
 }else{
  this->poder_Defesa = bonus;
 }
}

int Armadura::get_P_Def() const{
  return this->poder_Defesa;
}

void Armadura::Add_Bonus(const int& bonus){
  this->set_P_Def(bonus);
}

ostream& operator<<(ostream& output, const Armadura& armadura){
 output << static_cast <const Equipamento&> (armadura) <<"\n";
 output << "Poder de defesa:" <<  armadura.get_P_Def();
 return output;
}
