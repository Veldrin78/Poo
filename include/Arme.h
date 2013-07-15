/**
 * Copyright © 2013, MonAlbumPhoto 
 * All Rights Reserved
 */

#ifndef POO_ARME_H
#define POO_ARME_H

#include <string>

class Arme {
  public:
  Arme();
  Arme(std::string nom, int degats);
  void changer(std::string nom, int degats);
  void afficher() const;
  int getDegats() const;

  private:
  std::string m_nom;
  int m_degats;
};

#endif
