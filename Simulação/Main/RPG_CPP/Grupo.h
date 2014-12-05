#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <typeinfo>
#include <vector>

#include "Heroi.h"
#include "Guerreiro.h"
#include "Mago.h"
#include "Ladino.h"
#include "Item.h"
#include "Monstro.h"
using namespace std;

class Grupo
{
  friend ostream& operator<<(ostream&, const Grupo&);
  protected:
    int MAX_HEROIS;
    int MAX_ITENS;
	vector <Heroi*>* equipe;
	vector <Item*>* inventario;
	vector <int>* teste;
	vector <int> teste2;
  public:
    Grupo();
    Grupo(Heroi*,Item*);
    Grupo(const Grupo&);
    ~Grupo();

    void Text_Menu();
    void set_Heroi(Heroi*);
    void set_Dinheiro(const int&);
    void set_Item(Item*);

    void get_Dinheiro(const int&);
    void Batalhar(const Monstro&);
   // Heroi get_Grupo() const;
   // Item get_Inventario() const;

    Grupo* operator=(const Grupo&);
    void Menu();


};
