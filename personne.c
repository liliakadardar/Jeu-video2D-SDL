#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include "personnage.h"

void initialiser_personnage(personnage *p)
{
p->position_personnage.x=0;
p->position_personnage.y=150;
char nomFich[50];
int i;
for(i=0;i<50;i++)
{
    sprintf(nomFich,"per/%d.png",i);
    p->tab[i]=IMG_Load(nomFich);
}

//p->sens_mouvement=1;
p->Frame=0;
p->time=0;
p->score=0;
p->vie=5;
}

void afficher_personnage(personnage *p,SDL_Surface *ecran)
{
    SDL_BlitSurface(p->tab[p->Frame],NULL,ecran,&(p->position_personnage));
}

void animation (personnage *p) 
{
  if (p->direction == Left) 
  {
    animation_left(p);
  }
  else 
  {
    animation_right(p);
  }
}


void animation_right (personnage *p)
{
  int nb_frames_p=0;
  if(p->Frame<=11 || p->Frame>=25)
    p->Frame=11;
	p->Frame++;

	/*if (p->Frame>=nb_frames_p)
		p->Frame=0;*/

}

void animation_left (personnage *p)
{
  int nb_frames_p=0;
  if(p->Frame<=0 || p->Frame>=10)
    p->Frame=0;

	p->Frame++;
	/*if (p->Frame>=2*nb_frames_p)
		p->Frame=16;*/
}


void animation_stable (personnage *p)
{
int nb_frames_p=0;
  if (p->direction == Left)
  {
	if(p->Frame<=29 || p->Frame>=45)
		p->Frame=30;

	p->Frame++;
	if (p->Frame>=3*nb_frames_p)
		p->Frame=30;
  }
else if (p->direction == Right)
{
int nb_frames_p=0;
if(p->Frame<=44 || p->Frame>=60)
  p->Frame=45;

p->Frame++;
if (p->Frame>=4*nb_frames_p)
  p->Frame=45;
}

}



void deplacement_clavier_right(personnage *p,SDL_Surface *ecran)
{
 

}
void deplacement_clavier_left(personnage *p)
{

}





void deplacement_sourie (personnage *p, SDL_Surface *ecran)
{

  SDL_Event event;
  int continuer=1;
  int vitesse=5;

  while (continuer)
	{
SDL_EnableKeyRepeat(10, 10);
    SDL_WaitEvent(&event);
    switch(event.type)
    {
        case SDL_QUIT:
continuer=0;
        break;
case SDL_MOUSEBUTTONUP:
          if(event.button.button == SDL_BUTTON_LEFT )
          {
            p->position_personnage.x -= vitesse;
            p->direction = Left;
          }
          else if(event.button.button == SDL_BUTTON_RIGHT)
          {
            p->position_personnage.x += vitesse;
            p->direction = Right;
          }
          else if(event.button.button== SDL_BUTTON_WHEELUP)
          {
            p->position_personnage.y -= vitesse;
          }
          else if(event.button.button == SDL_BUTTON_WHEELDOWN)
          {
            p->position_personnage.y += vitesse;
          }
        animation (p);
        break;
default:
break;

      }
       
    SDL_FillRect(ecran, NULL, 0x000000);
    afficher_personnage(p,ecran);
    SDL_Flip(ecran);

    }


}
	
