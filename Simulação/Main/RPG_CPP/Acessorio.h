#ifndef ACESSORIO_H
#define ACESSORIO_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Equipamento.h"
#include "Elemento.h"
#include "Gelo.h"
using namespace std;


class Acessorio : public Equipamento
{
 friend ostream& operator<<(ostream&, const Acessorio&);
 protected:
	//Elemento* efeito_Secundario;

 public:
	Acessorio(int atk = 0);
	Acessorio(const string& nome,const string& descricao,const int& b_Atk,const int& b_Def,const int& b_Mag,const int& b_Vel, const Elemento&);
	Acessorio(const Acessorio&);
	~Acessorio();

//	void setElemento_S(const Elemento&);

//	Elemento* getElemento() const;

	Elemento* operator=(const Elemento&);
    virtual void Add_Elemento(const int&) = 0;
};

#endif
