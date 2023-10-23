#include <iostream>
#include <vector> //Ne pas oublier !
#include <string>
using namespace std;

int main()
{
    vector<int> tableau(5);

    vector<int> tableau(5, 3);  //Crée un tableau de 5 entiers valant tous 3
    vector<string> listeNoms(12, "Sans nom"); //Crée un tableau de 12 strings valant toutes « Sans nom »
    vector<double> tableau; //Crée un tableau de 0 nombre à virgule

   return 0;
}