#include <stdio.h>
#include <stdlib.h>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "SDL/SDL_ttf.h"
#include <string.h>
#include "update_score.h"


void initialiser_score (score *s )
{
SDL_Surface *valeur_score=NULL;
TTF_Font *police=NULL;
s->police = TTF_OpenFont("outils/avocado.ttf", 50);
SDL_Color couleur={255,255,255}; // je ne sais pas pk la couleur change a chaque execution de couleur diffrente de maniere auto à verifier!! ou ken thebou khaliwha fazat  
s->position_score.x=15;
s->position_score.y=80;
s->valeur_score= TTF_RenderText_Blended(s->police,"Score :",couleur);
// normalement le score est relié avce la fonction vie. donc trouve toi une liaison 
/*char scoree[20];
char klem[20]; // yatba3 el comptage du score fil jeu tawoi pour juste afficher on va juste utiliser une variable qqconque

       strcpy(klem,"score:");
              sprintf(scoree, " %d ", score1);
             valeur_score= TTF_RenderText_Blended(police,scoree,rouge);// ici yatba3 le meme travail du comptage */

TTF_CloseFont(police);


}
/*************** 5edmaa mehich tawoi ******/



/*
void update_score  (int *score1,int x)
{

   if (x==1)
 {*score=*score+100;
   printf("collision \n");
  	  }

}*/
/*
int gestion_vies (SDL_Rect personnage,objet ennemie,SDL_Surface *coeur1,SDL_Surface *coeur2,SDL_Surface *coeur3)
{ int vies=0,i=0;

  if (collision ( personnage, ennemie)==1)
  {
    vies--;
    if (vies==2)
    {SDL_FreeSurface(coeur1);}
    else if (vies==1)
    {SDL_FreeSurface(coeur2);}
    else if (vies==0)
    {SDL_FreeSurface(coeur3);}
  }
 return vies;

 }*/


void afficher_score(score s,SDL_Surface *ecran)
{
              SDL_BlitSurface(s.valeur_score, NULL, ecran, &s.position_score);
}

