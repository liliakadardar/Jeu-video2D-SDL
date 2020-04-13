#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include "personnage.h"
//#include "background.h"

void initialiser_personnage(personnage *p)
{
p->position_personnage.x=0;
p->position_personnage.y=470;
char nomFich[25];
int i;
for(i=0;i<24;i++)
{
    sprintf(nomFich,"pers/%d.png",i);
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

void animation_right (personnage *p)
{
int nb_frames_p=0;
  p->direction=0;
	if(p->Frame<=0 || p->Frame>=15)
		p->Frame=0;
	p->Frame++;
	if (p->Frame>=nb_frames_p)
		p->Frame=0;
}

void animation_left (personnage *p)
{
int nb_frames_p=0;
  p->direction=1;
	if(p->Frame<=14 || p->Frame>=30)
		p->Frame=15;

	p->Frame++;
	if (p->Frame>=2*nb_frames_p)
		p->Frame=16;
}


void animation_stable (personnage *p)
{
int nb_frames_p=0;
  if (p->direction==0)
  {
	if(p->Frame<=1 || p->Frame>=5)
		p->Frame=5;

	p->Frame++;
	if (p->Frame>=3*nb_frames_p)
		p->Frame=5;
  }/*
else if (p->direction==1)
{
int nb_frames_p=0;
if(p->Frame<=44 || p->Frame>=50)
  p->Frame=45;

p->Frame++;
if (p->Frame>=4*nb_frames_p)
  p->Frame=45;
}*/

}

void deplacement_clavier_right(personnage *p)
{



}

void deplacement_clavier_left(personnage *p)
{



}

void deplacement_sourie(personnage *p)
{



}
