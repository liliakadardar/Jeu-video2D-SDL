#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "fonction.h"
#include "fonction.c"

SDL_Surface  *Menu_anime[500];
menu m;

void initialiserAnimMenu()
{
 int i=0;
 char menu[500];
 for (i=0;i<199;i++)
 {
 sprintf(menu,"animation/%d.png",i);
 Menu_anime[i]=IMG_Load(menu);
 
 
 }
}
void libererAnimMenu()
{
 int i=0;

 for (i=0;i<199;i++)
 {
 SDL_FreeSurface(Menu_anime[i]);
 
 
 }
}
void animationBackMenu(int *i)
{
if ((*i)==199)
  (*i)=0;
 
if ( (*i)<=199)
{
(*i)++;

					SDL_BlitSurface(Menu_anime[*i],NULL,m.screen,&m.menu_anime);
						
}
}

int main()
{
//menu animation
SDL_Surface  *Menu_anime[500];

int now=0 , ex=0 , fps=20, dt=0 ;
int i=0;

float curseur=0;



m.running=1;

//init

SDL_Init(SDL_INIT_EVERYTHING);

//icon
SDL_WM_SetIcon (IMG_Load("./outil/image/logo.png"),NULL);

//creation tout
create(&m);

// mouse compatible
m.mouse=NULL;
m.mouse=IMG_Load("./outil/image/pointeur.png");

//dimunition des volume music
Mix_VolumeMusic(MIX_MAX_VOLUME / 2);
Mix_PlayMusic(m.music,-1);
//cursor maybnech
SDL_ShowCursor(SDL_DISABLE);
initialiserAnimMenu();
 //bouclee fo 
 for(i=0;i<=100;i++)
  {animationBackMenu(&i);
  SDL_Flip(m.screen);}
  int menu=1;
 
 
int done=1;
while (done)
{

if(menu==1)
{
animationBackMenu(&i);
blitSurface(&m);
SDL_BlitSurface(m.mouse,NULL,m.screen,&m.mouse_rect);

					//tous les evenment
while(SDL_PollEvent (&m.event))
{
if(menu==1)
{
event(&m);
}

}
if(menu==1)
{
update(&m,curseur);
}

SDL_Flip(m.screen);
}
}




libererAnimMenu();
freeSurface(&m);
Mix_FreeChunk(m.effect);
Mix_FreeMusic(m.music);
Mix_CloseAudio();

TTF_Quit();
SDL_Quit();
}
