#include "../headers/Person.h"

#include <iostream>

/*someone who want to reserve a salle , can be an outsider(Person) or Membre of the training hall*/

Person::Person(int id, std::string name, int age) : id(id), name(name), age(age) {}

int Person::getId() const {
    return id;
}

std::string Person::getName() const {
    return name;
}

int Person::getAge() const {
    return age;
}

void Person::setName(std::string newName) {
    name = newName;
}

void Person::setAge(int newAge) {
    age = newAge;
}

// Display method
void Person::displayDetails(){
    std::cout << "ID: " << id << "\n"
              << "Nom: " << name << "\n"
              << "Age: " << age << "\n";
}



