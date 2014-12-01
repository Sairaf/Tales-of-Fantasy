#define MAGIA_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>
#include <cstlib>

class Espada: public Arma
{
 friend ostream& operator<<(ostream& output, const Espada&);
 protected:
	const int poder_Ataque = 15;
    const Gelo Elemento_Espada = new Gelo();
public:
	Espada();
	Espada(const string&, const string&,const int& b_Atk,const int& b_Def,const int& b_Mag,const int& b_Vel);
	~Arma();


    void Add_Bonus(const int&) = 0;
};
