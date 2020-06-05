#include <stdio.h>
#include <stdlib.h> 
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "objet.h"


void initialiser_potion(potion *pt0,potion *pt1,potion *pt2)
{



pt0->position_potion0.x=3000;
pt0->position_potion0.y=50;

pt1->position_potion1.x=3600;
pt1->position_potion1.y=400;


pt2->position_potion2.x=4150;
pt2->position_potion2.y=200;




pt0->img_pt0=IMG_Load("outils/potions/potion00.png") ;
pt1->img_pt1=IMG_Load("outils/potions/potion01.png") ;
pt2->img_pt2=IMG_Load("outils/potions/potion02.png") ;



pt0->speed=25;
pt1->speed=25;
pt2->speed=25;

}

void afficher_potion(potion pt0,potion pt1,potion pt2,SDL_Surface *ecran)
{
SDL_BlitSurface(pt0.img_pt0,NULL,ecran,&(pt0.position_potion0));
SDL_BlitSurface(pt1.img_pt1,NULL,ecran,&(pt1.position_potion1));
SDL_BlitSurface(pt2.img_pt2,NULL,ecran,&(pt2.position_potion2));

}


void scroll_potion0(int clic, potion *pt0)
{
if(clic==2)//walk droite
	{
		pt0->position_potion0.x-=pt0->speed;
	}
	else if ((clic==1)&&(pt0->position_potion0.x<250))//walk gauche
	{ 
		pt0->position_potion0.x+=pt0->speed;	
	}
}

void scroll_potion1(int clic, potion *pt1)
{
if(clic==2)//walk droite
	{
		pt1->position_potion1.x-=pt1->speed;
	}
	else if ((clic==1)&&(pt1->position_potion1.x<300))//walk gauche
	{ 
		pt1->position_potion1.x+=pt1->speed;	
	}
}

void scroll_potion2(int clic, potion *pt2)
{
if(clic==2)//walk droite
	{
		pt2->position_potion2.x-=pt2->speed;
	}
	else if ((clic==1)&&(pt2->position_potion2.x<400))//walk gauche
	{ 
		pt2->position_potion2.x+=pt2->speed;	
	}
}



/*void collision_potion(personnage *p,potion *pt)
{
    if( p->position_personnage.x + p->position_personnage.w <= pt->position_potion.x )
    {
        printf ("cond1");
    }

    if( p->position_personnage.x >= pt->position_potion.x+pt->position_potion.w)
    {
        printf ("cond2");
    }

    if( p->position_personnage.y+p->position_personnage.h <= pt->position_potion.y )
    {
        printf ("cond3");
    }
    if( p->position_personnage.y >= pt->position_potion.y+pt->position_potion.h )
    {
        printf ("cond4");
    }
}*/
