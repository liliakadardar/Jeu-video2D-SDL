#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "save.h"

/*-----Fonction de sauvegarde de la partie-----*/

void save (personnage p,int valeur_score,vie v,temps t,int etat,int nb_potion)
 { 
    FILE* saveF = NULL;
    saveF = fopen("sauvegarde.txt","w+"); // Ouverture en écriture du fichier sauvegarde.txt

        if(saveF != NULL)
{   // Ecriture dans le fichier des positions du joueur et score

		if (etat=0)

		fprintf(saveF,"**** Perdu ***\n");
		if (etat=1)
		fprintf(saveF,"**** Gagné ***\n");

		fprintf(saveF,"** Etat: %d\n",etat);
                //fprintf(saveF,"** Position du personnage :%d | %d\n",p.position_personnage.x,p.position_personnage.y);
                fprintf(saveF,"** Score :%d\n",valeur_score);
		fprintf(saveF,"** nombre de Coeurs : %d\n",v.val);
		fprintf(saveF,"** nombre des potions : %d\n",nb_potion);
		fprintf(saveF,"** Temps: %d min:%d sec\n",t.min,t.sec);

        }

    fclose(saveF); // Fermeture du fichier
}


/*------ Fonction de chargement de la partie--------*/


void load (personnage *p,int valeur_score,vie v,temps t,int etat,int nb_potion)
{ 

    FILE* saveF = NULL;
    saveF = fopen("sauvegarde.txt","r"); // Ouverture du fichier sauvegarde en lecture

    if(saveF != NULL) 
	{ // Recuperation des positions du joueur
	    fscanf(saveF,"%d",&etat);
            
	    //fscanf(saveF,"%d | %d ",&p->position_personnage.x,&p->position_personnage.y);
	    fscanf(saveF,"%d",&valeur_score);
	    fscanf(saveF,"%d",&v.val);
		fscanf(saveF,"%d",&nb_potion);
            fscanf(saveF,"%d:%d",&t.min,&t.sec);
}

    fclose(saveF); // Fermeture du fichier
}
