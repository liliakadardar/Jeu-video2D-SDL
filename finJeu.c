#include <stdio.h>
#include <stdlib.h>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "SDL/SDL_ttf.h"
//#include "temps.h"
//#include "vie.h"
void fin_jeu(vie v, temps *t, int nb_potion,personnage *p, SDL_Surface *ecran, int etat )
{

/****----Condition si personnage a perdu la partie-----*****/
SDL_Surface *fail=NULL ; SDL_Rect pos; 
pos.x=400;
pos.y=20;

if  (((t->sec>=58) || (t->min>=1))&&(nb_potion<=7) )//((v.val==-1) && 
{
printf("----perdu----\n");
animation_fail_right(p);
fail=IMG_Load("outils/loser.PNG");
SDL_BlitSurface(fail,NULL,ecran,&pos);
SDL_Delay(80);
etat=0;
SDL_Delay(600);
}

/****----Condition si personnage a gagné la partie-----*****/
SDL_Surface *win=NULL ; SDL_Rect pos_win; 
pos_win.x=550;
pos_win.y=15;

if ((t->min<=1) && ((nb_potion==10)||(nb_potion==8))) 
{
printf("----gagnant----\n");
animation_fail_left (p);
win=IMG_Load("outils/winner.PNG");
SDL_BlitSurface(win,NULL,ecran,&pos_win);
SDL_Delay(80);
etat=1;
SDL_Delay(1000);

// musique 
}
}
