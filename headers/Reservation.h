#ifndef RESERVATION_H
#define RESERVATION_H

#include "Salle.h"
#include <string>

class Reservation {
private:
    int reservationId;      
    int salleId;            
    std::string memberName; /*can do membre id */
    std::string date;       
    int groupSize;          

public:
    Reservation(int reservationId, int salleId,std::string memberName, std::string date, int groupSize);

    int getReservationId() const;
    int getSalleId() const;
    std::string getMemberName() const;
    std::string getDate() const;
    int getGroupSize() const;

    void setSalleId(int salleId);
    void setMemberName(std::string memberName);
    void setDate(std::string date);
    void setGroupSize(int groupSize);

    bool isValidForSalle(Salle& salle) ; // Checks if the reservation is valid for a given room
};

#endif 
