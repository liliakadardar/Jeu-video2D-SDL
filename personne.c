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
p->position_personnage.y=250;


char nomFich[119];
int i;
for(i=0;i<119;i++)
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
  if(p->Frame<=0 || p->Frame>=9)
		p->Frame=1;
	p->Frame++;
}

//---------------------Animation marche a gauche---------------------//

void animation_walk_left (personnage *p)
{
	if(p->Frame<=10 || p->Frame>=19)
		p->Frame=11;

	p->Frame++;	
}

//---------------------Animation du saut a droite---------------------//
void animation_jump_right (personnage *p)
{
	if(p->Frame<=24 || p->Frame>=31)
		p->Frame=25;

	p->Frame++;

}

//---------------------Animation du saut a gauche--------------------//
void animation_jump_left (personnage *p)
{
  if(p->Frame<=39 || p->Frame>=46)
		p->Frame=40;

	p->Frame++;
}


//---------------------Animation crouse a droite---------------------//

void animation_run_right (personnage *p)
{
	if(p->Frame<=51 || p->Frame>=60)
		p->Frame=52;

	p->Frame++;
	
}

//---------------------Animation crourse a gauche---------------------//

void animation_run_left (personnage *p)
{
	if(p->Frame<=61 || p->Frame>=70)
		p->Frame=62;

	p->Frame++;
	
}
//---------------------Animation en cas d'echouer a droite------------------------//
/*
void animation_fail_right (personnage *p)
{
int nb_frames_p=0;
  
	if(p->Frame<=71 || p->Frame>=78)
		p->Frame=72;

	p->Frame++;
	
}*/
//---------------------Animation de glissage droite---------------------//

void animation_slide_right (personnage *p)
{
int nb_frames_p=0;
  
	if(p->Frame<=79 || p->Frame>=88)
		p->Frame=80;

	p->Frame++;
	
}
//---------------------Animation de glissage gauche---------------------//

void animation_slide_left (personnage *p)
{
int nb_frames_p=0;
  
	if(p->Frame<=89 || p->Frame>=98)
		p->Frame=90;

	p->Frame++;
	
}


//---------------------Animation de l'attack droite---------------------//

void animation_attack_right (personnage *p)
{
int nb_frames_p=0;
  
	if(p->Frame<=99 || p->Frame>=108)
		p->Frame=100;

	p->Frame++;
	
}


//---------------------Animation de l'attack gauche---------------------//

void animation_attack_left (personnage *p)
{
int nb_frames_p=0;
  
	if(p->Frame<=109 || p->Frame>=118)
		p->Frame=110;

	p->Frame++;
	
}





//---------------------Animation en cas d'echouer a gauche------------------------//
/*
void animation_fail_left (personnage *p)
{
int nb_frames_p=0;
  
	if(p->Frame<=79 || p->Frame>=77)
		p->Frame=80;

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


		else if(clic==7)
               {
                 p->position_personnage.x -= p->vitesse;
            
                  animation_slide_right (p);


               }
		else if(clic==8)
               {
                 p->position_personnage.x -= p->vitesse;
            
                animation_attack_right (p);



               }
		else if(clic==9)
               {
                 p->position_personnage.x -= p->vitesse;
            
                 animation_attack_left (p);


               }
		/*
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

//Gravite (personnage p);
          }

          else if(clic==4)
          {
            p->position_personnage.y += p->vitesse;
            p->position_personnage.x += p->vitesse;
		    animation_jump_left (p);
          }



}

//------------------------ ACTUALISATION DES VARIABLES ------------------//

/*

void InitSprite(personnage *p)
{
    p->position_personnage.x = 20.0f;
    p->position_personnage.y = 250.0f;
    p->status = STAT_SOL;
    p->vx = p->vy = 0.0f;
}*/

//--------------------------------RETOUR AU SOL---------------------------------//

void Saute(personnage *p, float impulsion)
{  
    p->vy = -impulsion;
    p->status = STAT_AIR;

}


void ControleSol(personnage *p)
{
    if (p->position_personnage.y>250)
    {
       p->position_personnage.y = 250;
        if (p->vy>0)
            p->vy = 0.0f;
        p->status = STAT_SOL;
    }
}

//--------------------------------GRAVITÉ DU PERSONNAGE---------------------------------//
void Gravite(personnage *p,int clic,float factgravite,float factsautmaintenu)
{
    if (p->status == STAT_AIR && (clic==3))
        factgravite/=factsautmaintenu;
    	p->vy += factgravite;
 	
//p->position_personnage.x= p->vy;

}



//----------------------------- controle des fonctions----------------------------//

void Evolue(personnage *p, int clic)
{	


// declarations de quelques variables 

    float impulsion=6.0f;
    float lateralspeed = 0.5f;
    float airlateralspeedfacteur = 0.5f;
    float maxhspeed = 3.0f;
    float adherance = 1.5f;
    float factgravite = 0.5f;
    float factsautmaintenu = 3.0f;
/***********************************************/
// controle lateral
    if (p->status == STAT_AIR) // (*2)
        lateralspeed*= airlateralspeedfacteur;
   
	 if ((clic==1)) // (*1)
        p->vx-=lateralspeed;
    	
	if ((clic==2))
        p->vx+=lateralspeed;
   	 
	if (p->status == STAT_SOL && !(clic==2) && !(clic==1)) // (*3)
        (p->vx)/=adherance;

// limite vitesse

    if (p->vx>maxhspeed) // (*4)
        p->vx = maxhspeed;
    if (p->vx<-maxhspeed)
        p->vx =-maxhspeed;

// saut

    if ((clic==3) && p->status == STAT_SOL)
        Saute(p,impulsion);
    	Gravite(p,clic,factgravite,factsautmaintenu);
   	ControleSol(p);

// application du vecteur à la position.
    
    p->position_personnage.x +=p->vx;
    p->position_personnage.y +=p->vy;
   
}









