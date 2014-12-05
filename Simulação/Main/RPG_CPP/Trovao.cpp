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

Trovao::Efeito(){
cout<< "Vai cry?" << endl;
}
