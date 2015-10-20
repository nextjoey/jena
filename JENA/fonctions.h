#ifndef __HERO_H__
#define __HERO_H__
#define MAP_X 4
#define MAP_Y 10
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


/*Pour remplacer les globales :*/
#include <string.h>

/*USER*/
char*		USER;
int		SCORE;

/*VARIABLES GLOBALES KEY*/
int		COMBI;
int		CARTE_ACCES;
int		CARTE_COM;

/*VARIABLES GLOBALES ITEMS DANS LA MAP*/
int		MEDIC_RESE;

/*VARIABLES GLOBALES DE DIALOGUE*/
int		DIAG_S12A09;
int		DIAG_S09A08;


typedef struct s_arme
{
  int           available;
  int           attack;
  char          *name;
  char          *description;
}               t_arme;

typedef struct s_player
{
  int           lvl;
  int           pv;
  int           pvmax;
  //  t_tete        casque;
  //t_corps       plastron;
  //t_jambes      jambiere;
  //t_pied        chaussure;
  t_arme        armePrincipale;
  t_arme        armes[10];
  int           medicaments;
}   		t_player;

t_player*       init_globales(t_player *player);
char            *readLine_code();
void            erreur_prendre();
void            quisuisje();
void            salle01(int salle, t_player *player);
void            salle02(int salle, t_player *player);
void            salle03(int salle, t_player *player);
void            salle04(int salle, t_player *player);
void            salle05(int salle, t_player *player);
void            salle06(int salle, t_player *player);
void            salle07(int salle, t_player *player);
void            salle08(int salle, t_player *player);
void            salle09(int salle, t_player *player);
void            salle10(int salle, t_player *player);
void            salle11(int salle, t_player *player);
void            salle12(int salle, t_player *player);
void            salle13(int salle, t_player *player);
void            salle14(int salle, t_player *player);
void            salle15(int salle, t_player *player);
void            salle16(int salle, t_player *player);
void            salle17(int salle, t_player *player);
void            salle18(int salle, t_player *player);
void            salle19(int salle, t_player *player);
void            salle20(int salle, t_player *player);
void            salle21(int salle, t_player *player);
void            salle22(int salle, t_player *player);
void            salle23(int salle, t_player *player);
void            salle24(int salle, t_player *player);
void            spawn(int salle, t_player *player);
int             comparer(char* entree, int salle, t_player *player);
void            erreur_depla(int salle);
void            my_putstr(char* str);
void            my_putchar(char c);
void    	my_putnbr(int n);
int             isnegatif(int n);
int             readline(int salle, t_player *player);
char             *readline_prendre();
char		*readLine();
int             my_strcmp(char *s1, char *s2);
char            *my_strcpy(char *dest, char *src);
void            suspens();
void            accueil(t_player *player);
void            help();
void            gameover();
void    	show_map();
void            look(int salle);
int             my_strlen(char* str);
void            fouiller(int salle);
int		prendre(int salle, t_player *player);
void            score();

typedef struct s_tete
{
  char nom_obj;
  int def;
} t_tete;

typedef struct s_corps
{
  char nom_obj;
  int def;
} t_corps;

typedef struct s_jambes
{
  char nom_obj;
  int def;
} t_jambes;

typedef struct s_pied
{
  char nom_obj;
  int def;
} t_pied;

typedef struct s_inventaire
{
  char nom_obj;
  void *prev;
  void *next;
} t_inventaire;


typedef struct s_map
{
  int	exist;
  int	size_x;
  int	links[4];
  int	content;
  int	visited;
} t_map;

/*eauiper arme 1;*/

/*equiper main : t_player->mainWeapon = t_player->weapons[1];*/


#endif
