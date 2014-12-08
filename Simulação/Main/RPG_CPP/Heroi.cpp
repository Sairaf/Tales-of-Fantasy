#include "Heroi.h"

Heroi::Heroi(string nome, string descricao)
:nomeHeroi(nome), descricao(descricao)
{
 this->lv_Atual =1;
 this->pontosExperiencia = 1000;
 this->HP = 100;
 this->MP = 100;
 this->ataque = 5;
 this->defesa = 5;
 this->velocidade = 5;
 this->magia = 5;

}

Heroi::Heroi(const string& nome, const string& descricao,const int& hp,const int& mp,const int& ataque,const int& defesa,const int& magia,const int& velocidade)
{
 this->lv_Atual =1;
 this->nomeHeroi = nome;
 this->descricao = descricao;
 this->pontosExperiencia = 1000;
 this->HP = hp;
 this->MP = mp;
 this->ataque = ataque;
 this->defesa = defesa;
 this->velocidade = velocidade;
 this->magia = magia;
}


Heroi::~Heroi(){

}

void Heroi::set_Nome_Heroi(const string& nome){
  if(nome.empty() == false)
   this->nomeHeroi = nome;
  else
   this->nomeHeroi = "Loto";
}

void Heroi::set_Descricao_Heroi(const string& descricao){
  if(descricao.empty() == false)
   this->descricao = descricao;
  else
   this->descricao = "NAO INFORMADA";
}

void Heroi::set_HP_Heroi(const int& hp){
  if(hp>= 0)
   this->HP = hp;
  else
   this->HP = 10;
}

void Heroi::set_MP_Heroi(const int& mp){
  if(mp>= 0)
   this->MP = mp;
  else
   this->MP = 10;
}

void Heroi::set_HP_Atual(const int& hp){
  if(hp>= 0)
   this->HP_atual = hp;
  else
   this->HP = 0;
}

void Heroi::set_MP_Atual(const int& mp){
  if(mp>= 0)
   this->MP_atual = mp;
  else
   this->MP = 0;
}

void Heroi::set_Atk_Heroi(const int& atk){
  if(atk>= 0)
   this->ataque = atk;
  else
   this->ataque = 5;
}

void Heroi::set_Def_Heroi(const int& def){
  if(def>= 0)
   this->defesa = def;
  else
   this->defesa = 5;
}

void Heroi::set_Mag_Heroi(const int& mag){
  if(mag>= 0)
   this->magia = mag;
  else
   this->magia = 5;
}

void Heroi::set_Vel_Heroi(const int& vel){
  if(vel>= 0)
   this->velocidade = vel;
  else
   this->velocidade = 5;
}

string Heroi::get_Nome_Heroi() const{
  return this->nomeHeroi;
}

string Heroi::get_Descricao_Heroi() const{
  return this->descricao;
}

int Heroi::get_HP_Heroi() const{
 return this->HP;
}

int Heroi::get_HP_ATUAL() const{
 return this->HP_atual;
}

int Heroi::get_MP_ATUAL() const{
 return this->MP_atual;
}

int Heroi::get_MAX_HP_Heroi() const{
 return this->MAX_HP;
}

int Heroi::get_MP_Heroi() const{
 return this->MP;
}

int Heroi::get_MAX_MP_Heroi() const{
 return this->MAX_MP;
}

int Heroi::get_Atk_Heroi() const{
 return this->ataque;
}

int Heroi::get_Def_Heroi() const{
  return this->defesa;
}

int Heroi::get_Mag_Heroi() const{
 return this->magia;
}


int Heroi::get_Vel_Heroi() const{
 return this->velocidade;
}

Heroi* Heroi::operator=(const Heroi& heroi){
 this->lv_Atual =heroi.lv_Atual;
 this->nomeHeroi = heroi.nomeHeroi;
 this->descricao = heroi.descricao;
 this->pontosExperiencia = heroi.pontosExperiencia;
 this->HP = heroi.HP;
 this->MP = heroi.MP;
 this->ataque = heroi.ataque;
 this->defesa = heroi.defesa;
 this->velocidade = heroi.velocidade;
 this->magia = heroi.magia;
 return this;
}

bool Heroi::operator==(const Heroi& heroi){
  if(this->nomeHeroi == heroi.nomeHeroi)
    return true;
  else
    return false;
}


bool Heroi::operator!=(const Heroi& heroi){
  return !(this->nomeHeroi == heroi.nomeHeroi);
}

bool Heroi::operator<(const Heroi& heroi){
    return this->get_Vel_Heroi() < heroi.get_Vel_Heroi();
}


ostream& operator<<(ostream& output, const Heroi& heroi){
    output << "Nome do heroi" << heroi.get_Nome_Heroi() << endl;
    output << "Descricao" << heroi.get_Descricao_Heroi() << endl;
    return output;
}
