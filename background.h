#include <stdio.h>
#include <stdlib.h> 
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>


typedef struct background
{
SDL_Surface *img_bg[2];
SDL_Rect position_bg;
SDL_Rect position_collision;
SDL_Rect scroll;
int speed;
//ajout d'un son continue 
}background;


void initialiser_background(background *bg);

void afficher_background(background *bg, SDL_Surface * ecran);

//void animation_bg(background *bg, SDL_Surface *ecran );

void scrolling_bg(int sens,background *bg, SDL_Surface *ecran);
//void Free_background(void);
