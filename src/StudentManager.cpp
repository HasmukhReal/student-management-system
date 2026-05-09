#include "StudentManager.h"
#include <iostream>

void StudentManager::addStudent(const Student& student) {
    students.push_back(student);
    std::cout << "Student " << student.getName() << " added successfully." << std::endl;
}

void StudentManager::displayAllStudents() const {
    if (students.empty()) {
        std::cout << "No students in the system." << std::endl;
        return;
    }

    std::cout << "\n--- All Students ---" << std::endl;
    for (const auto& student : students) {
        student.displayInfo();
    }
}
