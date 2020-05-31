#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "obstacle.h"

void initialiser_obstacle1(obstacle * o1)
{

// implemetation des images du obstacle dans un tableau sans une boucle 
//o1->image_obs1[0]=IMG_Load("outils/o1.png") ;
o1->image_obs1[1]=IMG_Load("outils/obs1.png") ;
o1->image_obs1[2]=IMG_Load("outils/obs03_2.png") ;
o1->image_obs1[3]=IMG_Load("outils/obs03_3.png") ;
o1->image_obs1[4]=IMG_Load("outils/obs03_4.png") ;
o1->image_obs1[5]=IMG_Load("outils/obs03_5.png") ;
o1->image_obs1[6]=IMG_Load("outils/obs03_6.png") ;
o1->speed=25;
// positions

   o1->position_obs1.x=1940;
   o1->position_obs1.y=0;
/*
   o1->position_obs1.w=0.563;
   o1->position_obs1.h=0.710;*/


}


void afficher_obstacle1(obstacle o1, SDL_Surface *ecran)
{

    SDL_BlitSurface(o1.image_obs1[1],NULL,ecran,&(o1.position_obs1));
}


/*--SCROLL--*/
void scroll_obstacle(int clic, obstacle *o1)
{
if(clic==2)//walk droite
	{
		
		o1->position_obs1.x-=o1->speed;
		
	}
	else if ((clic==1)&&(o1->position_obs1.x<100))//walk gauche
	{ 
		o1->position_obs1.x+=o1->speed;
		
	}
}





/*---- obstacle 2-----*/
  void initialiser_obstacle2(obstacle *o2)
{    
  // implemetation des images du obstacle dans un tableau sans une boucle 
   
   	o2->image_obs21=IMG_Load("outils/obs21.png") ;
	o2->image_obs22=IMG_Load("outils/obs21.png") ;
 // positions
   o2->position_obs21.x=5430;//5500
   o2->position_obs21.y=350;
   
o2->position_obs22.x=5450;
   o2->position_obs22.y=400;
/*
   o2->position_obs2.w=0.677;
   o2->position_obs2.h=1.213;*/o2->speed=25;
}
void afficher_obstacle2(obstacle o2, SDL_Surface *ecran)
{  
    SDL_BlitSurface(o2.image_obs21,NULL,ecran,&(o2.position_obs21));

   
}
/*--SCROLL--*/
void scroll_obstacle2(int clic, obstacle *o2)
{
if(clic==2)//walk droite
	{
		
		o2->position_obs21.x-=o2->speed;

		
	}
	else if ((clic==1)&&(o2->position_obs21.x<5430))//walk gauche
	{ 
		o2->position_obs21.x+=o2->speed;
		
		
	}
}



/*---- obstacle 3-----*/

  void initialiser_obstacle3(obstacle * o3)
{    
   SDL_Surface *image_obs3=NULL;


   o3->image_obs3=IMG_Load("outils/obs3.png");

   o3->position_obs3.x=5430;
   o3->position_obs3.y=0;
o3->speed=25;
/*
   o3->position_trap.w=0.677;
   o3->position_trap.h=0.290;*/

}



void afficher_obstacle3(obstacle o3, SDL_Surface *ecran)
{    
     SDL_BlitSurface(o3.image_obs3,NULL,ecran,&(o3.position_obs3));
}


/*--SCROLL--*/
void scroll_obstacle3(int clic, obstacle *o3)
{
if(clic==2)//walk droite
	{
		
		o3->position_obs3.x-=o3->speed;

		
	}
	else if ((clic==1)&&(o3->position_obs3.x<2240))//walk gauche
	{ 
		o3->position_obs3.x+=o3->speed;
		
		
	}
}

/*

int collision_obstacle1(obstacle *o1)
{


    if( personnage.x+personnage.w <= o1->position_obs1.x )
    {
        return 0; // il y a une collision 
    }

    if( personnage.x>=o1->position_obs1.x+o1->position_obs1.w )
    {
        return 0;
    }

    if( personnage.y+personnage.h <= o1->position_obs1.y )
    {
        return 0;
    }

    if( personnage.y >= o1->position_obs1.y+o1->position_obs1.h )
    {
        return 0;
    }

   
    return 1;
}


int collision_enemie(SDL_Rect personnage, SDL_Rect enemie *en)
{


    if( personnage.x+personnage.w <= en->postion_enemie.x )
    {
        return 0;
    }

    if( personnage.x >= en->postion_enemie.x+en->postion_enemie.w )
    {
        return 0;
    }

    if( personnage.y+personnage.h <= en->postion_enemie.y )
    {
        return 0;
    }

    if( personnage.y>= en->postion_enemie.y+en->postion_enemie.h )
    {
        return 0;
    }

   
    return 1;
}


int collision_obstacle(SDL_Rect personnage, SDL_Rect obstacle *o2)
{


    if( personnage.x+personnage.w <= o2->position_obs2.x )
    {
        return 0;
    }

    if( personnage.x >=o2->position_obs2.x+o2->position_obs2.w )
    {
        return 0;
    }

    if( personnage.y+personnage.h <= o2->position_obs2.y )
    {
        return 0;
    }

    if( personnage.y >= o2->position_obs2.y+o2->position_obs2.h )
    {
        return 0;
    }

   
    return 1;
}
int collision_obstacle(SDL_Rect personnage, SDL_Rect obstacle *o3)
{


    if( personnage.x+personnage.w <= o3->position_obs3.x )
    {
        return 0;
    }

    if( personnage.y >=o3->position_obs3.h+o3->position_obs3.y)
    {
        return 0;
    }

    if( personnage.y+personnage.h <= o3->position_obs3.y )
    {
        return 0;
    }

    if( personnage.y >= o3->position_obs3.y+o3->position_obs3.h )
    {
        return 0;
    }

   
    return 1;
}*/

/*
void animation_obstacle(obstacle *o)
{


if ((*o)==10)
  (*o)=0;
 
if ( (*o)<=10)
{
(*o)++;

SDL_Surface *obstacle_anime[10];
						
}
}*/



