#include <locale>
#include <iostream>
#include <cstdlib>
#include <string>
#include <string.h>
#include <conio.h>
#include <vector>
#include <typeinfo>

#include "Trovao.h"
#include "Heroi.h"
#include "Mago.h"
#include "Guerreiro.h"
#include "Ladino.h"
#include "Item.h"
#include "monstro.h"
#include "Cidade.h"
#include "Grupo.h"

#define TAM 5

using namespace std;

/*ofstream out;
out.open("nome do arquivo.extensao do arquivo", ios::app) //
 obs : ios::app faz com o programa ignore todo o restante do arquivo e
escreva imediatamente ap�s o �ltimo dado salvo.
Por exemplo;
NUm arquivo temos
os valores.;

10 15 25 35.
se quizermos adicionar mais um valor com ios::app ficaria assim
10 15 25 35 45 55 assim por diante, sem mexer nos dados presentes no arquivo.

out<<nome<<" "<<time<<" "<<forca<<" "<<habilidade<<" \n";
out.close();

 na hora de carregar voc� faz o mesmo. assim voc� vai construindo uma tabela.
Isso � um pouco rudimentar, mas funciona.
ficaria assim.
NOME | Time | For�a | habilidade
Jao     | gremio | 25   | 15
mario   | vasco  | 15   | 35

assim por diante.*/

/*
int main(void)
{
 Servico* t = new ServicoStreaming("P", "T");

ServicoStreaming * strPtr = dynamic_cast<ServicoStreaming *>(t);
if (strPtr != 0)
{
 cout << strPtr[0];
}
*/

typedef struct {
  int c_X;
  int c_Y;
}Posicao;



void Imprimir(int [][TAM]);
int Pesquisar(int [][TAM], int);
Posicao get_Pos(int [][TAM]);
void Menu(int [][TAM],Posicao heroi_Pos, Grupo&);

int main(){

    //                     1 2 3 4 5
 int dungeon[TAM][TAM] = {{0,0,1,1,1},
                          {1,1,0,0,1},
                          {1,0,4,0,1},
                          {1,2,0,0,1},
                          {1,1,1,1,1}};
 Grupo* grupo = new Grupo;
 Heroi* hero = new Mago;
 Magia* magia = new Trovao;

 grupo->set_Heroi(hero);
 Mago* mago = dynamic_cast<Mago*> (grupo->equipe[0]);
 cout << "HET" << endl;

 if (mago != 0)
 {

 }
/*
 cout << "passou" << endl;
 //grupo->set_Heroi(hero);

 Posicao heroi_Pos;
 string opcao;
 while(1 < 10)
    cout <<"tt"<< endl;
//  Menu(dungeon, heroi_Pos, grupo);

*/
 system("pause");
 return 0;
}


void Imprimir(int dungeon [][TAM])
{
 int i, j;
 for(i = 0; i < TAM;i++){
  cout << endl;
  for(j = 0; j < TAM; j++){
   if(dungeon[i][j] == 1)
   cout << " x";
   else if(dungeon[i][j] == 2)
   cout << " C";
   else if(dungeon[i][j] == 3)
   cout << " E";
   else if(dungeon[i][j] == 4)
   cout << " L";
   else if(dungeon[i][j] == 5)
   cout << " P";
   else cout << "  " ;
 }
}
cout << endl << endl;;
}

int Pesquisar(int dungeon [][TAM], int valor){
  int flag = 0, i = 0, j = 0, cont = 0;
  for(i = 0; i < TAM;i++){
     for(j = 0; j < TAM;j++){
       if(dungeon[i][j] == valor)    {
           flag = 1;
           cont++;
          }
         }
        }

  if(flag == 0)
    return 0;
  else
    return cont;

}

Posicao get_Pos(int dungeon [][TAM]){
  Posicao aux;
  int flag = 0, i = 0, j = 0, cont = 0;
  for(i = 0; i < TAM;i++){
     for(j = 0; j < TAM;j++){
       if(dungeon[i][j] == 3 )    {
           flag = 1;
           cont  = 3;
           aux.c_X= j;
           aux.c_Y = i;
          }else if(dungeon[i][j] == 4  && cont != 3)    {
           flag = 1;
           cont  = 4;
           aux.c_X= j;
           aux.c_Y = i;
          }
         }
        }

 //cout << cont << endl;

  if(flag == 0){
   aux.c_X= 0;
   aux.c_Y = 0;
   return aux;
  }else{
    return aux;
   }
}


void Menu(int dungeon[][TAM], Posicao pos_Heroi, Grupo& grupo){

  system("cls");
  pos_Heroi = get_Pos(dungeon);
  dungeon[pos_Heroi.c_Y][pos_Heroi.c_X] = 5;
  Imprimir(dungeon);

  string opcao;
  cout << "Escolha qual posicao queres andar" <<endl;
  cout << "U - cima; D-Baixo; L-Esquerda;R-Direita" << endl;
  cout << "Q - Sair; M - Menu" << endl;
  cin >> opcao;


  if(opcao.compare("D") == 0){
   if(pos_Heroi.c_Y + 1 <TAM && dungeon[pos_Heroi.c_Y+1][pos_Heroi.c_X] != 1)
   {
    dungeon[pos_Heroi.c_Y][pos_Heroi.c_X] = 0;
    pos_Heroi.c_Y++;
   }else{
    cout << "Colisao com a parede acima" << endl;
   }
  }else if(opcao.compare("U") == 0){
   if(pos_Heroi.c_Y - 1 > 0 && dungeon[pos_Heroi.c_Y-1][pos_Heroi.c_X] != 1)
   {
    dungeon[pos_Heroi.c_Y][pos_Heroi.c_X] = 0;
    pos_Heroi.c_Y--;
   }else{
    cout << "Colisao com a parede abaixo" << endl;
   }
  }else if(opcao.compare("R") == 0){
   if(pos_Heroi.c_X + 1 < TAM && dungeon[pos_Heroi.c_Y][pos_Heroi.c_X+1] != 1)
   {
    dungeon[pos_Heroi.c_Y][pos_Heroi.c_X] = 0;
    pos_Heroi.c_X++;
   }else{
    cout << "Colisao com a parede direita" << endl;
   }
  }else if(opcao.compare("L") == 0){
   if(pos_Heroi.c_X - 1 > 0 && dungeon[pos_Heroi.c_Y][pos_Heroi.c_X-1] != 1)
   {
    dungeon[pos_Heroi.c_Y][pos_Heroi.c_X] = 0;
    pos_Heroi.c_X++;
   }else{
    cout << "Colisao com a parede esquerda" << endl;
   }
  }else if(opcao.compare("Q") == 0){
    exit(1);
  }else if(opcao.compare("M") == 0){
    grupo.Menu();
    getch();
    system("cls");
  }else{
  cout  << "Opcao invalida" << endl;
  getch();
 }
 dungeon[pos_Heroi.c_Y][pos_Heroi.c_X] = 5;
// system("cls");
 Imprimir(dungeon);
}
