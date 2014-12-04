#ifndef ARMA_H
#define ARMA_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Equipamento.h"

using namespace std;
class Arma : public Equipamento
{
 friend ostream& operator<<(ostream& output, const Arma&);
protected:	
public:
	Arma(int poder_Ataque = 0);
	Arma(const string&, const string&,const int& b_Atk,const int& b_Def,const int& b_Mag,const int& b_Vel, const int& p_Atk);
	Arma(const Arma&);
	~Arma();

    virtual void Add_Bonus(const int&) = 0;
};

#endif
