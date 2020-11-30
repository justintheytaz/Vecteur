/*
  ---------------------------------------------------------------------------
  Fichier       : main.cpp
  Nom du labo   : 05 Vecteur
  Auteur(s)     : Monthoux Alexis, Theytaz Justin
  Date création : 30.11.2020
  But           : Librairie mettant à disposition des outils de manipulation
                  pour les vecteurs et de matrices entiers

  Remarque(s)   : -

  Compilateur   : Mingw-w64 g++ 8.1.0
  ---------------------------------------------------------------------------
*/

#include <iostream>
#include <cstdlib>
#include <cmath>
#include "functions.h"

using namespace std;

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(), '\n')

void calculerSommeDiagDG(const Matrice m);
void calculerSommeDiagGD(const Matrice m);

int main() {

   Matrice m1 = {{6,5,4},{1,2,3},{8,7,9}};
   calculerSommeDiagDG(m1);
   calculerSommeDiagGD(m1);

   // ------------------------------------------------------------------------
   // Fin programme
   cout << "Presser ENTER pour quitter";
   VIDER_BUFFER;

   return EXIT_SUCCESS;
}

void calculerSommeDiagDG(const Matrice m){
   int somme;
   if (sommeDiagDG(m, somme)){
      cout << "La somme de la diagonale gauche de la matrice est : " << somme << endl;
   } else{
      cout << "La matrice n'est pas carree !" << endl;
   }
}

void calculerSommeDiagGD(const Matrice m){
   int somme;
   if (sommeDiagGD(m, somme)){
      cout << "La somme de la diagonale droite de la matrice est : " << somme << endl;
   } else{
      cout << "La matrice n'est pas carree !" << endl;
   }
}