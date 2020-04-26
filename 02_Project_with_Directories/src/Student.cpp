#include <Student.h>

Student::Student(const string& name) : name(name) {
}

Student::~Student() {
}

void Student::setName(const string& newName) {
    name = newName;
}

string Student::getName() const {
    return name;
}

