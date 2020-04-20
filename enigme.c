#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include <string.h>
#include "enigme.h"



void initialiser_enigme(enigme *e1) // initialisation enigme dynamique (pas une image 
{

e1->img_enigme=IMG_Load("outils/molecule.jpg");

//e->erreur_enigme=IMG_Load("erreur.jpg"); // kif yoghlot to5rejlou tof d erreur wala msg erreur
// position de l'enigme sur l ecran 
//e->position_enigme.x=0;
//e->position_enigme.y=0;

e1->position_enigme.w=1200;
e1->position_enigme.h=500;

//position sortie de l'erreur
e1->position_erreur.x=640;
e1->position_erreur.y=360;


e1->reponse=3;
e1->resolu=-1;

// inititialisation avec fichier 
}


/**************AFFICHAGE Enigme ***************/
void afficher_enigme (enigme e1, SDL_Surface * ecran)
{
SDL_BlitSurface(e1.img_enigme,NULL,ecran,&e1.position_enigme);
}


int resolution_enigme(enigme *e1)

{



}
 void enigme_aleatoire(enigme *e1)
 {





 }
