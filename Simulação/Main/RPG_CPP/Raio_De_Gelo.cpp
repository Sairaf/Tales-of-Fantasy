#include "Raio_De_Gelo.cpp"

Raio_De_Gelo::Raio_De_Gelo(string nome, int poder)
:Magia("Raio de Gelo",25, "Raio de gelo fraco em um inimigo", Gelo);


Raio_De_Gelo::Raio_De_Gelo(const string& nome, const int& poder_Magia, const string& descricao, const Elemento& elemento)
:Magia(nome, poder_Magia, descricao, elemento)

Raio_De_Gelo::~Raio_De_Gelo()
{

}

void Raio_De_Gelo::Add_Poder(const int& bonus){
 int aux = this->get_Poder_Magia();
 aux+=bonus;
 this->set_Poder_Magia(aux);
}
