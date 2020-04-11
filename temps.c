
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include <time.h> //pour clovk;
//#include <windows.h>// pour sleep

void initialisation_tjeu(clock_t t1, clock_t t2,int vie, float* temps);
{
    clock_t t1, t2;
    t1 = clock();                               // au debut du jeu ba3ed satrt game							     // LE temps de includ


	//mon programme
  									  // Sleep(30); //programme prent une pause 30 MS
     t2 = clock();                                                       // le temps final
    temps = (float)(t2-t1)/CLOCKS_PER_SEC; 				//le temps de execution d'un progremme net
    printf("temps = %f\n", temps);

    return 0;
}




/****************** gestion de temps dans l'enigme ************************/
/*
void initialiser_tEnigme(enigme *e)
{ int j;

for(j=0;j>9;j++)
{
 e->tEnigme[j]=IMG_Load("%d.png");
}
e->position_tEnigme.x=0;
e->position_tEnigme.y=0;
}


void afficher_tEnigme(enigme *e)
{ int j;

for(j=0;j>9;j++)
{
SDL_BlitSurface(e->tEnigme, NULL, ecran, &e->position_tEnigme);
}
}*/
