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
o1->image_obs1[0]=IMG_Load("outils/obs03_0.png") ;
o1->image_obs1[1]=IMG_Load("outils/obs03_1.png") ;
o1->image_obs1[2]=IMG_Load("outils/obs03_2.png") ;
o1->image_obs1[3]=IMG_Load("outils/obs03_3.png") ;
o1->image_obs1[4]=IMG_Load("outils/obs03_4.png") ;
o1->image_obs1[5]=IMG_Load("outils/obs03_5.png") ;
o1->image_obs1[6]=IMG_Load("outils/obs03_6.png") ;

// positions

   o1->position_obs1.x=1175;//25.351
   o1->position_obs1.y=256;//0.791;
/*
   o1->position_obs1.w=0.563;
   o1->position_obs1.h=0.710;*/


}
  void initialiser_obstacle2(obstacle * o2)
{    
  // implemetation des images du obstacle dans un tableau sans une boucle 
   o2->image_obs2[0]=IMG_Load("outils/obs01.png") ;
   o2->image_obs2[1]=IMG_Load("outils/obs02.png") ;
 // positions
   o2->position_obs2.x=256;
   o2->position_obs2.y=245;
/*
   o2->position_obs2.w=0.677;
   o2->position_obs2.h=1.213;*/

}
  void initialiser_obstacle3(obstacle * o3)
{    
   SDL_Surface *image_trap=NULL;


   o3->image_trap=IMG_Load("outils/trap.png");

   o3->position_trap.x=240;
   o3->position_trap.y=278;
/*
   o3->position_trap.w=0.677;
   o3->position_trap.h=0.290;*/

}
void afficher_obstacle1(obstacle * o1, SDL_Surface *ecran)
{

    SDL_BlitSurface(o1->image_obs1[0],NULL,ecran,&(o1->position_obs1));
}
void afficher_obstacle2(obstacle * o2, SDL_Surface *ecran)
{   
    SDL_BlitSurface(o2->image_obs2[0],NULL,ecran,&(o2->position_obs2));
}
void afficher_obstacle3(obstacle * o3, SDL_Surface *ecran)
{    
     SDL_BlitSurface(o3->image_trap,NULL,ecran,&(o3->position_trap));
}

/*
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

int collision_obstacle(SDL_Rect personnage, SDL_Rect obstacle *o1)
{


    if( personnage.x+personnage.w <= o1->position_obs1.x )
    {
        return 0;
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



