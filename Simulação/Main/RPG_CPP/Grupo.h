#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <typeinfo>
#include "Heroi.h"
#include "Guerreiro.h"
#include "Mago.h"
#include "Ladino.h"
#include "Item.h"
#include <vector>
#include "Monstro.h"
using namespace std;

class Grupo
{
  friend ostream& operator<<(ostream&, const Grupo&);
  protected:
    const  int MAX_HEROIS = 4;
    const  int MAX_ITENS = 99;
    int num_Herois;
    int num_Itens;
    int dinheiro;
    Heroi* grupo;
    Item* inventario;
  public:
    Grupo();
    Grupo(Heroi*,Item*);
    Grupo(const Grupo&);
    ~Grupo();

    void Text_Menu();
    void set_Heroi(Heroi*);
    void set_Dinheiro(const int&);
    void set_Item(const Item&);

    void get_Dinheiro(const int&);
    void Batalhar(const Monstro&);
   // Heroi get_Grupo() const;
   // Item get_Inventario() const;

    Grupo* operator=(const Grupo&);
    void Menu();


};

