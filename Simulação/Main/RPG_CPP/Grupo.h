#ifndef GRUPO_H
#define GRUPO_H

#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <typeinfo>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <algorithm>

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

  public:
    Grupo();
    Grupo(Heroi*,Item*);
    Grupo(const Grupo&);
    ~Grupo();
	vector <Heroi*> equipe ;
	vector <Item*> inventario;

    void Text_Menu();
    void set_Heroi(Heroi*);
    void set_Dinheiro(const int&);
    void set_Item(Item*);
    int get_Dinheiro() const;

    void Atacar(Heroi*, Monstro&);
    void Batalhar(Monstro&);
    void Ordenar_Herois();
    void Mostrar_Herois();
    void Mostrar_Inventario();
    void Usar_Item();
    Grupo* operator=(const Grupo&);
    void Menu();


};
#endif // GRUPO_H
