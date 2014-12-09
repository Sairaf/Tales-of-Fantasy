#ifndef CAVERNA_MONSTRO_H
#define CAVERNA_MONSTRO_H

#include <iostream>
#include <vector>
#include <string>
#include "Dungeon.h"
#include "Kuraudo.h"
#include "Camtasia.h"
#include "Monstro.h"

using namespace std;

class Caverna_Monstro : public Dungeon
{
 public:
    Caverna_Monstro();
    Caverna_Monstro(const Caverna_Monstro&);
    ~Caverna_Monstro();
    friend ostream& operator<<(ostream&, const Caverna_Monstro&);
    void Salas(Grupo& grupo);
    void Mostrar_Salas(const int&);

};

#endif // DUNGEON_H



