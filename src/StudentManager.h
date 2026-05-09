#ifndef STUDENTMANAGER_H
#define STUDENTMANAGER_H

#include <vector>
#include "Student.h"

class StudentManager {
private:
    std::vector<Student> students;

public:
    // Methods
    void addStudent(const Student& student);
    void displayAllStudents() const;
    
    // Future expansion: find, delete, sort, etc.
};

#endif // STUDENTMANAGER_H
