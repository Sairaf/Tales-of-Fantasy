#include "Item.h"


Item::Item(string nome, string descricao)
:nome_Item(nome), descricao_Item(descricao)
{
  this->durabilidade = 5;
}

Item::Item(const string& nome,const string& descricao, const int& durabilidade)
{
  this->nome_Item = nome;
  this->descricao_Item = descricao;
  this->durabilidade = durabilidade;
}

Item::~Item()
{
}

Item::Item(const Item& item_Cpy){
  this->nome_Item = item_Cpy.nome_Item;
  this->descricao_Item = item_Cpy.descricao_Item;
  this->durabilidade = item_Cpy.durabilidade;
}

void Item::set_Nome_Item(const string& nome){
  if(nome.empty() == false)
   this->nome_Item = nome;
  else
   this->nome_Item = "Desconhecido";
}
void Item::set_Descricao_Item(const string&descricao){
  if(descricao.empty() == false)
   this->descricao_Item =descricao;
  else
   this->descricao_Item = "Desconhecido";
}

void Item::set_Durabilidade(const int& durabilidade){
  if(durabilidade >= 1)
   this->durabilidade = durabilidade;
  else
    this->durabilidade = 1;
}

string Item::get_Nome_Item() const{
  return this->nome_Item;
}

string Item::get_Descricao_Item() const{
  return this->descricao_Item;
}

int Item::get_Durabilidade() const{
  return this->durabilidade;
}


ostream& operator<<(ostream& output, const Item& item){
 output << "Nome do item" << item.get_Nome_Item() << endl;
 output << "Descricao do item" << item.get_Descricao_Item() << endl;
 output << "Durabilidade" << item.get_Durabilidade() << endl;
}
/*
ostream& operator<<(ostream& output, const Item* item){
 output << "Nome do item" << item.get_Nome_Item() << endl;
 output << "Descricao do item" << item.get_Descricao_Item() << endl;
 output << "Durabilidade" << item.get_Durabilidade() << endl;
}
*/
