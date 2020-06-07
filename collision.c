#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "collision.h"


int collision_ennemi(collision *c)
{


if (((c->pers.position_personnage.x + c->pers.position_personnage.w )>= c->enn->position_entite.x)||

(c->pers.position_personnage.x<(c->enn->position_entite.x+ c->enn->position_entite.w))||

((c->pers.position_personnage.y+c->pers.position_personnage.h)> c->enn->position_entite.y)||

(c->pers.position_personnage.y<( c->enn->position_entite.y + c->enn->position_entite.h))||((c->pers.position_personnage.y+c->pers.position_personnage.h)>c->enn->position_entite.y))

{
return 0;}
return 1;

}






















/*
int check_collision( SDL_Rect A, SDL_Rect B )
{
    //Les cotes des rectangles
    int leftA, leftB;
    int rightA, rightB;
    int topA, topB;
    int bottomA, bottomB;
 
    //Calcul les cotes du rectangle A
    leftA = A.x;
    rightA = A.x + A.w;
    topA = A.y;
    bottomA = A.y + A.h;
 
    //Calcul les cotes du rectangle B
    leftB = B.x;
    rightB = B.x + B.w;
    topB = B.y;
    bottomB = B.y + B.h;
if( bottomA <= topB )
    {
        return 0;
    }
 
    if( topA >= bottomB )
    {
        return 0;
    }
 
    if( rightA <= leftB )
    {
        return 0;
    }
 
    if( leftA >= rightB )
    {
        return 0;
    }
 
    //Si conditions collision detectee
    return 1;
}*/




/*
int collisions(SDL_Rect rect1,SDL_Rect rect2)
{
        if(rect1.y >= rect2.y + rect2.h)
                return 0;
        if(rect1.x >= rect2.x + rect2.w)
                return 0;
        if(rect1.y + rect1.h <= rect2.y)
                return 0;
        if(rect1.x + rect1.w <= rect2.x)
                return 0;
        return 1;
}

*/


