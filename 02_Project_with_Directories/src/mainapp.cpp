#include <iostream>
#include <Student.h>
using namespace std;

int main(int argc, char *argv[]) {
    Student s1("museop");

    cout << s1.getName() << endl;
    s1.setName("Kim Museop");
    cout << s1.getName() << endl;
    return 0;
}
