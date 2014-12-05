#include "Kuraudo.h"

Kuraudo::Kuraudo()
:Monstro("Kuraudo", "Monstro habitante da ""Caverna do Monstro"". Nao sabe-se muito sobre ele ", 1000,1000,100,20,50,60,600)
{

}


Kuraudo::~Kuraudo()
{

}

Kuraudo::Kuraudo(const Kuraudo& kuraudo_Cpy)
:Monstro(kuraudo_Cpy)
{


}

