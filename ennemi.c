#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "ennemi.h"


void initialiser_ennemi1(ennemi *en1)
{
en1->position_entite.x=600;
en1->position_entite.y=80;

	char entites[20];
	int i;
  for ( i = 0; i < 20; i++)
  {
      sprintf(entites,"ennemi/en1/%d.png",i);
    en1->affichage_secondaire[i]=IMG_Load(entites);
  }
en1->Frame=0;

}

void afficher_ennemi1(ennemi en1, SDL_Surface *ecran)
{

  SDL_BlitSurface(en1.affichage_secondaire[en1.Frame],NULL,ecran ,&(en1.position_entite));
} 


void initialiser_ennemi2(ennemi *en2)
{
en2->position_entite.x=200;
en2->position_entite.y=130;
  char entites[20];
  int i;
  for ( i = 0; i < 20; i++)
  {
      sprintf(entites,"outils/en2/%d.png",i);
    en2->affichage_secondaire[i]=IMG_Load(entites);
  }
en2->Frame=0;
}

void afficher_ennemi2(ennemi en2, SDL_Surface *ecran)
{
	SDL_BlitSurface(en2.affichage_secondaire[en2.Frame],NULL,ecran ,&(en2.position_entite));
} 











void animation_gauche_droite (ennemi *en1)
{

  if (en1->direction == Left)
  {
	if(en1->Frame<=0 || en1->Frame>=5)
		en1->Frame=1;

	en1->Frame++;
  }


else if (en1->direction == Right)
  {

if(en1->Frame<=6 || en1->Frame>=10)
  en1->Frame=7;

en1->Frame++;

  }

}


void animation_up_down (ennemi *en2)
{

  if (en2->direction==0)
  {
	if(en2->Frame<=11 || en2->Frame>=21)
		en2->Frame=12;

	en2->Frame++;
  }
else if (en2->direction==1)
  {

if(en2->Frame<=22 || en2->Frame>=33)
  en2->Frame=23;
en2->Frame++;
  }

}





void deplacement_ennemi_aleaH(ennemi *en1)
{
//int sens=0;
int direction=0;
int pos_x_init=en1->position_entite.x;

if (en1->direction == Left)
{
    
      if (en1->position_entite.x <= (pos_x_init+50))
    
{
	if(direction==1)
en1->position_entite.x ++;

}
 
// à droite 
    
      else if(en1->position_entite.x >= (pos_x_init+50))
    {
	if(direction==1)
	en1->direction = Right;
}
}



else if (en1->direction == Right)
{
    if (en1->position_entite.x >= pos_x_init)

{
	if(direction==1)
	en1->position_entite.x --;

}
// à gauche 
    
        else if(en1->position_entite.x <= pos_x_init)
    {
	if(direction==1)
	en1->direction = Left;

}    
}

animation_gauche_droite (en1);
}




void deplacement_ennemi_aleaV(ennemi *en2)
{
int k=0;
int direction=0;
int y_initiale= en2->position_entite.y;
if (en2->direction == Left)
{
    
      if (en2->position_entite.y<= ( y_initiale+50))
    
{en2->position_entite.y ++;
   k=1;}
 
// descend
    
      else if(en2->position_entite.y >= ( y_initiale+50))
    {en2->direction = Right;
      k=1;}

}




else if (en2->direction == Right)
{
    if (en2->position_entite.y >=  y_initiale)

{en2->position_entite.y --;
  k=1;} 

// monte
    
        else if(en2->position_entite.y <=  y_initiale)
    {en2->direction = 0;
k=1;}
    
}
//return k;
animation_up_down (en2);
}

