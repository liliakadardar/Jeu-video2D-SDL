#ifndef FONCTIONS_H_
#define FONCTIONS_H_
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>




typedef struct enigme
{
SDL_Surface *img_enigme;
SDL_Rect position_enigme;
SDL_Rect position_Bg;

SDL_Surface *erreur_enigme;
SDL_Rect position_erreur;

int resolu;//0 si pas encore resolu //1 si c resolu
int reponse; //1 pour a, 2 pour b , 3 pour c

SDL_Surface *tEnigme[10];
SDL_Rect position_tEnigme;
}enigme;

/***********************************les fonctions***********************************/

// init enigme 
void initialiser_enigme(enigme *e1);
void affichage_enigme(enigme e1, SDL_Surface *ecran);
int resolution_enigme(enigme *e1);
void enigme_aleatoire(enigme *e1);



/*
//gestion de temps dans l'enigme 

void initialiser_tEnigme(enigme *e);
void afficher_tEnigme(enigme *e);*/









#endif /* ENIGME_H_ */
