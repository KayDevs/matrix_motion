#ifndef ENTITY_H
#define ENTITY_H
#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <SDL2/SDL.h>

//module for managing the entities + handling their events
typedef struct entity Entity;
void init_entities();
void dispatch_events(SDL_Event e);
void update_components();
void free_entities(List *entities);

Entity *new_entity(char *name, SDL_Renderer *renderer, int x, int y);
void draw_entity(Entity *ent, SDL_Renderer *renderer);

#endif
