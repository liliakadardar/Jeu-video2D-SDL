#include <stdio.h>
#include <stdlib.h> 
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "background.h"


void initialiser_background(background *bg)
{

SDL_Surface *img_bg = (SDL_Surface *) malloc(2* sizeof(SDL_Surface *));

//position bg
bg->position_bg.x=1920;
bg->position_bg.y=1080;

//position bg colision 
bg->position_collision.x=1920;
bg->position_collision.y=1080;

// scrolling 
bg->scroll.x=0;
bg->scroll.y=0;
bg->scroll.w=1920;
bg->scroll.h=1080;

bg->speed=5;

// initialisation dans un tableau bg et bg_collision 

bg->img_bg[0]=IMG_Load("outils/bg_final_1.png");
bg->img_bg[1]=IMG_Load("outils/bg_final_0.png");

// ajout d'un son continue avec la bg 
}

void afficher_background(background *bg, SDL_Surface * ecran)

{
SDL_BlitSurface(bg->img_bg[0],&(bg->scroll),ecran,NULL);
SDL_BlitSurface(bg->img_bg[1],&(bg->scroll),ecran,NULL);
}



void scrolling_bg(int sens,background *bg, SDL_Surface *ecran)
{

}

