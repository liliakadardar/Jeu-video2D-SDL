#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include"vie.h"

void initialiser_vie(vie *v) 
{
/*on a ecrit un texte devant les icons */
TTF_Font *text=NULL;
SDL_Surface *texte=NULL;
v->text=TTF_OpenFont("outils/avocado.ttf",35);

SDL_Color couleur={255,255,255};
 
 v->texte= TTF_RenderText_Blended(v->text,"Vie :",couleur);
 v->position_texte.x=700;
 v->position_texte.y=20;


// implemetation des images de la vie dans un tableau sans une boucle 
v->image_vie[0]=IMG_Load("outils/hearts03.png") ;
v->image_vie[1]=IMG_Load("outils/hearts02.png") ;
v->image_vie[2]=IMG_Load("outils/hearts01.png") ;
v->image_vie[3]=IMG_Load("outils/hearts00.png") ;
// positions
 v->position_vie.x=790;
 v->position_vie.y=20;
 v->val=3;
TTF_CloseFont(text);
}


void gestion_vies (vie *v,personnage *p)
{
  //int i=0; 
int vies=3;
 
    v->val--;
vies--;
    if (vies==2)
    {
	SDL_FreeSurface(v->image_vie[0]);}
    else if (vies==1)
    {SDL_FreeSurface(v->image_vie[1]);}  
    else if (vies==0)
    {SDL_FreeSurface(v->image_vie[2]);}
	printf("val vie :%d \n",v->val);
  }

 



void afficher_vie(vie v,SDL_Surface *ecran)
{ 
SDL_BlitSurface(v.texte,NULL,ecran,&(v.position_texte));
SDL_BlitSurface(v.image_vie[v.val],NULL,ecran,&(v.position_vie));
}

void vie_freevie(vie v ) 
{
SDL_FreeSurface(v.image_vie[0]);
SDL_FreeSurface(v.image_vie[1]);
SDL_FreeSurface(v.image_vie[2]);
SDL_FreeSurface(v.image_vie[3]);

}
