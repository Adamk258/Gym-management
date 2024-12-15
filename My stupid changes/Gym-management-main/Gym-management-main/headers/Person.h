#ifndef PERSON_H
#define PERSON_H


#include <string>

class Person {
protected:
    int id;                 
    std::string name;       
    int age;         

public: Person(int id, std::string name, int age);


int getId() const;
std::string getName() const;
int getAge() const;

// Setters
void setName(std::string newName);
void setAge(int newAge);


virtual void displayDetails() ;


};


#endif