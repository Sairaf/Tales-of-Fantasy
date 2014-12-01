#ifndef RAIO_DE_GELO_H
#define RAIO_DE_GELO_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Magia.h"

class Raio_De_gelo: public Magia
{
public:
	Raio_De_Gelo(string nome = "Raio de Gelo", int poder = 20);
	Raio_De_Gelo(const string&, const int&, const string&, const Elemento&);
	Raio_De_Gelo();

	void Add_Poder(const int&);
};


