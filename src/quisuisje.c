#include "fonctions.h"

void		quisuisje()
{
  if (QUISUISJE == 0)
    {
      my_putstr("\nSi seulement je savais qui je suis, je vous le dirai !\n");
      my_putstr("Tout ce que je sais c'est que je suis une survivante perdue dans un vaisseau...\n");
      my_putstr("Et j'attends les secours... S'ils viennent un jour !\n\n");
    }
  else if (QUISUISJE == 1)
    {
      my_putstr("\nJe pense que je suis le commandant du vaisseau...\n");
      my_putstr("Je pense etre (pour l'instant) l'unique survivante du crash.\n");
      my_putstr("J'attends les secours... S'ils viennent un jour !\n\n");
    }
}
