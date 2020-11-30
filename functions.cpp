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
#include <cmath>           //sin, cos, tan

#include "functions.h"

using namespace std;
#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(), '\n')