#include "Mago.h"

Mago::Mago(string nome, string descricao)
:Heroi(nome, descricao)
{
 this->lista_Magias = new vector<Magia*>;
}

Mago::Mago(const string& nome,const string& descricao, const int& hp, const int& mp, const int& ataque, const int& defesa, const int& magia, const int& velocidade)
:Heroi(nome, descricao, hp, mp, ataque, defesa, magia, velocidade)
{
  this->lista_Magias = new vector<Magia*>;
}

Mago::~Mago(){
 delete [] this->lista_Magias;
}

void Mago::set_Magia_Mago(Magia* magia)
{
 if(magia != 0)
     this->lista_Magias->push_back(magia);
}

void Mago::Subir_De_Nivel(const int& experiencia)
{
 srand(time(NULL));
 int b_Random = rand() %5 + 0;
 int excedente = experiencia - this->pontosExperiencia;
 this->pontosExperiencia-= experiencia;
 if(this->pontosExperiencia == 0 && this->lv_Atual <= MAX_LV){
  this->lv_Atual++;
  this->HP = 35 + b_Random;
  this->MP = 18 + b_Random;
  this->ataque = 4 + b_Random;
  this->defesa = 3 + b_Random -1;
  this->magia = b_Random;
  this->velocidade = 1 + b_Random;
  this->pontosExperiencia+= this->pontosExperiencia/10;
//  this->pontosExperiencia = (floor) this->pontosExperiencia;
 }else if(this->pontosExperiencia < 0 && this->lv_Atual <= MAX_LV){
  this->lv_Atual++;
  this->HP = 35 + b_Random;
  this->MP = 18 + b_Random;
  this->ataque = 4 + b_Random;
  this->defesa = 3 + b_Random -1;
  this->magia = b_Random;
  this->velocidade = 1 + b_Random;
  this->pontosExperiencia+= this->pontosExperiencia/10;
  this->Subir_De_Nivel(excedente);
 }
}


void Mago::Equipar(const Equipamento& equipamento)
{

}


void Mago::Def_Stats(){
 this->lv_Atual =1;
 this->HP = 30;
 this->MP = 80;
 this->ataque = 5;
 this->defesa = 6;
 this->velocidade = 12;
 this->magia = 18;
}
