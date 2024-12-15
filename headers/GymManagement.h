#ifndef GYM_MANAGEMENT_SYSTEM_H
#define GYM_MANAGEMENT_SYSTEM_H

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include "Membre.h"
#include "Salle.h"
#include "FileManager.h"

class GymManagementSystem {
public:
    GymManagementSystem(); // Constructor

    void showMenu(); // Display the main menu

    // Menu choice functions
    void manageMemberships();


};

#endif 
