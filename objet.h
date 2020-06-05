#include <stdio.h>
#include <stdlib.h> 
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>

typedef struct potion
{
SDL_Surface *img_pt0;
SDL_Surface *img_pt1;
SDL_Surface *img_pt2;

SDL_Rect position_potion0;
SDL_Rect position_potion1;
SDL_Rect position_potion2;

//SDL_Rect position_collision;
SDL_Rect scroll;
int nbr_pt;
int speed;
}potion;


void initialiser_potion(potion *pt0,potion *pt1,potion *pt2);
void afficher_potion(potion pt0,potion pt1,potion pt2,SDL_Surface *ecran);

void collision_potion(personnage *p,potion *pt);

void scroll_potion0(int clic, potion *pt0);
void scroll_potion1(int clic, potion *pt1);
void scroll_potion2(int clic, potion *pt2);

