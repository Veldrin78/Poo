/**
 * Copyright © 2013, MonAlbumPhoto 
 * All Rights Reserved
 */
#include <Personnage.h>
#include <iostream>

using std::string;

  void Personnage::recevoirDegats(int nbDegats) {
    // On enleve le nombre de dégats de la vie du personnage
    m_vie -= nbDegats;

    if (m_vie < 0) {  // Pour éviter d'avoir une vie négative
      m_vie = 0;  // On met la vie à 0 (mort)
    }
  }

  void Personnage::attaquer(Personnage &cible) {
    cible.recevoirDegats(m_arme->getDegats());
    // On inflige à la cible les dégâts que cause notre arme
  }

  void Personnage::boirePotionDeVie(int quantitePotion) {
    m_vie += quantitePotion;

    if (m_vie > 100) {  // Interdiction de dépasser 100 de vie
      m_vie = 100;
    }
  }

  void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme) {
    m_arme->changer(nomNouvelleArme, degatsNouvelleArme);
  }

  bool Personnage::estVivant() const {
    if (m_vie > 0) {
      return true;
    } else {
      return false;
    }
  }

  void Personnage::afficherEtat() const {
    std::cout << "Vie : " << m_vie << std::endl;
    std::cout << "Mana : " << m_mana << std::endl;
    m_arme->afficher();
  }

  Personnage::Personnage() : m_arme(0), m_vie(100), m_mana(100) {
    m_arme = new Arme();
  }

  Personnage::Personnage(std::string nomArme, int degatsArme) :
  m_arme(0), m_vie(100), m_mana(100) {
    m_arme = new Arme(nomArme, degatsArme);
  }

  Personnage::~Personnage() {
    delete m_arme;
  }

  Personnage::Personnage(Personnage const& personnageACopier) :
  m_arme(0), m_vie(personnageACopier.m_vie), m_mana(personnageACopier.m_mana) {
    m_arme = new Arme(*(personnageACopier.m_arme));
  }

  Personnage& Personnage::operator=(Personnage const& personnageACopier) {
    if (this != &personnageACopier) {
      // On verifie que l'objet n'est pas le même que celui reçu en argument
      m_vie = personnageACopier.m_vie;  // On copie tous les champs
      m_mana = personnageACopier.m_mana;
      delete m_arme;
      m_arme = new Arme(*(personnageACopier.m_arme));
    }
    return *this;
  }
