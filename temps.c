#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include <string.h>

#include "temps.h"

void initialiser_temps(temps *t)
{
 t->texte = NULL;
 t->position.x=1350;
   t->position.y=20;
     t->police = NULL;
  t->police = TTF_OpenFont("outils/avocado.ttf", 40);
    strcpy( t->entree,"");
(t->secondesEcoulees)=0;
time(&(t->t1)); 
  
 //temps du debut
}


void afficher_temps(temps *t,SDL_Surface *ecran)
{	
SDL_Color couleurBlanche= {255, 255, 255};

    	time(&(t->t2));// temps actuel

		t->secondesEcoulees = t->t2 - t->t1;

        t->min=((t->secondesEcoulees/60)%60);
	t->sec= ((t->secondesEcoulees)%60);
	 sprintf(t->entree,"%02d:%02d",t->min,t->sec);
      

        t->texte = TTF_RenderUTF8_Solid(t->police, t->entree, couleurBlanche);
        //printf("temps=%s   \n",t->entree);// sauvegarde dans le fichier 
      

SDL_BlitSurface(t->texte, NULL, ecran, &(t->position)); /* Blit du texte */
  

//SDL_Delay(80);
 
	
}

void free_temps(temps *t,SDL_Surface *ecran)
{SDL_FreeSurface(t->texte);
 TTF_CloseFont(t->police);
}
