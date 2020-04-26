#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    Student(const string& name);
    ~Student();
    void setName(const string& newName);
    string getName() const;

private:
    string name;
};

#endif
