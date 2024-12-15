#include "../headers/Reservation.h"
#include "../headers/FileManager.h"
#include "../headers/Salle.h"

#include <iostream>




// Constructor
Reservation::Reservation(int reservationId, Salle& salle,int memberId , std::string memberName,std::string date, int groupSize)
    : reservationId(reservationId), salle(salle),memberId(memberId) ,memberName(memberName), date(date), groupSize(groupSize) {



   FileManager fileManager("./data/Reservations.txt");

    this->valide = isValidForSalle(salle);

    std::string ReservationData = std::to_string(reservationId) + ", " +
                            std::to_string(salle.getId()) + ", " +
                            std::to_string(memberId) + ", " +
                            memberName + ", " +
                            date + ", " +
                            std::to_string(groupSize) + ", " +
                            std::to_string(valide);


    if (!fileManager.appendToFile(ReservationData)) {
        throw std::runtime_error("Error: Could not add salle to file");
    }

    std::cout << "Reservation ajoutee au Database \n";
    
        }

// Getters
int Reservation::getReservationId() const {
    return reservationId;
}

int Reservation::getSalleId() const {
    return salle.getId();
}

int Reservation::getMembreId() const {
    return memberId;
}

std::string Reservation::getMemberName() const {
    return memberName;
}

std::string Reservation::getDate() const {
    return date;
}

int Reservation::getGroupSize() const {
    return groupSize;
}



void Reservation::setMemberName(std::string memberName) {
    this->memberName = memberName;
}

void Reservation::setDate(std::string date) {
    this->date = date;
}

void Reservation::setGroupSize(int groupSize) {
    this->groupSize = groupSize;
}

bool Reservation::isValidForSalle(Salle& salle){
     /* implement that when a reservation happen , we need to check the file salles.txt to check the group size , you can use Salle id instead of Salle in the parameters*/
    return salle.getId() == salle.getId() && salle.canAccommodate(groupSize);
}
