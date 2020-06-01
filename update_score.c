#include <stdio.h>
#include <stdlib.h>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "SDL/SDL_ttf.h"
#include <string.h>
#include "update_score.h"

void initialiser_score (int valeur_score, score *s )
{
SDL_Surface *texte1=NULL; // l'affichage du texte score sous forme d'une chaine 
SDL_Surface *number1=NULL;// affichage de la valeur du score sous forme d'une chaine de caractere 
TTF_Font *police=NULL;

s->police = TTF_OpenFont("outils/avocado.ttf", 50);

SDL_Color blanc={255,255,255}; 

s->position_number.x=215;
s->position_number.y=80;

s->position_texte.x=15;
s->position_texte.y=80;

char texte[20];

strcpy(texte,"Score :"); // variable pouur l'affichage du message score sur l ecran 

char number[20]; //tableau de chaine de c ou on va stocker la valeur du score 
sprintf(number, "%d ", valeur_score);
	//printf("number = %d",);

s->texte1= TTF_RenderText_Blended(s->police,texte,blanc);
s->number1= TTF_RenderText_Blended(s->police,number,blanc);

TTF_CloseFont(police);

}



void afficher_score(int valeur_score,score s,SDL_Surface *ecran)
{
 SDL_BlitSurface(s.texte1, NULL, ecran,&s.position_texte);
SDL_BlitSurface(s.number1, NULL, ecran,&s.position_number);
}


void update_score  (int *valeur_score,score s,personnage *p)
{

  //if (x==1)
   if( ( ((p->position_personnage.x)/2)>=0 ) && (p->position_personnage.x!=0))
 	{
	*valeur_score=*valeur_score+100;

   	/*printf("collision \n");
	printf("%d",s->score1);*/
  	}


}
void free_score( score s)
{


SDL_FreeSurface(s.texte1);
SDL_FreeSurface(s.number1);



}

