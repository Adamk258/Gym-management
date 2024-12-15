#ifndef Membre_H
#define Membre_H

#include <string>
#include "Person.h"

class Membre : public Person 
{
  protected:
    std::string date_insc;
    bool prime_payee;
    std::string nom_salle_derniere;

public:
    // Constructor
    Membre(int id, const std::string& name, int age, const std::string& date_insc, const std::string& nom_salle_derniere, bool prime_payee);

    

    //Getters
    std::string getDateInsc() const;
    std::string getNomSalleDerniere() const;
    bool checkPrimePaye() const;
    
    // Setters
    void setSalleDerniere(std::string newSalleDerniere);
    void setDateInsc(std::string newDateInsc);

    virtual void displayDetails();
};

#endif