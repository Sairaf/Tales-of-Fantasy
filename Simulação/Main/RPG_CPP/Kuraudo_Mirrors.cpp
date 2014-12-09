#include "Kuraudo_Mirrors.h"

Kuraudo_Mirrors::Kuraudo_Mirrors()
:Item("Kuraudo's Mirror","Espelho com propriedades magicas", 20, false)
{


}
Kuraudo_Mirrors::~Kuraudo_Mirrors(){}


void Kuraudo_Mirrors::Efeito(){
    cout << "...Nada aconteceu";
}

ostream operator<<(ostream& output, const Kuraudo_Mirrors& mirror)
{
 output << static_item <const Item&> (mirror) << endl;
 return output;
}

Kuraudo_Mirrors operator+=(const Kuraudo_Mirrors& mirror)
{
 Item::operator+=(mirror);
 return this;
}
