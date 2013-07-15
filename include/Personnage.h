/**
 * Copyright © 2013, MonAlbumPhoto 
 * All Rights Reserved
 */
#ifndef POO_PERSONNAGE_H
#define POO_PERSONNAGE_H

#include <Arme.h>
#include <string>

class Personnage {
  public:
  void recevoirDegats(int nbDegats);
  void attaquer(Personnage &cible);
  void boirePotionDeVie(int quantitePotion);
  void changerArme(
    std::string nomNouvelleArme, int degatsNouvelleArme);
  bool estVivant() const;
  void afficherEtat() const;
  Personnage();
  Personnage(std::string nomArme, int degatsArme);
  ~Personnage();  // Destructeur

  // Constructeur de copie
  explicit  Personnage(Personnage const& personnageACopier);

  // Operateur=
  Personnage& operator=(Personnage const& personnageACopier);

  private:
  Arme *m_arme;
  int m_vie;
  int m_mana;
};

#endif
