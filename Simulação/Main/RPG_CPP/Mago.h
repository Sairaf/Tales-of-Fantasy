#ifndef MAGO_H
#define MAGO_H

#include <string>
#include <vector>
#include <list>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include "Equipamento.h"
#include "Magia.h"
#include "Heroi.h"

class Mago : public Heroi
{
protected:
	vector<Magia*> lista_Magias;
    int num_Magia;

public:

	Mago(string nome = "Mago", string descricao = " Mago");
	Mago(const string& ,const string&, const int&, const int&, const int&, const int&, const int&, const int&);
	Mago(const Mago&);
	 ~Mago();

	void set_Magia_Mago(Magia*);

	vector <Magia*> get_Magias_Mago() const;

	void Equipar(const Equipamento&);
	void Subir_De_Nivel(const int&);
 	void Def_Stats();
 	void Menu_ataque();
 	void Show_Magics();
};


#endif
