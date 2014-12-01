#include "Monstro.h"


Monstro::Monstro(string nome, string descricao)
:nome_Monstro(nome), descricao_Monstro(descricao)
{

 this->Habilidades = new Magia;
 this->set_HP_Monstro(100);
 this->set_MP_Monstro(100);
 this->set_Atk_Monstro(10);
 this->set_Def_Monstro(10);
 this->set_Mag_Monstro(5);
 this->set_Vel_Monstro(5);
}

Monstro::Monstro(const string& nome,const string& descricao_Monstro, const int& hp, const int& mp, const int& ataque, const int& defesa, const int& magia, const int& velocidade)
{
 this->Habilidades = new Magia;
 this->set_HP_Monstro(100);
 this->set_MP_Monstro(100);
 this->set_Atk_Monstro(10);
 this->set_Def_Monstro(10);
 this->set_Mag_Monstro(5);
 this->set_Vel_Monstro(5);
}

Monstro::~Monstro()
{
 delete [] this->Habilidades;
}

void Monstro::Add_Skill(Magia magia)
{
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

void Monstro::set_Habilidade_Monstro(const Magia&magia){
  int i = 0;
  Magia* aux_Magia  = new Magia();

  if(this->num_Hab == 0){
   ++this->num_Hab;
   this->Habilidades[this->num_Hab-1] = magia;
}else if(this->num_Hab > 0){
  for(i = 0; i < this->num_Hab; i++){
    aux_Magia[i] = this->Habilidades[i] ;
  }
  delete [] this->Habilidades;
  this->Habilidades = new Magia[++this->num_Hab];

  for(i = 0; i < this->num_Hab-1; i++){
     this->Habilidades[i] = aux_Magia[i];
  }

  this->Habilidades[this->num_Hab-1] = magia;

  delete [] aux_Magia;
 }

}
