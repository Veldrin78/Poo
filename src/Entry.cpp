/**
 * Copyright © 2013, MonAlbumPhoto 
 * All Rights Reserved
 */
#include <Personnage.h>
#include <iostream>

int main(int argc, char const *argv[]) {
  Personnage david, goliath("Epee aiguisee", 20);
  // Création de 2 objets de type Personnage : david et goliath

  goliath.attaquer(david);  // goliath attaque david
  david.boirePotionDeVie(20);  // david récupère 20 de vie en buvant une potion
  goliath.attaquer(david);  // goliath réattaque david
  david.attaquer(goliath);  // david contre-attaque... c'est assez clair non ?
  goliath.changerArme("Double hache tranchante veneneuse de la mort", 40);
  goliath.attaquer(david);

  // Temps mort ! Voyons voir la vie de chacun...
  std::cout << "David" << std::endl;
  david.afficherEtat();
  std::cout << std::endl << "Goliath" << std::endl;
  goliath.afficherEtat();

  return 0;
}
