#include "Trovao.h"

Trovao::Trovao()
:Magia("Trovao", 35,"O mago invoca um trovao dos céus, acertando um inimigo","Eletrico")
{


}

Trovao::~Trovao(){

}

Trovao::Trovao(const Trovao& trovao_Cpy)
:Magia(trovao_Cpy)
{


}

int Trovao::Efeito(Mago& mago){
  return mago.get_Mag_Heroi()*2;
}

ostream& operator<<(ostream& output, const Trovao& trovao)
{
 output << static_cast <const Magia&> (trovao) << endl;
 return output;
}

Trovao* Trovao::operator+=(const Trovao& trovao)
{
 Magia::operator+=(trovao);
 return this;
}
