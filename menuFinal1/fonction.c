#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "fonction.h"


	/***************************************************************** Les fonctions********************************************************************/



/*********** CHARGEMENT DES VARIABLES *********/


void create (menu*menu)
{ 

	/* titre du jeu */
    SDL_WM_SetCaption("~~~ STONE AGE ~~~",NULL);
    	
	//chargement de la surface/fenetre 
   menu->screen=NULL;
    menu->screen=SDL_SetVideoMode(1200,800, 32,SDL_HWSURFACE | SDL_RESIZABLE);
    
// background 
    menu->bg=NULL;
    menu->bg=IMG_Load("./animation/198.png");

//taswira kif tenzel 3al settings to5rej  

    menu->changetosettings=NULL;
  menu->changetosettings= IMG_Load("./outil/image/settings.png");
 
// chargement des variables 
   menu->tick=NULL;
    menu->tick=IMG_Load("./outil/image/tickwindow.png");
    menu->logo=NULL;
    menu->logo=IMG_Load("./outil/image/logo.png");
    menu->logo_rect.y=291;
    menu->logo_rect.x=331;

	/*chargement des boutons*/
    menu->start=NULL;
    menu->start=IMG_Load("./outil/boutons/start.png");

    menu->settings=NULL;
    menu->settings=IMG_Load("./outil/boutons/settings.png");

    menu->credits=NULL;
    menu->credits=IMG_Load("./outil/boutons/credits.png");

    menu->exit=NULL;
    menu->exit=IMG_Load("./outil/boutons/exit.png");


//les positions 
    menu->start_pos.x=20;
    menu->start_pos.y=200;

    menu->settings_pos.x=20;
    menu->settings_pos.y=300;

    menu->credits_pos.x=20;
    menu->credits_pos.y=400;

    menu->exit_pos.x=20;
    menu->exit_pos.y=500;

    menu->changetosettings_rect.x=0;
    menu->changetosettings_rect.y=0;

    menu->menu_anime.x=0;
    menu->menu_anime.y=0;

    menu->tick_rect.x=0;
    menu->tick_rect.y=0;



 
if(Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024) == -1)
    {
        printf("%s", Mix_GetError());
    }

    menu->music=Mix_LoadMUS("./outil/music/music.mp3");
    menu->effect = Mix_LoadWAV("./outil/music/beep.wav");
    menu->effectclick= Mix_LoadWAV("./outil/music/wood.wav");

}

/************************************UPDATE******************************************/


void update (menu *menu, float curseur)
{
    static int i=0;
    i++;
   // printf("frame %d curseur %.1f\n",i,curseur);
}
static int changer_settings=0;


/*************************** CREATION DES EVENEMENTS **********************************/


