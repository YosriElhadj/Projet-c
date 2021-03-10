#ifndef MENU_H_
#define MENU_H_
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
typedef struct
{
	SDL_Surface *perso[10];
	int compteur;
	SDL_Rect position_perso;
	int vie;
	int score;
}person;

