#include "fonctions.h"

void		spawn(int salle)
{
  int		action;
  
  action = 0;
  look(salle);
  while (action == 0)
    {
      /*On propose ici le prompt au joueur*/
      action = readline(salle);
      /*Traitement de laction :*/
      if ((action >= 1) && (action <= 5))
	{
	  erreur_depla(salle);
	  action = 0;
	}
      else if (action == 6)
	{
	  salle = 1;
	  salle01(salle);
	}
      else
	/*A RETIRER*/
	my_putstr("Erreur");
 
   }
}
