#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>

class Student {
private:
    int id;
    std::string name;
    int age;
    double gpa;

public:
    // Constructor
    Student(int id, std::string name, int age, double gpa);

    // Getters
    int getId() const;
    std::string getName() const;
    int getAge() const;
    double getGpa() const;

    // Setters
    void setName(std::string name);
    void setAge(int age);
    void setGpa(double gpa);

    // Methods
    void displayInfo() const;
};

#endif // STUDENT_H
