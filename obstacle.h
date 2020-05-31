#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>


typedef struct obstacle {

SDL_Surface *obstacle_anime[10];
SDL_Surface *obtacle_non_anime;
SDL_Surface *image_obs1[2],*image_obs21,*image_obs22;
int speed;
SDL_Surface *image_obs3;
SDL_Rect position_obs1;
SDL_Rect position_obs21;
SDL_Rect position_obs22;
SDL_Rect position_obs3;


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
void afficher_obstacle1(obstacle  o1, SDL_Surface *ecran);
void afficher_obstacle2(obstacle  o2, SDL_Surface *ecran);
void afficher_obstacle3(obstacle  o3, SDL_Surface *ecran);
void scroll_obstacle(int clic, obstacle *o1);
void scroll_obstacle2(int clic, obstacle *o2);
void scroll_obstacle3(int clic, obstacle *o3);
/*int collision_enemie(SDL_Rect personnage, SDL_Rect enemie *en);
int collision_obstacle(SDL_Rect personnage, SDL_Rect obstacle *o1);
int collision_obstacle(SDL_Rect personnage, SDL_Rect obstacle *o2);
int collision_obstacle(SDL_Rect personnage, SDL_Rect obstacle *o3);
void animation_obstacle(obstacle *o);*/
