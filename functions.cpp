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
#include <cstdlib>         //srand()
#include <ctime>           //time()
#include <algorithm>
#include <vector>
#include "functions.h"

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(), '\n')

using namespace std;

using Vecteur = vector<int>;
using Matrice = vector<Vecteur>;

Matrice shuffleMatrice(const Matrice& m1, const Matrice& m2){

   srand(unsigned(time(nullptr)));

   // Création d'une nouvelle matrice et copie du contenu des 2 matrices dans celle-ci.
   Matrice m(m1.size() + m2.size());
   copy(m2.begin(), m2.end(), copy(m1.begin(), m1.end(), m.begin()));

   // On mélange la matrice puis on retourne le résultat.
   random_shuffle(m.begin(), m.end());
   return m;
}

void sortMatrice(Matrice& m){
   sort(m.begin(), m.end());
}

int nbLignes(const Matrice& m){
   return m.size();
}

int nbColonnes(const Matrice& m){
   return m.size() > 0 ? m.front().size() : 0;
}

bool estCarree(const Matrice& m){
   const int NB_LIGNES     = nbLignes(m);
   const int NB_COLONNES   = nbColonnes(m);

   return NB_COLONNES > 0 && NB_LIGNES == NB_COLONNES;
}

bool sommeDiag(const Matrice& m, int& somme, bool directionDroite){
   const int NB_LIGNES = nbLignes(m);

   if (estCarree(m)){
      somme = 0;
      // Si la direction est vers la droite, on commence à 0. Sinon, on commence à la fin.
      int colonne = (directionDroite) ? 0 : m.front().size() - 1;
      for (int ligne = 0; ligne < NB_LIGNES; ++ligne){
         somme += m.at(ligne).at(colonne);

         // Si la direction est vers la droite, on incrémente, sinon on décrémente.
         colonne += (directionDroite) ? 1 : -1;
      }
      return true;
   }
   else{
      return false;
   }
}

bool sommeDiagDG(const Matrice& m, int& somme){
   // Direction -1 pour aller de droite à gauche.
   return sommeDiag(m, somme, false);
}

bool sommeDiagGD(const Matrice& m, int& somme){
   // Direction 1 pour aller de gauche à droite.
   return sommeDiag(m, somme, true);
}
