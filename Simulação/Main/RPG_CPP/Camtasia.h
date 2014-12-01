#ifndef CAMTASIA_H
#define CAMTASIAH

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Magia.h"

using namespace std;
class Camtasia: public Monstro
{
protected:

	Magia Raio_De_Gelo;

public:
	Camtasia(string nome = "CAMTASIA");
    	Camtasia(string nome, int hp, int mp, int ataque, int defesa, int magia, int velocidade);
	~Camtasia();
	Camtasia(const Camtasia&)

	void Add_Skill(const Magia&);

};

#endif
