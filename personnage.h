#include <stdlib.h> 
#include <stdio.h> 
#include <SDL/SDL.h>
#include <SDL/SDL_image.h> 
#include <SDL/SDL_mixer.h> 
#include <SDL/SDL_ttf.h> 
#include<SDL/SDL_audio.h>

typedef struct personnage
{
	SDL_Surface *image_personnage;
	SDL_Rect position_personnage;
    	int nombre_vie;
    	int score;
}personnage;


void initialiser_personnage(personnage *p);
void afficher_personnage(personnage *p,SDL_Surface *ecran);
void deplacement_clavier_right(personnage *p,ecran);
void deplacement_clavier_left(personnage *p,ecran);
void animation_right(personnage *p);
void animation_left(personnage *p);







