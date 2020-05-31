
#ifndef COLLISION_H_
#define COLLISION_H_
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
//#include "personnage.h"
//#include "ennemi.h"



typedef struct collision 
{
personnage pers;
ennemi *enn;
}collision;

int collision_ennemi(collision *c);
#endif
