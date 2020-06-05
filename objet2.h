#include <stdio.h>
#include <stdlib.h> 
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>


typedef struct potion2
{
SDL_Surface *img_pt3;
SDL_Surface *img_pt8;
SDL_Surface *img_pt9;

SDL_Rect position_potion3;
SDL_Rect position_potion8;
SDL_Rect position_potion9;

SDL_Rect position_collision;
SDL_Rect scroll;
int speed;

}potion2;


void initialiser_potion2(potion2 *pt3,potion2 *pt8,potion2 *pt9);
void afficher_potiont2(potion2 pt3,potion2 pt8,potion2 pt9,SDL_Surface *ecran);

//void collision_potion2(personnage *p,potion2 *pt);


void scroll_potion3(int clic, potion2 *pt3);
void scroll_potion8(int clic, potion2 *pt8);
void scroll_potion9(int clic, potion2 *pt9);
