#include "headers/Membre.h"
#include "headers/Salle.h"
#include "headers/Reservation.h"
#include "headers/FileManager.h"
#include "headers/GymManagement.h"


#include <iostream>
#include <vector>




int main() {


GymManagementSystem gymSystem;

    int choice;
    bool running = true;

/* For loading data , if there is no data in the files uncomment this 
    Salle salle1(1, "Salle A", 50, {"Basketball", "Volleyball", "Tennis"});
    Salle salle2(2, "Salle B", 30, {"Football", "Badminton", "Tennis"});
    Salle salle3(3, "Salle C", 100, {"Basketball", "Swimming", "Football"});
    Salle salle4(4, "Salle D", 200, {"Tennis", "Table Tennis"});
    Salle salle5(5, "Salle E", 20, {"Yoga", "Zumba", "Pilates"});



    std::vector<std::string> sportsData = {
        "Basketball",
        "Football",
        "Tennis",
        "Volleyball",
        "Badminton"
    };

    // Save to sports.txt using the FileManager class
    FileManager fileManagerSports("./data/Sports.txt");

    fileManagerSports.saveData("./data/Sports.txt", sportsData);

    Membre membre1(1, "John Doe", 30, "2023-05-01", "Salle A", true);
    Membre membre2(2, "Jane Smith", 25, "2023-06-12", "Salle B", false);
    Membre membre3(3, "Paul Johnson", 40, "2023-07-22", "Salle C", true);
    Membre membre4(4, "Anna White", 35, "2023-08-18", "Salle D", true);
    Membre membre5(5, "Tom Brown", 50, "2023-09-14", "Salle E", false);
   

*/

    while (running) {
        gymSystem.showMenu(); // Show menu options
        std::cin >> choice;  // Get user choice

        
    }


}