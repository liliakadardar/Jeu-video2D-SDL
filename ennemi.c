#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "ennemi.h"

/***********-------------- ENNEMI 1------------------**************/


void initialiser_ennemi1(ennemi *en1)
{
en1->position_entite.x=2500;
en1->position_entite.y=200;
en1->position_entite.w=448;
en1->position_entite.h=373;
en1->direction=0;
	char entites[20];
	int i;
  for ( i = 0; i < 20; i++)
  {
      sprintf(entites,"ennemi/en1/%d.png",i);
    en1->affichage_secondaire[i]=IMG_Load(entites);
  }
en1->Frame=0;
en1->speed=25;
}

void afficher_ennemi1(ennemi en1, SDL_Surface *ecran)
{

  SDL_BlitSurface(en1.affichage_secondaire[en1.Frame],NULL,ecran ,&(en1.position_entite));
} 


/*-- animation gauche/droite -- */

void animation_droite (ennemi *en1)
{
	if(en1->Frame<=0 || en1->Frame>=4)
	{
	//printf("hello!");
	en1->Frame=1;
	}
	en1->Frame++;
	}

/*--SCROLL--*/
void scroll_ennemi(int clic, ennemi *en1)
{


if(clic==2)//walk droite
	{
		
		en1->position_entite.x-=en1->speed;
		
	}
	else if ((clic==1)&&(en1->position_entite.x<2500))//walk gauche
	{ 
		en1->position_entite.x+=en1->speed;
		
	}
	/*else if(clic==5)//run droite
	{ 
		bg->scroll.x+=bg->speed;
		bg->position_bg.x+=bg->speed;
		
		if(bg->scroll.x<=0)
			bg->scroll.x=0;
		if(bg->scroll.x>=5000-600)
			bg->scroll.x=5000-600;
		
	}
	else if(clic==6)//run gauche
	{ 
			bg->position_bg.x-=bg->speed;
		bg->scroll.x-=bg->speed;
		if(bg->scroll.x<=0)
			bg->scroll.x=0;
		if(bg->scroll.x>=5000-600)
			bg->scroll.x=5000-600;
		
	}*/



}
/***********-------------- ENNEMI 2 ------------------**************/


void initialiser_ennemi2(ennemi *en2)
{
en2->position_entite.x=3325;
en2->position_entite.y=50;
  char entites[20];
  int i;
  for ( i = 0; i < 20; i++)
  {
      sprintf(entites,"ennemi/en2/%d.png",i);
    en2->affichage_secondaire[i]=IMG_Load(entites);
  }
en2->Frame=0;en2->speed=25;
}

void afficher_ennemi2(ennemi en2, SDL_Surface *ecran)
{
	SDL_BlitSurface(en2.affichage_secondaire[en2.Frame],NULL,ecran ,&(en2.position_entite));
} 


/*-- animation gauche/droite -- */

void animation_droite2(ennemi *en2)
{
	if(en2->Frame<=0 || en2->Frame>=9)
	{
	//printf("hello!");
	en2->Frame=1;
	}
	en2->Frame++;

	}

/*-- SCROLL --*/
void scroll_ennemi2(int clic, ennemi *en2)
{
  if(clic==2)//walk droite
	{
		
		en2->position_entite.x-=en2->speed;
		
	}
	else if ((clic==1)&&(en2->position_entite.x<3325))//walk gauche
	{ 
		en2->position_entite.x+=en2->speed;
		
	}

}




/*
void animation_up_down (ennemi *en1)
{

  if (en1->direction==0)
  {
	if(en1->Frame<=11 || en1->Frame>=21)
		en1->Frame=12;

	en1->Frame++;
  }
else if (en1->direction==1)
  {

if(en1->Frame<=22 || en1->Frame>=30)
  en1->Frame=23;
en1->Frame++;
  }

}*/

void sol( ennemi *en1)
{


    if (en1->position_entite.y>230.0f)
    {
        en1->position_entite.y = 230.0f;
        if (en1->vy>0)
            en1->vy = 0.30f;
       en1->status = en1->STAT_SOL;
    }

}

