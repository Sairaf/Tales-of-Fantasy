#include "Mago.h"

Mago::Mago(string nome, string descricao)
:Heroi(nome, descricao)
{
 this->lista_Magias = new Magia;
}

Mago::Mago(const string& nome,const string& descricao, const int& hp, const int& mp, const int& ataque, const int& defesa, const int& magia, const int& velocidade)
:Heroi(nome, descricao, hp, mp, ataque, defesa, magia, velocidade)
{
 this->lista_Magias = new Magia;
}

void Mago::Adicionar_Magia(Magia* magia)
{
 int i = 0;
 Magia** aux_Magia = new Magia*[this->num_Magia];
 if(this->num_Magia == 0){
 ++this->num_Magia;
 this->lista_Magias[this->num_Magia-1] == magia;
 }else{

  for(i = 0; i < this->num_Magia; i++)
    aux_Magia[i] = this->lista_Magias[i];

 delete [] this->lista_Magias;

 this->lista_Magias = new Magia*[++this->num_Magia];

  for(i = 0; i < this->num_Magia-1; i++)
    this->lista_Magias[i] = aux_Magia[i];

    this->lista_Magias[this->num_Magia-1] = magia;

 }
  delete [] aux_Magia;
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
  this->pontosExperiencia*= 1.25;
 }else if(this->pontosExperiencia < 0 && this->lv_Atual <= MAX_LV){
  this->lv_Atual++;
  this->HP = 35 + b_Random;
  this->MP = 18 + b_Random;
  this->ataque = 4 + b_Random;
  this->defesa = 3 + b_Random -1;
  this->magia = b_Random;
  this->velocidade = 1 + b_Random;
  this->pontosExperiencia*= 1.25;
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
