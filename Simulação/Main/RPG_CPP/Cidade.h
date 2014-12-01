#ifndef CIDADE_H
#define CIDADE_H

#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include <vector>
#include <string.h>

using namespace std;

class Cidade
{
 protected:
    string nome;
    vector <string> npc;
 public:
  Cidade(string nome = "Cidade");
  virtual ~Cidade();
  Cidade(const Cidade&);

  virtual void Add_NPC(const string&) = 0;
  string getNome() const;
  virtual void menu_Cidade() = 0;
  virtual void menu_Texto_Cidade() = 0;
};
#endif // CIDADE_H
