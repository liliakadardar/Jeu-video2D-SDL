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
p->position_personnage.y=230;

char nomFich[99];
int i;
for(i=0;i<99;i++)
{
    sprintf(nomFich,"per/%d.png",i);
    p->tab[i]=IMG_Load(nomFich);
}

p->Frame=0;
p->vitesse=5;
}

//---------------------Affichage du personnage sur l'ecran ---------------------//

void afficher_personnage(personnage p,SDL_Surface *ecran)
{
    SDL_BlitSurface(p.tab[p.Frame],NULL,ecran,&(p.position_personnage));
}


//---------------------Animation marche a droite ---------------------//

void animation_walk_right (personnage *p)
{
  if(p->Frame<=0 || p->Frame>=8)
		p->Frame=1;
	p->Frame++;
}

//---------------------Animation marche a gauche---------------------//

void animation_walk_left (personnage *p)
{
	if(p->Frame<=9 || p->Frame>=19)
		p->Frame=10;

	p->Frame++;	
}

//---------------------Animation du saut a droite---------------------//
void animation_jump_right (personnage *p)
{
	if(p->Frame<=20 || p->Frame>=34)
		p->Frame=23;

	p->Frame++;

}

//---------------------Animation du saut a gauche--------------------//
void animation_jump_left (personnage *p)
{
  if(p->Frame<=35 || p->Frame>=49)
		p->Frame=36;

	p->Frame++;
}


//---------------------Animation crouse a droite---------------------//

void animation_run_right (personnage *p)
{
	if(p->Frame<=50 || p->Frame>=60)
		p->Frame=51;

	p->Frame++;
	
}

//---------------------Animation crourse a gauche---------------------//

void animation_run_left (personnage *p)
{
	if(p->Frame<=61 || p->Frame>=70)
		p->Frame=62;

	p->Frame++;
	
}

/*
//---------------------Animation de l'accroupissemnt droite---------------------//

void animation_crouch_right (personnage *p)
{
int nb_frames_p=0;
  
	if(p->Frame<=45 || p->Frame>=55)
		p->Frame=46;

	p->Frame++;
	
}


//---------------------Animation de l'accroupissemnt gauche---------------------//

void animation_crouch_left (personnage *p)
{
int nb_frames_p=0;
  
	if(p->Frame<=45 || p->Frame>=55)
		p->Frame=46;

	p->Frame++;
	
}



//---------------------Animation de glissage droite---------------------//

void animation_slide_right (personnage *p)
{
int nb_frames_p=0;
  
	if(p->Frame<=45 || p->Frame>=55)
		p->Frame=46;

	p->Frame++;
	
}


//---------------------Animation de glissage gauche---------------------//

void animation_slide_left (personnage *p)
{
int nb_frames_p=0;
  
	if(p->Frame<=45 || p->Frame>=55)
		p->Frame=46;

	p->Frame++;
	
}





//---------------------Animation de l'attack droite---------------------//

void animation_attack_right (personnage *p)
{
int nb_frames_p=0;
  
	if(p->Frame<=45 || p->Frame>=55)
		p->Frame=46;

	p->Frame++;
	
}


//---------------------Animation de l'attack gauche---------------------//

void animation_attack_left (personnage *p)
{
int nb_frames_p=0;
  
	if(p->Frame<=45 || p->Frame>=55)
		p->Frame=46;

	p->Frame++;
	
}


//---------------------Animation en cas d'echouer a droite------------------------//

void animation_fail_right (personnage *p)
{
int nb_frames_p=0;
  
	if(p->Frame<=45 || p->Frame>=55)
		p->Frame=46;

	p->Frame++;
	
}


//---------------------Animation en cas d'echouer a gauche------------------------//

void animation_fail_left (personnage *p)
{
int nb_frames_p=0;
  
	if(p->Frame<=45 || p->Frame>=55)
		p->Frame=46;

	p->Frame++;
	
}




*/

//------------------------Deplacement clavier ------------------------//

 
void deplacement_clavier(personnage *p,int clic)
{
            if (clic==1)
         
          {
            p->position_personnage.x -=p-> vitesse;
                         //animation_walk_right (p);
                        animation_walk_left (p);
          }
          else if(clic==2)
          {
            p->position_personnage.x += p->vitesse;
                         animation_walk_right (p);
                       // animation_walk_left (p);
          }
            else if (clic==3)
 	{
            p->position_personnage.x += p->vitesse;
             p->position_personnage.y -= p->vitesse;
             animation_jump_right (p);

               }
               else if(clic==4)
               {
                 p->position_personnage.x += p->vitesse;
            p->position_personnage.y += p->vitesse;
             animation_jump_left (p);

               }

		else if(clic==5)
               {
                 p->position_personnage.x += p->vitesse+5;
            
                 animation_run_right (p);


               }
		else if(clic==6)
               {
                 p->position_personnage.x -= p->vitesse+5;
            
                  animation_run_left (p);


               }

/*
		else if(clic==7)
               {
                 p->position_personnage.x -= p->vitesse;
            
                  animation_run_left (p);


               }
		else if(clic==8)
               {
                 p->position_personnage.x -= p->vitesse;
            
                  animation_run_left (p);


               }
		else if(clic==9)
               {
                 p->position_personnage.x -= p->vitesse;
            
                  animation_run_left (p);


               }
		else if(clic==10)
               {
                 p->position_personnage.x -= p->vitesse;
            
                  animation_run_left (p);


               }
		else if(clic==11)
               {
                 p->position_personnage.x -= p->vitesse;
            
                  animation_run_left (p);


               }
		else if(clic==12)
               {
                 p->position_personnage.x -= p->vitesse;
            
                  animation_run_left (p);


               }
*/
}

//---------------------Deplacement du personnage moyennant la sourie---------------------//


void deplacement_sourie (personnage *p, int clic)
{

            if (clic==1)
         
          {
            p->position_personnage.x -=p-> vitesse;
		    //animation_walk_right (p);
		    animation_walk_left (p);
          }
          else if(clic==2)
          {
            p->position_personnage.x += p->vitesse;
		    animation_walk_right (p);
		    //animation_walk_left (p);
          }
          else if(clic==3)
          {
            p->position_personnage.x += p->vitesse;
            p->position_personnage.y -= p->vitesse;
		   animation_jump_right (p);
          }
          else if(clic==4)
          {
            p->position_personnage.y += p->vitesse;
            p->position_personnage.x += p->vitesse;
		    animation_jump_left (p);
          }



}


