#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>

typedef struct ennemi
{
SDL_Rect position_entite;
SDL_Rect position_max;
SDL_Rect position_min;
SDL_Surface *affichage_secondaire[20];
int nbIm;
int num_im;
int frameright;
int framedown;
int frameup;
int frameleft;
int affichage_ou_non;
SDL_Rect position_aleatoire_max;
//son bref collision 
// son bref deplcement 
SDL_Rect position_aleatoire_min;
SDL_Rect pos_affichage;


}ennemi;

void initialiser_ennemi(ennemi e[],int n);
void afficher_ennemi(ennemi e[], SDL_Surface *ecran);
void perfect_pixel(ennemi e[]);
void deplacement_ennemi_alea(ennemi e []);