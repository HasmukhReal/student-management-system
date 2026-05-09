#include <iostream>
#include <vector>
#include "Student.h"
#include "StudentManager.h"

int main() {
    std::cout << "--- Student Management System ---" << std::endl;

    StudentManager manager;

    // Add students via manager
    manager.addStudent(Student(101, "Alice Johnson", 20, 3.8));
    manager.addStudent(Student(102, "Bob Smith", 21, 3.5));
    manager.addStudent(Student(103, "Charlie Davis", 19, 3.9));

    // Display all students
    manager.displayAllStudents();

    return 0;
}
