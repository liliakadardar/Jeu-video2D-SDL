#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include <string.h>
#include "enigme.h"



void initialiser_enigme(enigme *e) // initialisation enigme dynamique (pas une image 
{

e->img_enigme=IMG_Load("outils/enigme00.jpg");

e->erreur_enigme=IMG_Load("erreur.jpg"); // kif yoghlot to5rejlou tof d erreur wala msg erreur 

e->position_enigme.x=0;
e->position_enigme.y=0;

e->position_erreur.x=640;
e->position_erreur.y=360;

e->reponse=3;
e->resolu=-1;

// inititialisation avec fichier 
}


/**************AFFICHAGE Enigme ***************/
void afficher_enigme (enigme *e, SDL_Surface * ecran)
{
SDL_BlitSurface(e->img_enigme,NULL,ecran,&e->position_enigme);
}



