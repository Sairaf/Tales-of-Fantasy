#include "Faca.h"

Faca::Faca()
:Arma("Faca", "Faca de cozinha ordinaria", 10,0,0,0,10)
{

}

Faca::~Faca()
{

}

void Faca::Efeito()
{
 cout << "...Nada acontece";
}

ostream& operator<<(ostream& output, const Faca& faca)
{
 output << static_cast <const Arma&> (faca) << "\n";
 return output;
}

Faca* Faca::operator+=(const Faca& faca)
{
 Arma::operator+=(faca);
 return this;
}
