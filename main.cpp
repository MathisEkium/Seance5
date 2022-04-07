//
//  main.cpp
//  Séance5
//
//  Created by Justine Barranger-Candas on 06/04/2022.
//

#include <iostream>
#include <vector>
using namespace std;
#include "vector_fonctions.hpp"

int main() {
    // Hola
    
    double T[5]={10,20,30,40,50};
    vector<double> vecteur5double(T,T+5);
    for (unsigned int i=0; i<vecteur5double.size(); i++) {
        cout<<vecteur5double[i]<<"\t";
    }
    cout<<endl<<endl;
    cout<<"Vecteur avec itérateur : \n";
    Afficher(vecteur5double);
    
    return 0;
}



