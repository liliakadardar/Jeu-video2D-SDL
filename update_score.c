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
SDL_Color rouge={255,255,255}; // je ne sais pas pk la couleur change a chaque execution de couleur diffrente de maniere auto à verifier!! ou ken thebou khaliwha fazat  
s->position_score.x=15;
s->position_score.y=80;
s->score1=20;

char scoree[20];
              sprintf(scoree, "score: %d ", s->score1);
		
            
s->valeur_score= TTF_RenderText_Blended(s->police,scoree,rouge);

TTF_CloseFont(police);


}



void afficher_score(score s,SDL_Surface *ecran)
{
              SDL_BlitSurface(s.valeur_score, NULL, ecran,&s.position_score);
}


int update_score  (score *s,personnage *p)
{

  //if (x==1)
   if(( ( (p->position_personnage.x)/2)>=0) && (p->position_personnage.x!=0))
 {
	(s->score1)+=100;

   	/*printf("collision \n");
	printf("%d",s->score1);*/
  }
return (s->score1);

}
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


