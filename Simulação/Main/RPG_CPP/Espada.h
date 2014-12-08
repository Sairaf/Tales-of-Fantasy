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

public:
	Espada();
	Espada(const string&, const string&,const int& ,const int& ,const int&,const int&, const int& );
	~Espada();

    void Efeito();
};
#endif
