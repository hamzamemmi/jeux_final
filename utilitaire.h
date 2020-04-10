#ifndef UTILITAIRE_H_INCLUDED
#define UTILITAIRE_H_INCLUDED

typedef struct
{	SDL_Color couleur;
	SDL_Surface *texte;
	TTF_Font *police=NULL;
	SDL_Rect postexte;
}texte;
void initialiservie(texte *textevie);
void initialiserscore(texte *textescore);
void initialisertemps(texte *t);



#endif
