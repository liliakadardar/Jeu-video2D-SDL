#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "personne.c"
#include "background.c"
#include "update_score.c"
#include "vie.c"
#include "obstacle.c"
#include "temps.c"
//#include "enigme.c"
//#include "ennemi.c"

/*************************************************************INTEGRATION*************************************************************/


int main(int argc, char *argv[])
{

/*declarations des variables */

//menu m;
background bg;
score s; vie v; temps t;
personnage p; obstacle o1,o2,o3;
int touche=1;
int sens=0;

// les Enigmes 
//enigme e1,e2,e3,e4,e5,e6;
int done=0; // lorsqu'on clique sur le clavier 
/*
// Ennemis 
enemie en1,en2,en3;en4,en5,en6;
int ennemi1=0;
int ennemi2=0;
int ennemi3=0;
int ennemi4=0;
int ennemi5=0;
int ennemi6=0;*/


/*
int i=0;// Quand  le menu est dans son etat initiale : pas de clic sur aucun des boutons. 
//JEU 
int i=1; // lorsqu'on commence le jeu



	/* Declaration des SDLs */

SDL_Surface *ecran=NULL;
SDL_Rect *position_ecran;
SDL_Event event; 


/*---------------------------------------------------------------- INITIALISATION ---------------------------------------------------------------- */ 

// fenetre et ecran

 SDL_Init(SDL_INIT_VIDEO|SDL_INIT_TIMER);
 TTF_Init();
 SDL_EnableKeyRepeat(100,100); //Fonctions de la SDL permettant d'initialiser la fenêtre

    ecran = SDL_SetVideoMode(1600,600,32,SDL_HWSURFACE|SDL_DOUBLEBUF); 
    SDL_WM_SetCaption("Land Of Gargoyls", NULL);


// les fonctions 

//initialiser_menu(&m);
initialiser_background(&bg);
initialiser_personnage(&p);
initialiser_vie(&v);
initialiser_score(&s);
initialiser_temps(&t);
initialiser_obstacle1(&o1);
//initialiser_enigme(&e1);
//enigme
//
//initialiser_enigme(&e2);

/*
 // init ennemi 
initialiser_ennemi(&en1);  // l'ennemi 3andha nafess el .h au faite mais l'initialisation bich tetbadel khater el image..
initialiser_ennemi(&en2);
initialiser_ennemi(&en3);
initialiser_ennemi(&en4);
initialiser_ennemi(&en5);
initialiser_ennemi(&en6);*/

// init obstacle
/*
initialiser_obstacle(&o2);
initialiser_obstacle(&o3);*/

/*---------------------------------------------------------------- DISPLAY ----------------------------------------------------------------*/

// la boucle du jeu 
 //while (!done)
//{ 

/*if (i==0) // lorsqu'on est dans le menu
	{afficher_menu(m,ecran);}

if (i==1) // lorsq'on est dans le jeu
	{*/
afficher_background(&bg,ecran); 
afficher_personnage(&p,ecran);
afficher_score(&s,ecran);
afficher_vie(&v,ecran);
afficher_obstacle1(&o1,ecran);
/*afficher_obstacle(&o2,ecran);
afficher_obstacle(&o3,ecran);*/
//afficher_temps(&t,ecran);
//afficher_enigme(&e1,ecran);

// affichage de l'ennemi
/*
if (ennemi1==0)
{affiche_ennemi(&e1,ecran);}
 if (ennemi2==0)
{affiche_ennemi(&e2,ecran);}
 if (ennemi3==0)
{affiche_ennemi(&e3,ecran);}
 if (ennemi4==0)
{affiche_ennemi(&e4,ecran);}
 if (ennemi5==0)
{affiche_ennemi(&e5,ecran);}
 if (ennemi6==0)
{affiche_ennemi(&e6,ecran);}*/

// enigmeeeeeeeeeeeeeeeeeeeeeeeeee
// ici y a une condition 3al enigme bich yaffichi ou yaffichi el temps d'enigme pas encore resolu 
	//}

//done=1;
//}



/*---------------------------------------------------------------- INPUT + UPDATE ----------------------------------------------------------------*/



 // variable que lorsqu'on clique sur la touche elle nous indique le sens 
    
    while (touche)
    {
        while(SDL_PollEvent(&event))
        {
		
            switch(event.type)
            {
                case SDL_QUIT:
                touche=0;
                break;

                //les touches de clavier 
                case SDL_KEYDOWN: // touches enfoncées
                    switch (event.key.keysym.sym)
                    {
                    case SDLK_ESCAPE:  // echape 
                    touche = 0;
                    break;

                    case SDLK_RIGHT: // Flèche droite
                    
                   /* animation_right(&p); // animation personnage
                    scrolling_bg(sens,&bg,ecran); 
                    deplacement_clavier_right(&p,ecran); // deplacement personnage*/
                    break;

                    case SDLK_LEFT: // Flèche gauche
                    
                   /* animation_left(&p); // animation personnage 
                    scrolling_bg(sens,&bg,ecran); 
                    // l'appel a cette fct est sur la moitié de l'ecran avce une conditions
                    deplacement_clavier_left(&p); // deplacement personnage*/
                    break;

                    case SDLK_c: // touche permettant aux joeurs de se redonner 3 coeurs
                        
                        break;
                    case SDLK_z: // touche permettant aux joeurs de se donner 10 pièces
                        break;
                    case SDLK_a: 
                    break; // Touche d'attaque

                   }
                break;

                case SDL_KEYUP: // touches relachées
                switch (event.key.keysym.sym)
                {
                    case SDLK_ESCAPE:
                    touche= 0;
                    break;

                    case SDLK_RIGHT: 
                    break;

                    case SDLK_LEFT:    
                    break;

                    // avec la sourie 
                
                case SDL_MOUSEBUTTONDOWN :

                if(event.button.button == SDL_BUTTON_LEFT)
                    { /*sens=1;
                   deplacement_sourie(&p,sens,ecran);
                    animation_left(&p);*/
                    }
                else 
                    {/*sens=2;
                    deplacement_sourie(&p,sens,ecran);
                    animation_right(&p);*/
                    }
                break;
                 }   
            // ici je dois verifier avec l'enigme sinon il y a un evenement de l'enigme
               
              



}             
}
}


/************************************************************************************* FIN *************************************************************************************/

// derniere chose à faire 
SDL_Flip (ecran);

 // noublie pas ou le mettre 

free_temps(&t,ecran);
// liberation SDL
TTF_Quit();
SDL_Quit();
   
 return EXIT_SUCCESS;
}