void event (menu*menu)
{
    static int key=5;
    static int new=0;
    static int con=0;
    static int qui=0;
    static int set=0;
    static int haha=0;
    int clickc=0;
    int clickn=0;
    int clicks=0;
    static int clickq=0;
    static int mouvementdevoulume=5;
    SDL_WaitEvent(&menu->event);

    switch(menu->event.type)
    {
    case SDL_QUIT:
        menu->running=0;
        break;
    case SDL_KEYDOWN:
    {
        switch(menu->event.key.keysym.sym)
        {
        case SDLK_ESCAPE:
            menu->running=0;
            break;
        case SDLK_RETURN:
        {
            if (key==4)

            {
                menu->running=0;
            }


            if (key==3)

            {
                changer_settings=1;
            }
            if (key==3)

            {
                          }
        }
        break;
        if (changer_settings==1)
        {
            case SDLK_BACKSPACE:
            {
                changer_settings=0;
            }
            break;
            case SDLK_KP_PLUS:
            {
                if (mouvementdevoulume!=6)
                {
                    mouvementdevoulume++;
                }
                printf("%d\n",mouvementdevoulume );
                switch (mouvementdevoulume)
                {
                case 1:
                {
                    menu->logo_rect.x+=25;
                    Mix_VolumeMusic(MIX_MAX_VOLUME / 7);
                }
                break;
                case 2:
                {
                    Mix_ResumeMusic();
                    menu->logo_rect.x+=25;
                    Mix_VolumeMusic(MIX_MAX_VOLUME / 6);
                }
                break;
                case 3:
                {
                    menu->logo_rect.x+=25;
                    Mix_VolumeMusic(MIX_MAX_VOLUME / 5);
                }
                break;

                case 4:
                {
                    menu->logo_rect.x+=25;
                    Mix_VolumeMusic(MIX_MAX_VOLUME /4);
                }
                break;

                case 5:
                {
                    menu->logo_rect.x+=25;
                    Mix_VolumeMusic(MIX_MAX_VOLUME / 2);
                }
                break;
                }
            }
            break;
            case SDLK_KP_MINUS:
            {
                if (mouvementdevoulume==6)
                {
                    mouvementdevoulume=5;
                }
                mouvementdevoulume--;
                printf("%d\n",mouvementdevoulume );
                switch (mouvementdevoulume)
                {
                case 4:
                {
                    menu->logo_rect.x-=25;
                    Mix_VolumeMusic(MIX_MAX_VOLUME / 4);
                }
                break;
                case 3:
                {
                    menu->logo_rect.x-=25;
                    Mix_VolumeMusic(MIX_MAX_VOLUME / 5);
                }
                break;
                case 2:
                {
                    menu->logo_rect.x-=25;
                    Mix_VolumeMusic(MIX_MAX_VOLUME / 6);
                }
                break;
                case 1:
                {
                    menu->logo_rect.x-=25;
                    Mix_PauseMusic();

                }
                break;
                default:
                    mouvementdevoulume=1;
                    break;
                }
            }
            break;
        }
        case SDLK_UP:
        {
            if(key==1)
            {
                key=5;
            }
            key--;
            printf("%d\n",key );

            switch (key)
            {
            case 1:
            {
                Mix_PlayChannel(1,menu->effect,0);
                menu->start=IMG_Load("./outil/boutons/start1.png");
                menu->settings=IMG_Load("./outil/boutons/settings.png");
                SDL_Delay(80);
            }
            break;
            case 2:
            {
                Mix_PlayChannel(1,menu->effect,0);
                menu->settings=IMG_Load("./outil/boutons/settings1.png");
                menu->credits=IMG_Load("./outil/boutons/credits.png");
                SDL_Delay(80);
            }
            break;
            case 3:
            {
                Mix_PlayChannel(1,menu->effect,0);
                menu->credits=IMG_Load("./outil/boutons/credits1.png");
                menu->exit=IMG_Load("./outil/boutons/exit.png");
                SDL_Delay(80);
            }
            break;
            case 4:
            {
                Mix_PlayChannel(1,menu->effect,0);
                menu->exit=IMG_Load("./outil/boutons/exit1.png");
                menu->start=IMG_Load("./outil/boutons/start.png");
                SDL_Delay(80);
            }
            break;
            }
        }
        break;
        case SDLK_f:
        {
            menu->screen=SDL_SetVideoMode(1220,720,32,SDL_HWSURFACE|SDL_FULLSCREEN|SDL_RESIZABLE);
            menu->tick=IMG_Load("./outil/image/tickfullscreen.png");
            Mix_PlayChannel(1,menu->effectclick,0);
            SDL_ShowCursor(SDL_ENABLE);
        }
        break;
        case SDLK_w:
        {
            SDL_ShowCursor(SDL_DISABLE);
            menu->tick=IMG_Load("./outil/image/tickwindow.png");
            Mix_PlayChannel(1,menu->effectclick,0);
            menu->screen=SDL_SetVideoMode(800,600,32,SDL_HWSURFACE|SDL_RESIZABLE);
        }
        break;
        case SDLK_DOWN:
        {
            if (( key>=4) )
            {
                key=0;
            }
            key++;
            printf("%d\n",key );
            switch (key)
            {
            case 1:
            {
                menu->start=IMG_Load("./outil/boutons/start1.png");
                menu->exit=IMG_Load("./outil/boutons/exit.png");
                Mix_PlayChannel(1,menu->effect,0);
                SDL_Delay(80);
            }
            break;
            case 2:
            {
                menu->start=IMG_Load("./outil/boutons/start.png");
                menu->settings=IMG_Load("./outil/boutons/settings1.png");
                Mix_PlayChannel(1,menu->effect,0);
                SDL_Delay(80);
            }
            break;
            case 3:
            {
                menu->settings=IMG_Load("./outil/boutons/settings.png");
                menu->credits=IMG_Load("./outil/boutons/credits1.png");
                Mix_PlayChannel(1,menu->effect,0);
                SDL_Delay(80);
            }
            break;
            case 4:
            {
                menu->exit=IMG_Load("./outil/boutons/exit1.png");
                menu->credits=IMG_Load("./outil/boutons/credits.png");
                Mix_PlayChannel(1,menu->effect,0);
                SDL_Delay(80);
            }
            break;
            }
        }
        break;
        default:
            break;
        }
    }
    break;

    case SDL_MOUSEMOTION:
    {
        menu->mouse_rect.x=menu->event.motion.x-50;
        menu->mouse_rect.y=menu->event.motion.y-50;
        if (changer_settings==0)
        {

		// start
            
	if (( menu->event.motion.x>20)&&( menu->event.motion.x<300 )&&( menu->event.motion.y>200)&&( menu->event.motion.y<280))
            {
                menu->start=IMG_Load("./outil/boutons/start1.png");
                if (con==0)
                {
                    Mix_PlayChannel(1,menu->effect,0);
                    con++;
                }
            }
            else
            {
                con=0;
                menu->start=IMG_Load("./outil/boutons/start.png");
            }
            
		//settings
	if (( menu->event.motion.x>20  )&&( menu->event.motion.x<300)&&( menu->event.motion.y>300)&&( menu->event.motion.y<380 ))
            {
                menu->settings=IMG_Load("./outil/boutons/settings1.png");
                if (new==0)
                {
                    Mix_PlayChannel(1,menu->effect,0);
                    new++;
                }
            }
            else
            {
                new=0;
                menu->settings=IMG_Load("./outil/boutons/settings.png");
            }

            //credits
            if (( menu->event.motion.x>20 )&&( menu->event.motion.x<300)&&( menu->event.motion.y>400)&&( menu->event.motion.y<480))
            {
                menu->credits=IMG_Load("./outil/boutons/credits1.png");
                if (set==0)
                {
                    Mix_PlayChannel(1,menu->effect,0);
                    set++;
                }
            }
            else
            {
                set=0;
                menu->credits=IMG_Load("./outil/boutons/credits.png");
            }
            //exit
            if (( menu->event.motion.x>20)&&( menu->event.motion.x<300)&&( menu->event.motion.y>500)&&( menu->event.motion.y<580 ))
            {
                menu->exit=IMG_Load("./outil/boutons/exit1.png");
                if (qui==0)
                {
                    Mix_PlayChannel(1,menu->effect,0);
                    qui++;
                }
            }
            else
            {
                qui=0;
                menu->exit=IMG_Load("./outil/boutons/exit.png");
            }
        }
    }
    break;
    case SDL_MOUSEBUTTONDOWN:
    {
        //clique
        if (menu->event.button.button== SDL_BUTTON_LEFT)
        {
            if (changer_settings==0)
            {
                if (( menu->event.motion.x>20)&&( menu->event.motion.x<157)&&( menu->event.motion.y>200)&&( menu->event.motion.y<280 ))
                {
                    menu->running=0;
                    Mix_PlayChannel(1,menu->effectclick,0);
                }
            }
            if (changer_settings==1)
            {
                if (( menu->event.motion.x>20 )&&( menu->event.motion.x<50)&&( menu->event.motion.y>397)&&( menu->event.motion.y<423 ))
                {
                    SDL_ShowCursor(SDL_DISABLE);
                    menu->tick=IMG_Load("./outil/image/tickwindow.png");

                    Mix_PlayChannel(1,menu->effectclick,0);
                    menu->screen=SDL_SetVideoMode(800,600,32,SDL_HWSURFACE|SDL_RESIZABLE);
                }
                if (( menu->event.motion.x>341  )&&( menu->event.motion.x<367 )&&( menu->event.motion.y>359)&&( menu->event.motion.y<384 ))
                {
                    menu->screen=SDL_SetVideoMode(1220,720,32,SDL_HWSURFACE|SDL_FULLSCREEN|SDL_RESIZABLE);
                    menu->tick=IMG_Load("./outil/image/tickfullscreen.png");

                    Mix_PlayChannel(1,menu->effectclick,0);
                    SDL_ShowCursor(SDL_ENABLE);

                }
                if (( menu->event.motion.x>214   )&&( menu->event.motion.x<265 )&&( menu->event.motion.y>438)&&( menu->event.motion.y<466 ))
                {
                    Mix_PlayChannel(1,menu->effectclick,0);
                    changer_settings=0;
                }
            }
            if (( menu->event.motion.x>20 )&&( menu->event.motion.x<50)&&( menu->event.motion.y>376 )&&( menu->event.motion.y<396 ))
            {
                changer_settings=1;
                Mix_PlayChannel(1,menu->effectclick,0);
            }
        }
        //volume
        if (menu->event.button.button== SDL_BUTTON_WHEELUP)
        {
            if (mouvementdevoulume!=6)
            {
                mouvementdevoulume++;
            }
            printf("%d\n",mouvementdevoulume );
            switch (mouvementdevoulume)
            {
            case 1:
            {
                menu->logo_rect.x+=25;
                Mix_VolumeMusic(MIX_MAX_VOLUME / 7);
            }
            break;
            case 2:
            {
                Mix_ResumeMusic();
                menu->logo_rect.x+=25;
                Mix_VolumeMusic(MIX_MAX_VOLUME / 6);
            }
            break;
            case 3:
            {
                menu->logo_rect.x+=25;
                Mix_VolumeMusic(MIX_MAX_VOLUME / 5);
            }
            break;
            case 4:
            {
                menu->logo_rect.x+=25;
                Mix_VolumeMusic(MIX_MAX_VOLUME /4);
            }
            break;
            case 5:
            {
                menu->logo_rect.x+=25;
                Mix_VolumeMusic(MIX_MAX_VOLUME / 2);
            }
            break;
            }
        }
        if (menu->event.button.button== SDL_BUTTON_WHEELDOWN)
        {
            if (mouvementdevoulume==6)
            {
                mouvementdevoulume=5;
            }
            mouvementdevoulume--;
            printf("%d\n",mouvementdevoulume );
            switch (mouvementdevoulume)
            {
            case 4:
            {
                menu->logo_rect.x-=25;
                Mix_VolumeMusic(MIX_MAX_VOLUME / 4);
            }
            break;
            case 3:
            {
                menu->logo_rect.x-=25;
                Mix_VolumeMusic(MIX_MAX_VOLUME / 5);
            }
            break;
            case 2:
            {
                menu->logo_rect.x-=25;
                Mix_VolumeMusic(MIX_MAX_VOLUME / 6);
            }
            break;
            case 1:
            {
                menu->logo_rect.x-=25;
                Mix_PauseMusic();
            }
            break;
            default:
                mouvementdevoulume=1;
                break;
            }
        }
    }
    break;
    default:
        break;
    }
}


