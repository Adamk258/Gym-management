#include "../headers/Membre.h"
#include "../headers/Person.h"
#include "../headers/FileManager.h"

#include <iostream>

Membre::Membre(int id, const std::string& name, int age, const std::string& date_insc, const std::string& nom_salle_derniere, bool prime_payee)
    : Person(id, name, age), 
      date_insc(date_insc),
      prime_payee(prime_payee),
      nom_salle_derniere(nom_salle_derniere) {


        

   FileManager fileManager("./data/Membres.txt");

    std::string ReservationData = std::to_string(id) + ", " +
                            name + ", " +
                            std::to_string(age) + ", " +
                            date_insc + ", " +
                            nom_salle_derniere + ", " +
                            std::to_string(prime_payee);

    if (!fileManager.appendToFile(ReservationData)) {
        throw std::runtime_error("Error: Could not add salle to file");
    }

    std::cout << "Membre ajoutee au Database \n";
    
        
}

//Getters
std::string Membre::getDateInsc() const
{
    return date_insc;
}

std::string  Membre::getNomSalleDerniere() const
{
    return nom_salle_derniere;
}

bool  Membre::checkPrimePaye() const
{
    return prime_payee;
}

//Setters
 void Membre::setSalleDerniere(std::string newSalleDerniere)
 {
    nom_salle_derniere = newSalleDerniere;
 }

void Membre::setDateInsc(std::string newDateInsc)
{
    date_insc = newDateInsc;
}

void Membre::displayDetails()
{
    std::cout
        << "Date d'insrciption: " << date_insc << "\n"
        << "Derniere Salle: " << nom_salle_derniere << "\n"
        << "Membre Prime: " << prime_payee << "\n";
}

