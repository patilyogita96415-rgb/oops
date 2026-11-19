#include <iostream>
#include <string>

class Student {
public:
    // Constructor: runs when a Student object is created
    Student(const std::string& studentName) : name(studentName) {
        std::cout << "Constructor called for " << name << '\n';
    }

    // Destructor: runs when the object is destroyed
    ~Student() {
        std::cout << "Destructor called for " << name << '\n';
    }

private:
    std::string name;
};

int main() {
    Student student("Alex");
    std::cout << "Student object is in use.\n";
    return 0;
}