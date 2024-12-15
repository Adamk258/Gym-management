#ifndef RESERVATION_H
#define RESERVATION_H

#include "Salle.h"
#include <string>

class Reservation {
private:
    int reservationId;      
    Salle salle;       
    int memberId;     
    std::string memberName; 
    std::string date;       
    int groupSize;    
    bool valide;      

public:
    Reservation(int reservationId, Salle& salle,int memberId ,std::string memberName, std::string date, int groupSize);

    int getReservationId() const;
    int getSalleId() const;
    int getMembreId() const;
    std::string getMemberName() const;
    std::string getDate() const;
    int getGroupSize() const;

    
    void setMemberName(std::string memberName);
    void setDate(std::string date);
    void setGroupSize(int groupSize);

    bool isValidForSalle(Salle& salle) ; // Checks if the reservation is valid for a given room
};

#endif 
