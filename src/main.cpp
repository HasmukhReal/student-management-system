#include <iostream>
#include <vector>
#include "Student.h"

int main() {
    std::cout << "--- Student Management System ---" << std::endl;

    // Create some student objects
    Student s1(101, "Alice Johnson", 20, 3.8);
    Student s2(102, "Bob Smith", 21, 3.5);
    Student s3(103, "Charlie Davis", 19, 3.9);

    // Display student info
    s1.displayInfo();
    s2.displayInfo();
    s3.displayInfo();

    std::cout << "\nUpdating Alice's GPA..." << std::endl;
    s1.setGpa(3.95);
    s1.displayInfo();

    return 0;
}
