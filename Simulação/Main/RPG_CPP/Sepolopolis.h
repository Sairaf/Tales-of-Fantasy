#ifndef SEPOLOPOLIS_G
#define SEPOLOPOLIS_G

#include <iostream>
#include <cstdlib>
#include <string>
#include "Cidade.h"

using namespace std;

class Sepolopolis: public Cidade
{
 public:
      Sepolopolis(string nome ="Sepolopolis");
      virtual ~Sepolopolis();

  void Add_NPC(const string&);
  void menu_Cidade();
  void menu_Texto_Cidade();
};

#endif
