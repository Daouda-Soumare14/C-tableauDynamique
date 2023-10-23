#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<int> tableau(3,2); //Un tableau de 3 entiers valant tous 2
    tableau.push_back(8);  //On ajoute une 4ème case qui contient la valeur 8
    tableau.push_back(7);  //On ajoute une 5ème case qui contient la valeur 7
    tableau.push_back(14); //Et encore une avec le nombre 14 cette fois

    for(int i(0); i < tableau.size(); i++)
    {
        cout <<tableau[i] <<endl;
    }

    cout <<"----------------------------"<<endl;
    // supprimer la derniere case du tableau
    tableau.pop_back(); //Et hop ! Plus que 2 cases
    tableau.pop_back(); //Et hop ! Plus que 1 case  

    for(int i(0); i < tableau.size(); i++)
    {
        cout <<tableau[i] <<endl;
    }

}


