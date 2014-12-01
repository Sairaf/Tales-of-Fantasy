#ifndef GUERREIRO_H
#define GUERREIRO_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <stdlib.h>
#include <assert.h>
#include <time.h>
#include "Equipamento.h"
#include "Magia.h"
#include "Heroi.h"


class Guerreiro : public Heroi
{
protected:

    int num_Magia;
	Magia* Tecnica;
public:

	Guerreiro(string nome = "Guerreiro", string descricao = "Descricao");
	Guerreiro(const string& ,const string&, const int&, const int&, const int&, const int&, const int&, const int&);
	~Guerreiro();
	Guerreiro(const Guerreiro&);

 	void Adicionar_Tecnica(const Magia&);
	void Equipar(const Equipamento&);
	void Subir_De_Nivel(const int&);
 	void Def_Stats();
};

#endif
