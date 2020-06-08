#include <stdio.h>
#include <stdlib.h> 
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>

typedef struct potion
{
SDL_Surface *img_pt;
SDL_Rect position_potion;

int speed;
}potion;

potion pt;
potion pt0;
potion pt1;

potion pt2;
potion pt3;

potion pt4;
potion pt5;

potion pt6;
potion pt7;

potion pt8;
potion pt9;

void initialiser_potion();
void afficher_potion(SDL_Surface *ecran);
int collision_potion(personnage *p, potion pt);

void scroll_potion0(int clic, potion *pt0);
void scroll_potion1(int clic, potion *pt1);
void scroll_potion2(int clic, potion *pt2);
void scroll_potion3(int clic, potion *pt3);
void scroll_potion4(int clic, potion *pt4);
void scroll_potion5(int clic, potion *pt5);
void scroll_potion6(int clic, potion *pt6);
void scroll_potion7(int clic, potion *pt7);
void scroll_potion8(int clic, potion *pt8);
void scroll_potion9(int clic, potion *pt9);
