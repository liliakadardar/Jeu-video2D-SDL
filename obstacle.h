#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>


typedef struct obstacle {

SDL_Surface *obstacle_anime[10];
SDL_Surface *obtacle_non_anime;
SDL_Surface *image_obs1[2],*image_obs2[7];

SDL_Surface *image_trap;
SDL_Rect position_obs1;
SDL_Rect position_obs2;
SDL_Rect position_trap;

}obstacle;
struct AABB
{
int x;
int y;
int w;
int h;
}; 


void initialiser_obstacle1(obstacle *o1);
void initialiser_obstacle2(obstacle * o2);
void initialiser_obstacle3(obstacle * o3);
void afficher_obstacle1(obstacle  *o1, SDL_Surface *ecran);
void afficher_obstacle2(obstacle  *o2, SDL_Surface *ecran);
void afficher_obstacle3(obstacle  *o3, SDL_Surface *ecran);
/*int collision_enemie(SDL_Rect personnage, SDL_Rect enemie *en);
int collision_obstacle(SDL_Rect personnage, SDL_Rect obstacle *o1);
int collision_obstacle(SDL_Rect personnage, SDL_Rect obstacle *o2);
int collision_obstacle(SDL_Rect personnage, SDL_Rect obstacle *o3);
void animation_obstacle(obstacle *o);*/
