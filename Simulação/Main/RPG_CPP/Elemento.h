#ifndef ELEMENTO_H
#define ELEMENTO_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

using namespace std;

class Elemento
{
 friend ostream& operator<<(ostream&, const Elemento&);
protected:
	string nome_Elemento;

public:
	Elemento(string nome = "Elemento");
//	Elemento(const string& );
	Elemento(const Elemento&);
	~Elemento();

    void setNome_Elemento(const string&);
    string getNome_Elemento() const;


    Elemento* operator=(const Elemento&);
    virtual void Add_Efeito() = 0;
};


#endif
