#include "Trovao.h"

Trovao::Trovao()
:Magia("Trovao", 35,"O mago invoca um trovao dos c�us, acertando um inimigo","Eletrico")
{


}

Trovao::~Trovao(){

}

Trovao::Trovao(const Trovao& trovao_Cpy)
:Magia(trovao_Cpy)
{


}

int Trovao::Efeito(){
cout<< "Vai cry?" << endl;
}
