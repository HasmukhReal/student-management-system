#include "Student.h"

Student::Student(int id, std::string name, int age, double gpa) 
    : id(id), name(name), age(age), gpa(gpa) {}

int Student::getId() const {
    return id;
}

std::string Student::getName() const {
    return name;
}

int Student::getAge() const {
    return age;
}

double Student::getGpa() const {
    return gpa;
}

void Student::setName(std::string name) {
    this->name = name;
}

void Student::setAge(int age) {
    this->age = age;
}

void Student::setGpa(double gpa) {
    this->gpa = gpa;
}

void Student::displayInfo() const {
    std::cout << "ID: " << id 
              << " | Name: " << name 
              << " | Age: " << age 
              << " | GPA: " << gpa << std::endl;
}
