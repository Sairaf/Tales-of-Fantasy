#include "Grupo.h"
/*
-int main(void)
-{
- Servico* t = new ServicoStreaming("P", "T");

-ServicoStreaming * strPtr = dynamic_cast<ServicoStreaming *>(t);
-if (strPtr != 0)
-{
- cout << strPtr[0];
-}
-*/



Grupo::Grupo()
{
 this->teste = new vector<int>;
 this->equipe = new vector<Heroi*>;
 this->inventario = new vector<Item*>;

}


Grupo::Grupo(const Grupo& grupo_Cpy)
{
 this->equipe = grupo_Cpy.equipe;
 this->inventario = grupo_Cpy.inventario;
}

Grupo::Grupo(Heroi* grupo,Item* inventario){
this->equipe->push_back(grupo);
this->inventario->push_back(inventario);
}


void Grupo::set_Heroi(Heroi* heroi){
   if(this->equipe->size() < 3)
    this->equipe->push_back(heroi);
   else
    cout << "heroi invalido" << endl;
 }


void Grupo::set_Item(const Item& item){
/* if(item != NULL && this->inventario.size() < this->MAX_Itens)
   this->inventario.push_back(item);*/
}
/*
<Heroi> Grupo::get_Grupo() const{

 return this->grupo;
}

<Item> Grupo::get_Inventario() const{

 return this->inventario;
}
*/
ostream& operator<<(ostream& output, const Grupo& grupo)
{
 int i ;
 for(i = 0; i < grupo.MAX_HEROIS; i++)
 {
  output << grupo[i].teste<< endl;
 }
 for(i = 0; i < grupo.MAX_ITENS; i++)
 {
  output << "Jaspion"/*grupo.inventario[i] */<< endl;
 }
}

void Grupo::Text_Menu()
{
 cout << "1 - Mostrar inventario"  << endl;
 cout << "2 - Mostrar status dos personagens" << endl;
 cout << "3 - Sair" <<endl;
}


void Grupo::Menu()
{
 int i;
 int opcao;
 this->Text_Menu();
 cin >> opcao;
 switch(opcao)
 {


  case 1:

  cout <<"--------------------------------- <<" << endl ;
  cout <<"|           Inventario           |" << endl;
  cout <<"--------------------------------- <<" <<endl ;
  for(i = 0; i <this->num_Itens-1;i++)
  {
   cout << "|" << i << " "<< this->inventario[i] << "|" << i+1 << " " << this->inventario[i+1] <<endl;
  }
  break;

  case 2:
  break;
  case3:

  break;
  default:
  system("cls");
  cout << "Opcao invalida" << endl;;
  this->Text_Menu();
  cin >> opcao;
 }
}

Grupo* Grupo::operator=(const Grupo& grupo){
    this->grupo = grupo.grupo;
    this->inventario = grupo.inventario;
    return this;
}
