#include <stdio.h>
#include <stdlib.h> 
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "objet2.h"



void initialiser_potion2(potion2 *pt3,potion2 *pt8,potion2 *pt9)
{

pt3->position_potion3.x=2250;
pt3->position_potion3.y=150;


pt8->position_potion8.x=4780;
pt8->position_potion8.y=220;


pt9->position_potion9.x=5580;
pt9->position_potion9.y=250;


pt3->img_pt3=IMG_Load("outils/potions/potion03.png") ;
pt8->img_pt8=IMG_Load("outils/potions/potion08.png") ;
pt9->img_pt9=IMG_Load("outils/potions/potion09.png") ;

pt3->speed=25;
pt8->speed=25;
pt9->speed=25;

}

void afficher_potion2(potion2 pt3,potion2 pt8,potion2 pt9,SDL_Surface *ecran)
{
SDL_BlitSurface(pt3.img_pt3,NULL,ecran,&(pt3.position_potion3));
SDL_BlitSurface(pt8.img_pt8,NULL,ecran,&(pt8.position_potion8));
SDL_BlitSurface(pt9.img_pt9,NULL,ecran,&(pt9.position_potion9));
}




void scroll_potion3(int clic, potion2 *pt3)
{
if(clic==2)//walk droite
	{
		pt3->position_potion3.x-=pt3->speed;
	}
	else if ((clic==1)&&(pt3->position_potion3.x<500))//walk gauche
	{ 
		pt3->position_potion3.x+=pt3->speed;	
	}
}


void scroll_potion8(int clic, potion2 *pt8)
{
if(clic==2)//walk droite
	{
		pt8->position_potion8.x-=pt8->speed;
	}
	else if ((clic==1)&&(pt8->position_potion8.x<1000))//walk gauche
	{ 
		pt8->position_potion8.x+=pt8->speed;	
	}
}

void scroll_potion9(int clic, potion2 *pt9)
{
if(clic==2)//walk droite
	{
		pt9->position_potion9.x-=pt9->speed;
	}
	else if ((clic==1)&&(pt9->position_potion9.x<1100))//walk gauche
	{ 
		pt9->position_potion9.x+=pt9->speed;	
	}
}
