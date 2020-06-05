#include <stdio.h>
#include <stdlib.h> 
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>

typedef struct potion1
{

SDL_Surface *img_pt4;
SDL_Surface *img_pt5;
SDL_Surface *img_pt6;
SDL_Surface *img_pt7;

SDL_Rect position_potion4;
SDL_Rect position_potion5;
SDL_Rect position_potion6;
SDL_Rect position_potion7;

SDL_Rect position_collision;
SDL_Rect scroll;
int nbr_pt;
int speed;
}potion1;


void initialiser_potion1(potion1 *pt4,potion1 *pt5,potion1 *pt6,potion1 *pt7);
void afficher_pt1(potion1 pt4,potion1 pt5,potion1 pt6,potion1 pt7,SDL_Surface *ecran);

//void collision_potion(personnage *p,potion *pt);

void scroll_potion4(int clic, potion1 *pt4);
void scroll_potion5(int clic, potion1 *pt5);
void scroll_potion6(int clic, potion1 *pt6);
void scroll_potion7(int clic, potion1 *pt7);

