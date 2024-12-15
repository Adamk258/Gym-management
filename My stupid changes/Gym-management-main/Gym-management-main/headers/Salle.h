#ifndef SALLE_H
#define SALLE_H

#include <string>
#include <vector>

class Salle {
private:
    int id;                     
    std::string name;          
    int capacity;         
    std::vector<std::string> sports;

public:
    Salle(int id,std::string name, int capacity, std::vector<std::string> sports);

    
    int getId() const;
    std::string getName() const;
    int getCapacity() const;
    std::vector<std::string> getSports() const;


    void setName(const std::string name);
    void setCapacity(int capacity);
    void setSports(std::vector<std::string> sports);


    bool canAccommodate(int groupSize) const;         
    bool supportsSport(const std::string sport) const; 
};

#endif 