#include "../headers/Reservation.h"



// Constructor
Reservation::Reservation(int reservationId, int salleId,std::string memberName,std::string date, int groupSize)
    : reservationId(reservationId), salleId(salleId), memberName(memberName), date(date), groupSize(groupSize) {}

// Getters
int Reservation::getReservationId() const {
    return reservationId;
}

int Reservation::getSalleId() const {
    return salleId;
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


void Reservation::setSalleId(int salleId) {
    this->salleId = salleId;
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
    return salle.getId() == salleId && salle.canAccommodate(groupSize);
}
