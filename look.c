#include "fonctions.h"

void		look(int salle)
{
  if (salle == 0)
    {
      my_putstr("Cette salle est vide, il n'y a rien a faire...\n");
    }

  if (salle == 1)
    {
      my_putstr("Vous avez descendu l'echelle. Cette salle est le coeur du labyrinthe. 4 chemins se dessinent devant vous. Vous avez peur.\n");
    }
}
