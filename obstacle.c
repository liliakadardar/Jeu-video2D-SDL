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
o1->speed=35;
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
	else if ((clic==1)&&(o1->position_obs1.x<6500))//walk gauche
	{ 
		o1->position_obs1.x+=o1->speed;
		
	}
if(clic==5)//walk droite
	{
		
		o1->position_obs1.x-=o1->speed+2;
		
	}
	else if ((clic==6)&&(o1->position_obs1.x<6500))//walk gauche
	{ 
		o1->position_obs1.x+=o1->speed+2;
		
	}

if(clic==3)
	{
		
		o1->position_obs1.x-=o1->speed;
		
	}

}





/*---- obstacle 2-----*/
  void initialiser_obstacle2(obstacle *o2)
{    
  // implemetation des images du obstacle dans un tableau sans une boucle 
   
   	o2->image_obs21=IMG_Load("outils/obs21.png") ;
	o2->image_obs22=IMG_Load("outils/obs21.png") ;
 // positions
   o2->position_obs21.x=4150;//5500
   o2->position_obs21.y=350;
   
o2->position_obs22.x=5450;
   o2->position_obs22.y=400;
/*
   o2->position_obs2.w=0.677;
   o2->position_obs2.h=1.213;*/o2->speed=35;
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
	else if ((clic==1)&&(o2->position_obs21.x<6000))//walk gauche
	{ 
		o2->position_obs21.x+=o2->speed;
		
		
	}
if(clic==5)//walk droite
	{
		
		o2->position_obs21.x-=o2->speed+2;

		
	}
	else if ((clic==6)&&(o2->position_obs21.x<6000))//walk gauche
	{ 
		o2->position_obs21.x+=o2->speed+2;
		
		
	}


if(clic==3)
	{
		
		o2->position_obs21.x-=o2->speed;
		
	}
}



/*---- obstacle 3-----*/

  void initialiser_obstacle3(obstacle * o3)
{    
   SDL_Surface *image_obs3=NULL;


   o3->image_obs3=IMG_Load("outils/obs3.png");

   o3->position_obs3.x=5000;
   o3->position_obs3.y=0;
o3->speed=35;
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
	else if ((clic==1)&&(o3->position_obs3.x<6500))//walk gauche
	{ 
		o3->position_obs3.x+=o3->speed;
		
		
	}
if(clic==5)//walk droite
	{
		
		o3->position_obs3.x-=o3->speed+2;

		
	}
	else if ((clic==6)&&(o3->position_obs3.x<6500))//walk gauche
	{ 
		o3->position_obs3.x+=o3->speed+2;
		
		
	}


if(clic==3)
	{
		
		o3->position_obs3.x-=o3->speed;
		
	}
}


