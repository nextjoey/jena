#include "fonctions.h"

t_weapon weaponList[NB_WEAPON] = {
  //Available, NAME, Attaque, Munition ulisee
  {1, "Mains", 1, 0},
  {0, "Pistolet Laser", 30, 1},
  {0, "Fusil a plasma", 40, 2}
};

// idem ici pour l'enemi
t_attack attackList[NB_ATTACK] = {
  {"Charge", 5},
  {"Melee", 7}
};

t_player jena[1]= {
  //lvl, hp, hp max, medicaments, munitions, tab d'armes
  {1, 100, 100, 0, 0, weaponList}
};

void	init_globales()
{
  /*VARIABLES GLOBALES*/
  ERREUR_PROMPT = 0;
  COMBI = 0;
  CARTE_ACCES = 0;
  CARTE_COM = 0;
  MUNI_ARMU = 16;
  MEDIC_RESE = 5;
  DIAG_S09A08 = 0;
  DIAG_S12A09 = 0;
  DIAG_S03A02 = 0;
  SCORE = 0;
  ARME_EQUIP = 0;
  DOUCHE_TAKEN = 0;
  QUISUISJE = 0;
/*FIN*/
}

/*MAP*/
t_map g_map[10][4] = {
  {
    {0, 7, {0,0,0,0}, 0, 0}, {1, 7, {0,0,1,0}, 0, 0}, {0, 7, {0,0,0,0}, 0, 0}, {0, 7, {0,0,0,0}, 0, 0}
  }, {
    {1, 7, {0,1,0,0}, 0, 0}, {1, 7, {1,1,1,1}, 0, 0}, {1, 7, {0,0,0,1}, 0, 0}, {0, 7, {0,0,0,0}, 0, 0}
  }, {
    {1, 7, {0,1,1,0}, 0, 0}, {1, 7, {1,1,0,1}, 0, 0}, {1, 7, {0,0,1,1}, 0, 0}, {0, 7, {0,0,0,0}, 0, 0}
  }, {
    {1, 7, {1,1,1,0}, 0, 0}, {1, 7, {0,1,1,1}, 0, 0}, {1, 7, {1,0,0,1}, 0, 0}, {0, 7, {0,0,0,0}, 0, 0}
  }, {
    {1, 7, {1,0,0,0}, 0, 0}, {1, 7, {1,0,1,0}, 0, 0}, {0, 7, {0,0,0,0}, 0, 0}, {0, 7, {0,0,0,0}, 0, 0}
  }, {
    {1, 7, {0,1,1,0}, 0, 0}, {1, 7, {1,1,1,1}, 0, 0}, {1, 7, {0,0,1,1}, 0, 0}, {0, 7, {0,0,0,0}, 0, 0}
  }, {
    {1, 7, {1,0,1,0}, 0, 0}, {1, 7, {1,0,1,0}, 0, 0}, {1, 7, {1,0,0,0}, 0, 0}, {0, 7, {0,0,0,0}, 0, 0}
  }, {
    {1, 7, {1,0,0,0}, 0, 0}, {1, 7, {1,0,1,0}, 0, 0}, {0, 7, {0,0,0,0}, 0, 0}, {0, 7, {0,0,0,0}, 0, 0}
  }, {
    {0, 7, {0,0,0,0}, 0, 0}, {1, 7, {1,1,1,0}, 0, 0}, {1, 7, {0,0,1,1}, 0, 0}, {0, 7, {0,0,0,0}, 0, 0}
  }, {
    {0, 7, {0,0,0,0}, 0, 0}, {1, 7, {1,1,0,0}, 0, 0}, {1, 7, {1,0,0,1}, 0, 0}, {0, 7, {0,0,0,0}, 0, 0}
  }
};
