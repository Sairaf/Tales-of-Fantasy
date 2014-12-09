#ifndef KURAUDO_H
#define KURAUDO_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Monstro.h"
#include "Magia.h"
#include "Kuraudo_Mirrors.h"
using namespace std;
class Kuraudo: public Monstro
{
protected:
public:
	//Kuraudo(string nome = "CAMTASIA");
	Kuraudo();
    //Kuraudo(int hp, int mp, int ataque, int defesa, int magia, int velocidade);
	~Kuraudo();
	Kuraudo(const Kuraudo&);
    void Def_Stats(){};
};

#endif

