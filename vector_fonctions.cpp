//
//  vector_fonctions.cpp
//  Séance5
//
//  Created by Justine Barranger-Candas on 06/04/2022.
//

#include <iostream>
#include <vector>
using namespace std;
#include "vector_fonctions.hpp"

void Afficher(vector<double> vecteur){
    vector<double>::iterator it=vecteur.begin();
    for ( it=vecteur.begin(); it!=vecteur.end(); it++)
        cout << *it << "\t";
    cout << endl;
}
