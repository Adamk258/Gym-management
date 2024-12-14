#include "../headers/Membre.hpp"
#include "../headers/Person.h"
#include <iostream>

Membre::Membre(int id, std::string name, int age, int date_insc, std::string nom_salle_derniere, bool prime_payé) : date_insc(date_insc), nom_salle_derniere(nom_salle_derniere), prime_payé(prime_payé) {}

//Getters
int Membre::getDateInsc() const
{
    return date_insc;
}

std::string  Membre::getNomSalleDerniere() const
{
    return nom_salle_derniere;
}

bool  Membre::checkPrimePaye() const
{
    return prime_payé;
}

//Setters
 void Membre::setSalleDerniere(std::string newSalleDerniere)
 {
    nom_salle_derniere = newSalleDerniere;
 }

void Membre::setDateInsc(int newDateInsc)
{
    date_insc = newDateInsc;
}

void Membre::displayDetails()
{
    std::cout
        << "Date d'insrciption: " << date_insc << "\n"
        << "Derniere Salle: " << nom_salle_derniere << "\n"
        << "Membre Prime: " << prime_payé << "\n";
}

