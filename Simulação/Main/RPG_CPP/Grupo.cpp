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
 this->num_Herois = 0;
 this->num_Itens = 0;
 this->grupo = 0;
 this->inventario = 0;

}


Grupo::Grupo(const Grupo& grupo_Cpy)
{
 this->grupo = grupo_Cpy.grupo;
 this->inventario = grupo_Cpy.inventario;
}

Grupo::Grupo(Heroi* grupo,Item* inventario){
this->grupo = grupo;
this->inventario = inventario;
}

void Heroi::Verificar_Tipo_Heroi(const Heroi& heroi){
 string tipo = typeid(heroi).name();
}


void Grupo::set_Heroi(Heroi* heroi){
    int i;
    if(this->num_Herois <this->MAX_HEROIS){
    Heroi* aux;
      if(this->num_Herois == 0){
        ++this->num_Herois;
        if(dynamic_cast<Guerreiro*>(heroi) != NULL){
          aux[0] = heroi[0];
          heroi = dynamic_cast <Guerreiro*>(aux);
          this->grupo[this->num_Herois-1] = heroi[0];
        }else if(dynamic_cast<Mago*>(heroi) != NULL){

          aux[0] = heroi[0];
          heroi = dynamic_cast <Mago*>(aux);
          this->grupo[this->num_Herois-1] = heroi[0];
        }else if(dynamic_cast<Ladino*>(heroi) != NULL){

          aux[0] = heroi[0];
          heroi = dynamic_cast <Ladino*>(aux);
          this->grupo[this->num_Herois-1] = heroi[0];
        }else{
        cout << "Ponteiro invalido" << endl;
        }
     }else{
        for(i = 0; i < this->num_Herois; i++){
         if(dynamic_cast<Guerreiro*>(&this->grupo[i]) != NULL){

          aux[i] = this->grupo[i];
        }else if(dynamic_cast<Mago*>(&this->grupo[i]) != NULL){

          aux[i] = this->grupo[i];
        }else if(dynamic_cast<Ladino*>(&this->grupo[i]) != NULL){

          aux[i] = this->grupo[i];
        }
    }
    delete [] aux;
    delete [] this->grupo ;
  }
 }else{
  cout << "Tipo invalido ou o grupo esta cheio"  << endl;
 }
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
  output << grupo.grupo << endl;
 }
 for(i = 0; i < grupo.MAX_ITENS; i++)
 {
  output << grupo.inventario[i] << endl;
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