// cette fonction elle permet de coller les boutons sur l'ecran autrement dit  d'afficher les boutons 
void blitSurface (menu*menu)
{
    //SDL_BlitSurface(menu->bg,NULL,menu->screen,&menu->menu_anime);
    if (changer_settings==1)
    {
        //changer vers settings
        SDL_BlitSurface(menu->changetosettings,NULL,menu->screen,&menu->changetosettings_rect);
        //tick
        SDL_BlitSurface(menu->tick,NULL,menu->screen,&menu->tick_rect);
        //logo
        SDL_BlitSurface(menu->logo,NULL,menu->screen,&menu->logo_rect);
    }
    if(changer_settings==0)
    {
        //exit
        SDL_BlitSurface(menu->exit,NULL,menu->screen,&menu->exit_pos);
        //credits
        SDL_BlitSurface(menu->credits,NULL,menu->screen,&menu->credits_pos);
        //settings
        SDL_BlitSurface(menu->settings,NULL,menu->screen,&menu->settings_pos);
        //start
        SDL_BlitSurface(menu->start,NULL,menu->screen,&menu->start_pos);
    }
}

void freeSurface(menu*menu)
{
    SDL_FreeSurface(menu->logo);
    SDL_FreeSurface(menu->tick);
    SDL_FreeSurface(menu->changetosettings);
    SDL_FreeSurface(menu->bg);
    SDL_FreeSurface(menu->mouse);
    SDL_FreeSurface(menu->credits);
    SDL_FreeSurface(menu->exit);
    SDL_FreeSurface(menu->settings);
    SDL_FreeSurface(menu->start);
}
