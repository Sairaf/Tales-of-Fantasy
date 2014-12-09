#ifndef CIDADE_H
#define CIDADE_H

#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include <vector>
#include <string.h>
#include "Grupo.h"

using namespace std;

class Cidade
{
 friend ostream& operator<<(ostream&, const Cidade&);
 protected:
    string nome;
    vector <string> npc;
 public:
  Cidade(string nome = "Cidade");
  virtual ~Cidade();
  Cidade(const Cidade&);

  void   setNome(const string&);
  string getNome() const;

  void Add_NPC(const string&);
  virtual void Menu_Cidade(Grupo&) = 0;
  virtual void Menu_Texto_Cidade() = 0;
};
#endif // CIDADE_H
