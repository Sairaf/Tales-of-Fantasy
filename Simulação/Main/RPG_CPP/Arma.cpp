#include "Arma.h"
/*
Arma::Arma(int p_Atk)
:Equipamento(p_Atk)
{

}*/



Arma::Arma(const string& nome,const string& descricao,const int& b_Atk,const int& b_Def,const int& b_Mag,const int&b_Vel, const int& durabilidade)
:Equipamento(nome, descricao, b_Atk, b_Def, b_Mag,b_Vel, durabilidade)
{

}

Arma::~Arma()
{
}

Arma::Arma(const Arma& arma)
:Equipamento(arma)
{
 this->bonus_Atk = arma.bonus_Atk;
}

ostream& operator<<(ostream& output , const Arma& arma){
 output << static_cast <const Equipamento&> (arma) << "\n";
 //output << "Poder de ataque" << arma.get_P_Atk();
 return output;
}

void Arma::Add_Bonus(const int& bonus){
   int aux = this->getAtk();
   aux+=bonus;
   this->setAtk(aux) ;
}
