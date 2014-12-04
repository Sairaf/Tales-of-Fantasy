#ifndef CAMTASIA_H
#define CAMTASIA_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Monstro.h"
#include "Magia.h"

using namespace std;
class Camtasia: public Monstro
{
protected:
public:
//	Camtasia(string nome = "CAMTASIA");
    Camtasia();
    Camtasia(int hp, int mp, int ataque, int defesa, int magia, int velocidade);
	Camtasia(const Camtasia&);
	~Camtasia();

};

#endif
