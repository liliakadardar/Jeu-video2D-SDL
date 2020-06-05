#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "save.h"

/*-----Fonction de sauvegarde de la partie-----*/

void save (SDL_Rect p.position_personnage.x,SDL_Rect p.position_personnage.y,int score)
 { 
    FILE* save = NULL;
    save = fopen("sauvegarde.txt","w+"); // Ouverture en écriture du fichier sauvegarde.txt

        if(save != NULL)
{   // Ecriture dans le fichier des positions du joueur et score
                fprintf(save,"%d\n%d\n",p.position_personnage.x,p.position_personnage.y);
                fprintf(save,"%d\n",score);
        }

    fclose(save); // Fermeture du fichier
}


/*------- Fonction de chargement de la partie--------*/


void load (SDL_Rect p.position_personnage.x,SDL_Rect p.position_personnage.y,int score)
{ 

    FILE* save = NULL;
    save = fopen("sauvegarde.txt","r"); // Ouverture du fichier sauvegarde en lecture

    if(save != NULL) 
	{ // Recuperation des positions du joueur et score
            fscanf(save,"%d\n%d\n%d",p.position_personnage.x,p.position_personnage.y,&score);
    }

    fclose(save); // Fermeture du fichier
}
