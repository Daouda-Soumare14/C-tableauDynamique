#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<int> tableau(5,4); //Un tableau de 5 entiers valant tous 4
    int const taille(tableau.size());
    //Une variable qui contient la taille du tableau
    //La taille peut varier mais la valeur de cette variable ne changera pas
    //On utilise donc une constante
    //À partir d'ici, la constante 'taille' vaut donc 5
}
