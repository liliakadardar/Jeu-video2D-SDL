#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include "personnage.h"


//---------------------Initialisation des variables ---------------------//


void initialiser_personnage(personnage *p)
{
p->position_personnage.x=0;
p->position_personnage.y=180;

char nomFich[50];
int i;
for(i=0;i<50;i++)
{
    sprintf(nomFich,"per/%d.png",i);
    p->tab[i]=IMG_Load(nomFich);
}

p->Frame=0;
p->vitesse=15;
}

//---------------------Affichage du personnage sur l'ecran ---------------------//

void afficher_personnage(personnage p,SDL_Surface *ecran)
{
    SDL_BlitSurface(p.tab[p.Frame],NULL,ecran,&(p.position_personnage));
}


//---------------------Animation a droite ---------------------//

void animation_right (personnage *p)
{
  if(p->Frame<=0 || p->Frame>=9)
		p->Frame=0;
	p->Frame++;
}

//---------------------Animation a gauche---------------------//

void animation_left (personnage *p)
{
	if(p->Frame<=10 || p->Frame>=19)
		p->Frame=10;

	p->Frame++;	
}

//---------------------Animation du saut ---------------------//
void animation_jump (personnage *p)
{
	if(p->Frame<=20 || p->Frame>=34)
		p->Frame=21;

	p->Frame++;

}

//---------------------Animation de l'accroupissement apres le saut--------------------//
void animation_crouch (personnage *p)
{
  if(p->Frame<=35 || p->Frame>=44)
		p->Frame=36;

	p->Frame++;
}

/*
//---------------------Animation de l'attack du personnage---------------------//

void animation_hit (personnage *p)
{
int nb_frames_p=0;
  
	if(p->Frame<=45 || p->Frame>=60)
		p->Frame=46;

	p->Frame++;
	
}

//---------------------animation du personnage en cas d'echouer---------------------//
void animation_fail (personnage *p)
{
int nb_frames_p=0;
  
	if(p->Frame<=61 || p->Frame>=74)
		p->Frame=62;

	p->Frame++;
	
}*/



//---------------------Deplacement clavier ---------------------//


void deplacement_clavier(personnage *p,int clic)
{
            if (clic==1)
         
          {
            p->position_personnage.x -=p-> vitesse;
           
            animation_left (p);
          }
          else if(clic==2)
          {
            p->position_personnage.x += p->vitesse;
            
            animation_right (p);
          }
            else if (clic==3)
              {p->position_personnage.x += p->vitesse;
               p->position_personnage.y -= p->vitesse;
            
            animation_jump (p);

               }
               else if(clic==4)
               {
                 p->position_personnage.x += p->vitesse;
                 p->position_personnage.y += p->vitesse;
            animation_crouch (p);


               }
}

//---------------------Deplacement du personnage moyennant la sourie---------------------//


void deplacement_sourie (personnage *p, int clic)
{

            if (clic==1)
         
          {
            p->position_personnage.x -=p-> vitesse;
           
		        animation_left (p);
          }
          else if(clic==2)
          {
            p->position_personnage.x += p->vitesse;
            
		        animation_right (p);
          }
          else if(clic==3)
          {
           p->position_personnage.x += p->vitesse;
               p->position_personnage.y -= p->vitesse;
            animation_jump (p);
          }
          else if(clic==4)
          {
            
                 p->position_personnage.x += p->vitesse;
                 p->position_personnage.y += p->vitesse;
		        animation_crouch (p);
          }

       

    


}


