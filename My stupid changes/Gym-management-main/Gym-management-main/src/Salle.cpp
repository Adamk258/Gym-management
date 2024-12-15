#include "../headers/Salle.h"
#include "../headers/FileManager.h"
#include <iostream>


Salle::Salle(int id,std::string name, int capacity,  std::vector<std::string> sports)
    : id(id), name(name), capacity(capacity), sports(sports) {



    FileManager fileManager("./data/salles.txt");

    // Format the salle data
    std::string salleData = std::to_string(id) + " " +
                            std::to_string(capacity) + " " +
                            name;

    // Append to the file using FileManager
    if (!fileManager.appendToFile(salleData)) {
        throw std::runtime_error("Error: Could not add salle to salles.txt");
    }

    std::cout << "Salle ajoutée au Database \n";
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