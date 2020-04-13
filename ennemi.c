#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "ennemi.h"


void initialiser_ennemi(ennemi *e[],int n)
{
	char entites[20];
	int i,j ; 

	
  for ( i = 0; i < n; i++)
  {
  	e[i]->position_max.x=0;
  	e[i]->position_min.x=0;
  	e[i]->frameup=0;
  	e[i]->framedown=96;
  	e[i]->frameleft=48;
  	e[i]->frameright=144;
	e[i]->position_aleatoire_max.x=0;
	e[i]->position_aleatoire_max.y=0;
	e[i]->position_aleatoire_min.x=0;
	e[i]->position_aleatoire_min.y=0;
  	e[i]->position_min.y=0;
  	e[i]->position_max.x=0;
  	e[i]->position_entite.x=0 ; 
  	e[i]->position_entite.y=0 ; 
	e[i]->pos_affichage.x=0;
	e[i]->pos_affichage.y=0;
	e[i]->affichage_ou_non=0;
        sprintf(entites,"ennemi/ennemi%d.png",i);
for (j=0;j<20;j++)
  {	
e[i]->affichage_secondaire[j]=IMG_Load(entites);
   }
}}

void afficher_ennemi(ennemi *e[], SDL_Surface *ecran)
{
int i=0,j=0;
	SDL_BlitSurface(e[i]->affichage_secondaire[j],NULL,ecran ,&e[i]->position_entite);
} 


void perfect_pixel(ennemi e[])
{




}
void deplacement_ennemi_alea(ennemi e [])
{





  
}