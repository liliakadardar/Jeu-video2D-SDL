#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "ennemi.h"


void initialiser_ennemi1(ennemi *en1)
{
en1->position_entite.x=600;
en1->position_entite.y=80;

	char entites[20];
	int i;
  for ( i = 0; i < 20; i++)
  {
      sprintf(entites,"outils/en1/%d.png",i);
    en1->affichage_secondaire[i]=IMG_Load(entites);
  }
en1->Frame=0;

}

void afficher_ennemi1(ennemi en1, SDL_Surface *ecran)
{

  SDL_BlitSurface(en1.affichage_secondaire[en1.Frame],NULL,ecran ,&(en1.position_entite));
} 


void initialiser_ennemi2(ennemi *en2)
{
en2->position_entite.x=200;
en2->position_entite.y=130;
  char entites[20];
  int i;
  for ( i = 0; i < 20; i++)
  {
      sprintf(entites,"outils/en2/%d.png",i);
    en2->affichage_secondaire[i]=IMG_Load(entites);
  }
en2->Frame=0;
}

void afficher_ennemi2(ennemi en2, SDL_Surface *ecran)
{
	SDL_BlitSurface(en2.affichage_secondaire[en2.Frame],NULL,ecran ,&(en2.position_entite));
} 

