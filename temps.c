#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include <string.h>
#include <time.h>
#include "temps.h"

void initialiser_temps(temps *t)
{
SDL_Surface *texte = NULL;
 t->position.x=0;
   t->position.y=0;
    TTF_Font *police = NULL;
  t->police = TTF_OpenFont("avocado.ttf", 40);
    char entree[100]="";
(t->secondesEcoulees)=0;
time(&t->t1);
  
 //temps du debut
}


void afficher_temps(temps *t,SDL_Surface *ecran)
{	
SDL_Color couleurBlanche= {255, 255, 255};

    	time(&t->t2);// temps actuel

		t->secondesEcoulees = t->t2 - t->t1;
       
	 sprintf(t->entree,"%02d:%02d",(t->secondesEcoulees/60)%60, (t->secondesEcoulees)%60);
 
        t->texte = TTF_RenderUTF8_Solid(t->police, t->entree, couleurBlanche);
        t->position.x = 320;
        t->position.y = 370;

SDL_BlitSurface(t->texte, NULL, ecran, &(t->position)); /* Blit du texte */
  SDL_Flip(ecran);
SDL_Delay(80);
 SDL_FreeSurface(t->texte);
	
}

void free_temps(temps *t,SDL_Surface *ecran)
{
 TTF_CloseFont(t->police);
}
