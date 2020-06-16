#ifndef FONCTIONS_H_
#define FONCTIONS_H_
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>





typedef struct menu
{
	//screen
	SDL_Surface* screen;
	SDL_Rect screen_rect;
	//event
	SDL_Event event;
	//start
	SDL_Surface *start;
	SDL_Rect start_pos;
	//paysage
	SDL_Surface *bg;
	//settings
	SDL_Surface *settings;
	SDL_Rect settings_pos;

	//credits
	SDL_Surface *credits;
	SDL_Rect credits_pos;
	//exit
	SDL_Surface *exit;
	SDL_Rect exit_pos;

	// rect animation et affichage

	SDL_Rect menu_anime;
	//changer vers settings
	SDL_Surface *changetosettings;
	SDL_Rect changetosettings_rect;
	//tick
	SDL_Surface *tick;
	SDL_Rect tick_rect;
	//logo
	SDL_Surface *logo;
	SDL_Rect logo_rect;
	//souris
	SDL_Surface* mouse;
	SDL_Rect mouse_rect;
	//music
	Mix_Music *music;
	//effet music
	Mix_Chunk* effect;
	Mix_Chunk* effectclick;
	int running;
} menu;

void create (menu *menu);
void update (menu *menu, float curseur);
void event(menu *menu);
void blitSurface(menu *menu);
void freeSurface(menu *menu);
#endif /* FONCTIONS_H_ */
