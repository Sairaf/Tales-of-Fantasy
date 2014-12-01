#include "Ladino.h"


Ladino::Ladino( string nome, string descricao)
:Heroi(nome, descricao)
{
}

Ladino::Ladino(const string& nome, const string& descricao, const int& hp, const int& mp, const int& ataque, const int& defesa, const int& magia, const int& velocidade)
:Heroi(nome,descricao, hp, mp, ataque, defesa, magia, velocidade)
{
}


void Ladino::Subir_De_Nivel(const int& experiencia)
{
 srand(time(NULL));
 int b_Random = rand() %5 + 0;
 int excedente = experiencia - this->pontosExperiencia;
 this->pontosExperiencia-= experiencia;
 if(this->pontosExperiencia == 0 && this->lv_Atual <= MAX_LV){
  this->lv_Atual++;
  this->HP = 24 + b_Random;
  this->MP = 22 + b_Random;
  this->ataque = 4 + b_Random;
  this->defesa = 2 + b_Random -1;
  this->magia = 3+ b_Random;
  this->velocidade = 6 + b_Random;
  this->pontosExperiencia*= 1.25;
 }else if(this->pontosExperiencia < 0 && this->lv_Atual <= MAX_LV){
  this->lv_Atual++;
  this->HP = 24 + b_Random;
  this->MP = 22 + b_Random;
  this->ataque = 4 + b_Random;
  this->defesa = 2 + b_Random -1;
  this->magia = 3+ b_Random;
  this->velocidade = 6 + b_Random;
  this->pontosExperiencia*= 1.25;
  this->Subir_De_Nivel(excedente);
 }
}

/*
void Ladino::Roubar(Monstro monstro)
{

}

void Ladino::Equipar(Equipamento equipamento)
{
}
*/
