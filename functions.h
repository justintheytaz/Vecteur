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

//Protection contre le double include
#ifndef LIBRAIRIE_FUNCTIONS_H
#define LIBRAIRIE_FUNCTIONS_H

#include <vector>

using Vecteur = std::vector<int>;
using Matrice = std::vector<Vecteur>;

Matrice shuffleMatrice(const Matrice m1, const Matrice m2);
void sortMatrice(Matrice& m);
int nbLignes(const Matrice m);
int nbColonnes(const Matrice m);
bool estCarree(const Matrice m);
bool sommeDiag(const Matrice m, int& somme, bool directionDroite);
bool sommeDiagDG(const Matrice m, int& somme);
bool sommeDiagGD(const Matrice m, int& somme);

#endif //LIBRAIRIE_FUNCTIONS_H