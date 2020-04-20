#ifndef UPDATE_SCORE_H
#define UPDATE_SCORE_H_
#include <stdio.h>
#include <stdlib.h> 
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>

typedef struct score 
{
SDL_Surface *valeur_score;
SDL_Rect position_score;  
TTF_Font *police;

//char scoree;
//char klem;
}score ;


void initialiser_score (score *s);
void afficher_score  (score s,SDL_Surface *ecran);
#endif 
