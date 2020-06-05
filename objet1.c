#include <stdio.h>
#include <stdlib.h> 
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "objet1.h"


void initialiser_potion1(potion1 *pt4,potion1 *pt5,potion1 *pt6,potion1 *pt7)
{



pt4->position_potion4.x=1195;
pt4->position_potion4.y=280;


pt5->position_potion5.x=1700;
pt5->position_potion5.y=250;


pt6->position_potion6.x=3400;
pt6->position_potion6.y=400;


pt7->position_potion7.x=5080;
pt7->position_potion7.y=25;


pt4->img_pt4=IMG_Load("outils/potions/potion04.png") ;
pt5->img_pt5=IMG_Load("outils/potions/potion05.png") ;
pt6->img_pt6=IMG_Load("outils/potions/potion06.png") ;
pt7->img_pt7=IMG_Load("outils/potions/potion07.png") ;


pt4->speed=25;
pt5->speed=25;
pt6->speed=25;
pt7->speed=25;

}

void afficher_potion1(potion1 pt4,potion1 pt5,potion1 pt6,potion1 pt7,SDL_Surface *ecran)
{

SDL_BlitSurface(pt4.img_pt4,NULL,ecran,&(pt4.position_potion4));
SDL_BlitSurface(pt5.img_pt5,NULL,ecran,&(pt5.position_potion5));
SDL_BlitSurface(pt6.img_pt6,NULL,ecran,&(pt6.position_potion6));
SDL_BlitSurface(pt7.img_pt7,NULL,ecran,&(pt7.position_potion7));

}



void scroll_potion4(int clic, potion1 *pt4)
{
if(clic==2)//walk droite
	{
		pt4->position_potion4.x-=pt4->speed;
	}
	else if ((clic==1)&&(pt4->position_potion4.x<600))//walk gauche
	{ 
		pt4->position_potion4.x+=pt4->speed;	
	}
}

void scroll_potion5(int clic, potion1 *pt5)
{
if(clic==2)//walk droite
	{
		pt5->position_potion5.x-=pt5->speed;
	}
	else if ((clic==1)&&(pt5->position_potion5.x<700))//walk gauche
	{ 
		pt5->position_potion5.x+=pt5->speed;	
	}
}

void scroll_potion6(int clic, potion1 *pt6)
{
if(clic==2)//walk droite
	{
		pt6->position_potion6.x-=pt6->speed;
	}
	else if ((clic==1)&&(pt6->position_potion6.x<800))//walk gauche
	{ 
		pt6->position_potion6.x+=pt6->speed;	
	}
}

void scroll_potion7(int clic, potion1 *pt7)
{
if(clic==2)//walk droite
	{
		pt7->position_potion7.x-=pt7->speed;
	}
	else if ((clic==1)&&(pt7->position_potion7.x<900))//walk gauche
	{ 
		pt7->position_potion7.x+=pt7->speed;	
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
