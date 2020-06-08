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
#include "ennemi.c"
#include "potion.c"

//#include "save.c"
//#include "collision.c"
//#include "enigme.c"


/*************************************************************  INTEGRATION  *************************************************************/


int main(int argc, char *argv[])
{

/*declarations des variables */

//menu m;
background bg; temps t;
score s; vie v; int valeur_score=0; 
/*potion pt0,pt1,pt2;
potion1 pt4,pt5,pt6,pt7;
potion2 pt3,pt8,pt9;*/
personnage p; obstacle o1,o2,o3; //collision c;
int touche=1; 
int sens=0;
// les Enigmes 
//enigme e1,e2,e3,e4,e5,e6;
int done=0; // lorsqu'on clique sur le clavier 

// Ennemis 
ennemi en1,en2;
/*int ennemi1=0;
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
initialiser_temps(&t);
initialiser_vie(&v);
initialiser_score(valeur_score,&s);

initialiser_obstacle1(&o1);
initialiser_obstacle2(&o2);
initialiser_obstacle3(&o3);

initialiser_ennemi1(&en1);
initialiser_ennemi2(&en2);

initialiser_potion();


//enigme
//initialiser_enigme(&e1);
//initialiser_enigme(&e2);






/*---------------------------------------------------------------- DISPLAY ----------------------------------------------------------------*/

// la boucle du jeu 
 while (!done)
{ 

/*if (i==0) // lorsqu'on est dans le menu
	{afficher_menu(m,ecran);}

if (i==1) // lorsq'on est dans le jeu
	{*/
afficher_background(bg,ecran);
 
afficher_obstacle1(o1,ecran);
afficher_obstacle2(o2,ecran);
afficher_obstacle3(o3,ecran);

afficher_ennemi1(en1,ecran);
afficher_ennemi2(en2,ecran);
afficher_potion(ecran);

afficher_personnage(p,ecran);

afficher_score(&s,ecran,&p,&valeur_score);
afficher_vie(v,ecran);
afficher_temps(&t,ecran);

//afficher_enigme(e1,ecran);
// enigmeeeeeeeeeeeeeeeeeeeeeeeeee
// ici y a une condition 3al enigme bich yaffichi ou yaffichi el temps d'enigme pas encore resolu 
	//}


/*---------------------------------------------------------------- INPUT + UPDATE ----------------------------------------------------------------*/


int clic=0;
 // variable que lorsqu'on clique sur la touche elle nous indique le sens 
    
        while(SDL_PollEvent(&event))
        {
		
            switch(event.type)
            {
                case SDL_QUIT:
                done=1;
                break;

                //les touches de clavier 
                case SDL_KEYDOWN: // touches enfoncées
                    switch (event.key.keysym.sym)
                    {
                    case SDLK_ESCAPE:  // echape 
                    done = 1;
                    break;

                    case SDLK_LEFT: // Flèche droite
                     clic=1;
                    break;

                    case SDLK_RIGHT: // Flèche gauche
                        clic=2;
                    break;

                    case SDLK_UP: // Flèche bas 
                        clic=3;
                    break;

                    case SDLK_DOWN: // Flèche haut
                        clic=4;
                    break;
                    
                    // Touche d'attaque clic sur "espace"
                    case SDLK_SPACE: 
                    clic=5;
                    break; 
                    // Touche pour slide:glisser clic sur "0"
                    case SDLK_RETURN: 
                    clic=6;
                    break; 

                    // option pour le joueur
                    case SDLK_s: 
                        clic=7;
                        break;
                    case SDLK_e: 
			clic=9;
                        break;

                   case SDLK_a:
			clic=8; 
                        break;
			case SDLK_p: 
			clic=12;
                        break;
                   }
                break;

                    // touche de la sourie 
                
                case SDL_MOUSEBUTTONDOWN :

                if(event.button.button == SDL_BUTTON_LEFT)
                    { clic=1;}
                else if(event.button.button == SDL_BUTTON_RIGHT)
                    {clic=2;}
                    
		        else if (event.button.button== SDL_BUTTON_WHEELUP)
		          {clic=3;}
                else if (event.button.button == SDL_BUTTON_WHEELDOWN)
		          {clic=4;}
              
			     break;
                 }   
              

}     
  /*---------------------------------------------------------------- UPDATE ----------------------------------------------------------------*/
      
if (clic!=0)
//if ((p.position_personnage.x)>800) 
{
/*deplacement du personnage */
deplacement_clavier(&p,clic);
deplacement_sourie(&p,clic);
Evolue(&p,clic);

scrolling_bg(clic,&bg);

/*--- animations Ennemis---*/
animation_droite (&en1);
SDL_Delay(80);
animation_droite2 (&en2);
SDL_Delay(80);

// pour faire rouler les entites au meme temps avec le scrolling du perso 
scroll_ennemi(clic,&en1);
scroll_ennemi2(clic,&en2);
scroll_obstacle(clic,&o1);
scroll_obstacle2(clic,&o2);
scroll_obstacle3(clic,&o3);

/* POTIONS */
scroll_potion0(clic, &pt0);
scroll_potion1(clic,&pt1);
scroll_potion2(clic, &pt2);
scroll_potion3(clic,&pt3);
scroll_potion4(clic, &pt4);
scroll_potion5(clic, &pt5);
scroll_potion6(clic,&pt6);
scroll_potion7(clic, &pt7);
scroll_potion8(clic,&pt8);
scroll_potion9(clic, &pt9);
}
printf("pos:%d\n",p.position_personnage.x );
if( collision_potion(&p,pt0)==1)
printf("hey collision0" );
if( collision_potion(&p,pt1)==1)
printf("hey collision1" );
if( collision_potion(&p,pt2)==1)
printf("hey collision2" );
if( collision_potion(&p,pt3)==1)
printf("hey collision3" );
if( collision_potion(&p,pt4)==1)
printf("hey collision4" );
if( collision_potion(&p,pt5)==1)
printf("hey collision5" );
if( collision_potion(&p,pt6)==1)
printf("hey collision6" );
if( collision_potion(&p,pt7)==1)
printf("hey collision7" );
if( collision_potion(&p,pt8)==1)
printf("hey collision8" );
if( collision_potion(&p,pt9)==1)
printf("hey collision9" );





//printf("score :%d\n",valeur_score);
//gestion_vies(&v,&p);


/*--------FLIP------*/
SDL_Flip (ecran);
}

/*----------------------------------------------------------------  FIN  ----------------------------------------------------------------*/
free_temps(&t,ecran);
free_score(s);
 //vie_freevie(v ) ;
//save (p.position_personnage.x,p.position_personnage.y,s.score);
//load (p.position_personnage.x,p.position_personnage.y,s.score);

// liberation SDL
TTF_Quit();
SDL_Quit();
   
 return EXIT_SUCCESS;
}


