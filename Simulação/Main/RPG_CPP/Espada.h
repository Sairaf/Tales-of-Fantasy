#ifndef ESPADA_H
#define ESPADA_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>
#include <cstdlib>
#include "Arma.h"

using namespace std;

class Espada: public Arma
{
 friend ostream& operator<<(ostream& output, const Espada&);
 protected:
	int poder_Ataque ;
    string Elemento_Espada ;
public:
	Espada();
	Espada(const string&, const string&,const int& b_Atk,const int& b_Def,const int& b_Mag,const int& b_Vel);
	~Espada();

    void Add_Bonus(const int&) = 0;
};
#endif
