#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>



typedef struct ennemi
{
SDL_Rect position_entite;
SDL_Surface *affichage_secondaire[20];

SDL_Rect position_max;
SDL_Rect position_min;

//int direction;
int nbIm;
int num_im;
int sens;
int Frame;
//int affichage_ou_non;
SDL_Rect position_aleatoire_max;
//son bref collision 
// son bref deplcement 
SDL_Rect position_aleatoire_min;
SDL_Rect pos_affichage;


}ennemi;

void initialiser_ennemi1(ennemi *en1);
void afficher_ennemi1(ennemi en1, SDL_Surface *ecran);
void initialiser_ennemi2(ennemi *en2);
void afficher_ennemi2(ennemi en2, SDL_Surface *ecran);

