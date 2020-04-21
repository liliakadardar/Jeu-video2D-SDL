#include <stdio.h>
#include <stdlib.h> 
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "background.h"


void initialiser_background(background *bg)
{
SDL_Surface *img_bg=NULL;
//position bg
bg->position_bg.x=1920;
bg->position_bg.y=1080;

//position bg colision 
bg->position_collision.x=1920;
bg->position_collision.y=1080;

// scrolling 
bg->scroll.x=0;
bg->scroll.y=0;
bg->scroll.w=1920;
bg->scroll.h=1080;

bg->speed=20;

bg->img_bg=IMG_Load("outils/bg_final.jpg");

// ajout d'un son continue avec la bg 


}

void afficher_background(background bg, SDL_Surface *ecran)
{

SDL_BlitSurface(bg.img_bg,&(bg.scroll),ecran,NULL);

}

void scrolling_bg(int clic,background *bg)
{
	if(clic==2)//droite
	{ 
		bg->scroll.x+=bg->speed;
		bg->position_bg.x+=bg->speed;
		
		if(bg->scroll.x<=0)
			bg->scroll.x=0;
		if(bg->scroll.x>=8000-800)
			bg->scroll.x=8000-800;
	}
	else if(clic==1)//gauche
	{ 
		bg->position_bg.x-=bg->speed;
		bg->scroll.x-=bg->speed;
		if(bg->scroll.x<=0)
			bg->scroll.x=0;
		if(bg->scroll.x>=8000-800)
			bg->scroll.x=8000-800;
		
	}
}

