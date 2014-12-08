#ifndef TROVAO_H
#define TROVAO_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include "Magia.h"

using namespace std;
class Trovao: public Magia
{
friend ostream& operator<<(ostream&, const Trovao&);
public:

	Trovao();
	Trovao(const Trovao&);
	~Trovao();
    int Efeito() ;
};


#endif
