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
   if(this->equipe->size() < 3 /*this->MAX_HEROIS*/)
    this->equipe->push_back(heroi);
   else
    cout << "Equipe esta cheia" << endl;
 }

Grupo::~Grupo(){
delete [] this->equipe;
delete [] this->inventario;

}

void Grupo::set_Item(Item* item){
  if(this->inventario->size() < 99 /*this->MAX_ITENS*/)
    this->inventario->push_back(item);
   else
    cout << "Limite de itens alcançado" << endl;
}
ostream& operator<<(ostream& output, const Grupo& grupo)
{
 int i ;
 for(i = 0; i < grupo.MAX_HEROIS; i++)
 {
  output << grupo.teste2[i]<< endl;
 }
 for(i = 0; i < grupo.MAX_ITENS; i++)
 {
  output << "Jaspion"/*grupo.inventario[i] */<< endl;
 }
 return output;
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
    cout << endl << endl;
    cout <<"--------------------------------- <<" << endl ;
    cout <<"|           Grupo           |" << endl;
    cout <<"--------------------------------- <<" <<endl ;
    for(i = 0; i <(int)this->inventario->size();i++)
    {
     cout << "A implementar" << endl;
    //cout << "|" << i << " "<< this->inventario[i] << "|" << i+1 << " " << this->inventario[i+1] <<endl;
    }
    cout << "Voce tem" << this->inventario->size() << " Itens" << endl;
  break;
  case 2:
    cout << endl << endl;
    cout <<"--------------------------------- <<" << endl ;
    cout <<"|           Inventario           |" << endl;
    cout <<"--------------------------------- <<" <<endl ;
    for(i = 0; i <(int)this->inventario->size();i++)
    {
     cout << "A implementar" << endl;
     //cout << "|" << i << " "<< this->inventario[i] << "|" << i+1 << " " << this->inventario[i+1] <<endl;
    }
     cout << "Voce tem" << this->equipe->size() << " integrantes no grupo" << endl;
  break;
  case 3:
     system("cls");
     cout << "" << endl;
  break;
  default:
  system("cls");
  cout << "Opcao invalida" << endl;;
  this->Text_Menu();
  cin >> opcao;
 }
}

Grupo* Grupo::operator=(const Grupo& grupo){
    this->equipe = grupo.equipe;
    this->inventario = grupo.inventario;
    return this;
}
