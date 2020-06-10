#include <stdio.h>
#include <stdlib.h>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "SDL/SDL_ttf.h"

void fin_jeu(vie v, temps *t, int nb_potion,personnage *p, SDL_Surface *ecran, int etat )
{



/****----Condition si personnage a perdu la partie-----*****/
SDL_Surface *fail=NULL ; SDL_Rect pos; 
pos.x=400;
pos.y=100;

if  ((t->sec>=58) || (t->min>=1)) //((v.val==-1) &&
{

printf("perdu");
fail=IMG_Load("outils/fail.png");
SDL_BlitSurface(fail,NULL,ecran,&pos);
animation_fail_right(p);
//SDL_Delay(20);
etat=0;
SDL_Delay(1000);
}

/****----Condition si personnage a gagné la partie-----*****/

else if ((t->min<=1) && ((nb_potion==10)||(nb_potion==8)))
{
printf("\n gagnant");
animation_fail_left (p);
etat=1;
SDL_Delay(1000);

// musique 
}
}
