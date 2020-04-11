#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>


typedef struct obstacle {

SDL_Surface *obstacle_anime[10];
SDL_Surface *obtacle_non_anime;

SDL_Rect position_obstacle;
SDL_Rect 


 

}obstacle;



void initialiser_obstacle(obstacle * o);
void afficher_obstacle(obstacle * o, SDL_Surface *ecran);
