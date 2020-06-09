#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>

/*
typedef enum direction 
{

  Left,
  Right

} direction;
*/

typedef struct ennemi
{
SDL_Rect position_entite;
SDL_Surface *affichage_secondaire[20];

SDL_Rect position_max;
SDL_Rect position_min;
int speed;
int direction;
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
	int vy,vx;
	int status;
	float dt;
	float factgravite;
	float factsautmaintenu;
	float impulsion;


}ennemi;
int collision_enn2(personnage *p, ennemi en);
int collision_enn(personnage *p, ennemi en);
/*----- ennemi 1-----*/
void initialiser_ennemi1(ennemi *en1);
void afficher_ennemi1(ennemi en1,SDL_Surface *ecran);
void scroll_ennemi(int clic, ennemi *en1);
void animation_droite (ennemi *en1);

/*----- ennemi 2-----*/
void initialiser_ennemi2(ennemi *en2);
void afficher_ennemi2(ennemi en2, SDL_Surface *ecran);
void scroll_ennemi2(int clic, ennemi *en2);
void animation_droite2(ennemi *en2);

/*-- extrat--*/

void animation_up_down (ennemi *en2);
int deplacement_ennemi_aleaH(ennemi *en1);
int deplacement_ennemi_aleaV(ennemi *en2);

