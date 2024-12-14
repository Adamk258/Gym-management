#include "../headers/Salle.h"


Salle::Salle(int id,std::string name, int capacity,  std::vector<std::string> sports)
    : id(id), name(name), capacity(capacity), sports(sports) {


        /*need to implement file saving when a new salle is created */
    }


int Salle::getId() const {
    return id;
}

std::string Salle::getName() const {
    return name;
}

int Salle::getCapacity() const {
    return capacity;
}

std::vector<std::string> Salle::getSports() const {
    return sports;
}

void Salle::setName(std::string name) {
    this->name = name;
}

void Salle::setCapacity(int capacity) {
    this->capacity = capacity;
}

void Salle::setSports(std::vector<std::string> sports) {
    this->sports = sports;
}

// Utility functions
bool Salle::canAccommodate(int groupSize) const {
    return groupSize <= capacity;
}

bool Salle::supportsSport(std::string sport) const {
    for (const auto& s : sports) {
        if (s == sport) {
            return true;
        }
    }
    return false;
}