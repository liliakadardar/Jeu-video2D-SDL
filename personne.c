#include <stdlib.h> 
#include <stdio.h> 
#include <SDL/SDL.h>
#include <SDL/SDL_image.h> 
#include <SDL/SDL_mixer.h> 
#include <SDL/SDL_ttf.h> 
#include<SDL/SDL_audio.h>
#include "personnage.h"


void initialiser_personnage(personnage *p)
{
	p->image_personnage=IMG_Load("ace.png");

  /* if  ( p->image_personnage ==  NULL )  { 
	         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
	         exit ( 1 ); 
	     } */

	p->position_personnage.x=500;
	p->position_personnage.y=520;
	p->position_personnage.w= p->image_personnage->w;
	p->position_personnage.h= p->image_personnage->h;
	p->nombre_vie = 5;
	p->score=100;
}



void afficher_personnage(personnage *p,SDL_Surface *ecran)
{   
SDL_SetColorKey(p->image_personnage,SDL_SRCCOLORKEY,SDL_MapRGB(p->image_personnage->format,255,255,255));
SDL_BlitSurface(p->image_personnage, NULL,ecran, &p->position_personnage);
}



