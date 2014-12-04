#include "Camtasia.h"

Camtasia::Camtasia()
:Monstro("Camtasia", "Monstro especializado em enganar suas presas com ilusoes",210, 50, 30,30,30,30)
{
}

Camtasia::~Camtasia()
{

}

Camtasia::Camtasia(const Camtasia& camtasia_Cpy)
:Monstro(camtasia_Cpy)
{


}
