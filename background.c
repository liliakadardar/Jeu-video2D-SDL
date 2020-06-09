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
bg->position_bg.x=0;
bg->position_bg.y=0;
//bg->position_bg.w = bg->img_bg->w;
//bg->position_bg.h = bg->img_bg->h;

//position bg colision 
//bg->position_collision.x=1920;
//bg->position_collision.y=1080;

// scrolling 
bg->scroll.x=0;
bg->scroll.y=0;
bg->scroll.w=6500;
bg->scroll.h=600;

bg->speed=35;

bg->img_bg=IMG_Load("outils/bg_final.jpg");

// ajout d'un son continue avec la bg 
}

void afficher_background(background bg, SDL_Surface *ecran)
{
SDL_BlitSurface(bg.img_bg,&(bg.scroll),ecran,NULL);
}

void scrolling_bg(int clic,background *bg)
{
	if(clic==2)//walk droite
	{
		bg->scroll.x+=bg->speed;
		bg->position_bg.x+=bg->speed;
		
		if(bg->scroll.x<=0)
			bg->scroll.x=0;
		if(bg->scroll.x>=5000-600)
			bg->scroll.x=5000-600;
	}
	else if(clic==1)//walk gauche
	{ 
		bg->position_bg.x-=bg->speed;
		bg->scroll.x-=bg->speed;

		if(bg->scroll.x<=0)
			bg->scroll.x=0;
		if(bg->scroll.x>=5000-600)
			bg->scroll.x=5000-600;
		
	}
	else if(clic==5)//run droite
	{ 
		bg->scroll.x+=bg->speed+2;
		bg->position_bg.x+=bg->speed+2;
		
		if(bg->scroll.x<=0)
			bg->scroll.x=0;
		if(bg->scroll.x>=5000-600)
			bg->scroll.x=5000-600;
		
	}
	else if(clic==6)//run gauche
	{ 
		bg->position_bg.x-=bg->speed+2;
		bg->scroll.x-=bg->speed+2;

		if(bg->scroll.x<=0)
			bg->scroll.x=0;
		if(bg->scroll.x>=5000-600)
			bg->scroll.x=5000-600;
		
	}else if(clic==7)//slide
	{ 
		bg->position_bg.x+=bg->speed;
		bg->scroll.x+=bg->speed;

		if(bg->scroll.x<=0)
			bg->scroll.x=0;
		if(bg->scroll.x>=5000-600)
			bg->scroll.x=5000-600;
		
	}

	else if(clic==8)//attack droite
	{ 
		bg->position_bg.x+=bg->speed;
		bg->scroll.x+=bg->speed;

		if(bg->scroll.x<=0)
			bg->scroll.x=0;
		if(bg->scroll.x>=5000-600)
			bg->scroll.x=5000-600;
		
	}
	else if(clic==9)//attack gauche
	{ 
		bg->position_bg.x-=bg->speed;
		bg->scroll.x-=bg->speed;

		if(bg->scroll.x<=0)
			bg->scroll.x=0;
		if(bg->scroll.x>=5000-600)
			bg->scroll.x=5000-600;
		
	}
	else if(clic==3)//saut 
	{ 
		bg->position_bg.x+=bg->speed;
		bg->scroll.x+=bg->speed;

		if(bg->scroll.x<=0)
			bg->scroll.x=0;
		if(bg->scroll.x>=5000-600)
			bg->scroll.x=5000-600;
		
	}
}

