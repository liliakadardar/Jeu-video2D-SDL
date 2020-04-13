#include <stdlib.h> 
#include <stdio.h> 
#include <SDL/SDL.h>
#include <SDL/SDL_image.h> 
#include <SDL/SDL_mixer.h> 
#include <SDL/SDL_ttf.h> 
#include<SDL/SDL_audio.h>

typedef struct  personnage
{
	int vie;
	int sens_mouvement;

	SDL_Rect position_personnage; 
	SDL_Surface *tab[25];
	float time;
	int score;
	SDL_Rect pos_score;
	SDL_Rect scroll;
	int Frame;
	int direction;
	int objective; 

}personnage;



void initialiser_personnage(personnage *p);
void afficher_personnage(personnage *p,SDL_Surface *ecran);
void animation_right (personnage *p);
void animation_left (personnage *p);
void animation_stable (personnage *p);
void deplacement_clavier_right(personnage *p);
void deplacement_clavier_left(personnage *p);
void deplacement_sourie(personnage *p);







