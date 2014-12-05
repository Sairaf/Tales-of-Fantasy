#include "Monstro.h"


Monstro::Monstro(string nome, string descricao)
:nome_Monstro(nome), descricao_Monstro(descricao)
{

 this->magia_Monstro = new vector <Magia*>;
 this->exp_Ganha = 1000;
 this->set_HP_Monstro(100);
 this->set_MP_Monstro(100);
 this->HP_atual = this->HP;
 this->MP_atual = this->MP;
 this->set_Atk_Monstro(10);
 this->set_Def_Monstro(10);
 this->set_Mag_Monstro(5);
 this->set_Vel_Monstro(5);
 this->drop = new Item*;
}

Monstro::Monstro(const string& nome,const string& descricao_Monstro, const int& hp, const int& mp, const int& ataque, const int& defesa, const int& magia, const int& velocidade, const int& exp)
{
 this->magia_Monstro = new vector <Magia*>;
 this->exp_Ganha = exp;
 this->set_HP_Monstro(100);
 this->set_MP_Monstro(100);
 this->HP_atual = this->HP;
 this->MP_atual = this->MP;
 this->set_Atk_Monstro(10);
 this->set_Def_Monstro(10);
 this->set_Mag_Monstro(5);
 this->set_Vel_Monstro(5);
 this->drop = new Item*;
}

Monstro::~Monstro()
{
 delete [] this->magia_Monstro;
 delete [] this->drop;
}

Monstro::Monstro(const Monstro& monstro_Cpy){
 this->magia_Monstro = monstro_Cpy.magia_Monstro;
 this->exp_Ganha = monstro_Cpy.exp_Ganha;
 this->HP = monstro_Cpy.HP;
 this->HP_atual = monstro_Cpy.HP_atual;
 this->MP = monstro_Cpy.MP;
 this->MP_atual = monstro_Cpy.MP_atual;
 this->ataque = monstro_Cpy.ataque;
 this->defesa = monstro_Cpy.defesa;
 this->magia = monstro_Cpy.magia;
 this->velocidade = monstro_Cpy.velocidade;
 this->drop = monstro_Cpy.drop;
}


void Monstro::set_Nome_Monstro(const string&nome){
   if(nome.empty() == false)
     this->nome_Monstro = nome;
   else
     this->nome_Monstro = "desconhecido";
}

void Monstro::set_Descricao_Monstro(const string& descricao){
   if(descricao.empty() == false)
     this->nome_Monstro = descricao;
   else
     this->nome_Monstro = "desconhecido";
}

void Monstro::set_HP_Monstro(const int& hp){
   if(hp >= 0)
     this->HP = hp;
   else
     this->HP = 500;
}

void Monstro::set_MP_Monstro(const int& mp){
   if(mp >= 0)
     this->MP = mp;
   else
     this->MP = 50;
}

void Monstro::set_Atk_Monstro(const int& atk){
   if(atk >= 0)
     this->ataque = atk;
   else
     this->ataque = 5;
}

void Monstro::set_Def_Monstro(const int& def){
   if(def >= 0)
     this->defesa = def;
   else
     this->defesa = 5;
}

void Monstro::set_Mag_Monstro(const int& mag){
   if(mag >= 0)
     this->magia = mag;
   else
     this->magia = 5;
}
void Monstro::set_Vel_Monstro(const int& vel){
   if(vel >= 0)
     this->velocidade = vel;
   else
     this->velocidade = 5;
}

void Monstro::set_Habilidade_Monstro(Magia* magia){


}
