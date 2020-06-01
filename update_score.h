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
SDL_Surface *texte1;
SDL_Surface *number1;

SDL_Rect position_texte;
SDL_Rect position_number;  
TTF_Font *police;

int valeur_score;



}score ;


void initialiser_score (int valeur_score,score *s);
void update_score (int *valeur_score,score s,personnage *p);
void afficher_score  (int valeur_score, score s,SDL_Surface *ecran);
void free_score( score s);

#endif 
