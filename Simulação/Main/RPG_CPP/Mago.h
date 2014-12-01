#ifndef MAGO_H
#define MAGO_H

#include <string>
#include <vector>
#include <list>
#include <time.h>
#include <stdlib.h>

#include "Equipamento.h"
#include "Magia.h"
#include "Heroi.h"

class Mago : public Heroi
{
protected:
	Magia* lista_Magias;
    int num_Magia;

public:

	Mago(string nome = "Mago", string descricao = " Mago");
	Mago(const string& ,const string&, const int&, const int&, const int&, const int&, const int&, const int&);
	Mago(const Mago&);
	~Mago();

	void set_Magia_Mago(const Magia&);

	Magia* get_Magias_Mago() const;
	Magia  get_Magia_Mago(const int&) const;

	void Equipar(const Equipamento&);
	void Subir_De_Nivel(const int&);
	void Adicionar_Magia(const Magia&);
 	void Def_Stats();
};


#endif
