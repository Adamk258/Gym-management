#include "headers/Person.h"
#include "headers/Salle.h"
#include "headers/Reservation.h"
#include "headers/FileManager.h"


#include <iostream>
#include <vector>


int main() {
/*
    Person P = Person(1,"hamza",21);

     P.displayDetails();
 




    for (std::string sp : sports) {

        std::cout << sp;
    }

    

    
    std::vector<std::string> sports = {"Basketball", "Tennis"};
    Salle salle1(1, "Main Hall", 50, sports);

     // Create a Reservation object
    Reservation res1(101, 1, "John Doe", "2024-12-15", 25);

    // Test reservation validity
    std::cout << "Reservation is valid for Salle: " 
              << (res1.isValidForSalle(salle1) ? "Yes" : "No") << std::endl;
 */


std::vector<std::string> dataToSave = {
        "Hello, World!",
        "This is a test."
    };

std::string filePath = "test_file.txt";
FileManager::saveData(filePath, dataToSave);
std::cout << "Data saved to " << filePath << std::endl;

}