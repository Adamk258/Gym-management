#ifndef Membre_H
#define Membre_H

#include <string>
#include "Person.h"

class Membre : public Person 
{
    protected: 
    int date_insc;
    bool prime_payé;
    std::string nom_salle_derniere;

    public:Membre(int id, std::string name, int age, int date_insc, std::string nom_salle_derniere, bool prime_payé);
    

    //Getters
    int getDateInsc() const;
    std::string getNomSalleDerniere() const;
    bool checkPrimePaye() const;
    
    // Setters
    void setSalleDerniere(std::string newSalleDerniere);
    void setDateInsc(int newDateInsc);

    virtual void displayDetails();
};

#endif