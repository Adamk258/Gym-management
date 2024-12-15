#include "../headers/GymManagement.h"

// Constructor: Load data from files
GymManagementSystem::GymManagementSystem() {}


void GymManagementSystem::showMenu() {
    int option = -1;
    while (option != 0) {
        std::cout << "\n------ MENU ------\n";
        std::cout << "1. Manage Memberships\n";
        std::cout << "2. Make Reservation\n";
        std::cout << "3. Check Available Salles\n";
        std::cout << "4. Check Available Sports\n";
        std::cout << "5. Modify/Cancel Reservation\n";
        std::cout << "6. Verify Salle Capacity\n";
        std::cout << "0. Exit\n";
        std::cout << "Choose an option: ";
        std::cin >> option;

        switch (option) {
            case 1:
                manageMemberships();
                break;
            case 2:
                std::cout << "Making reservation...\n";
                break;
            case 3:
                std::cout << "Checking available salles...\n";
                break;
            case 4:
                std::cout << "Checking available sports...\n";
                break;
            case 5:
                std::cout << "Modifying/canceling reservation...\n";
                break;
            case 6:
                std::cout << "Verifying salle capacity...\n";
                break;
            case 0:
                std::cout << "Exiting the system.\n";
                break;
            default:
                std::cout << "Invalid choice! Please choose a valid option.\n";
        }
    }
}

// Manage memberships (add, update, delete)
void GymManagementSystem::manageMemberships() {
    std::cout << "\n------ Manage Memberships ------\n";
    std::cout << "1. Add Member\n";
    std::cout << "2. Update Member\n";
    std::cout << "3. Delete Member\n";
    std::cout << "Choose an option: ";
    int option;
    std::cin >> option;

    switch (option) {
        case 1:
            std::cout << "Adding member...\n";
            break;
        case 2:
            std::cout << "Updating member...\n";
            break;
        case 3:
            std::cout << "Deleting member...\n";
            break;
        default:
            std::cout << "Invalid choice!\n";
    }
}