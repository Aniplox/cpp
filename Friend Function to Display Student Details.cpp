#include <iostream>
using namespace std;

class Student {
    string name;
    int age;
    string department;
    string course;
public:
    Student(string n, int a, string d, string c) : name(n), age(a), department(d), course(c) {}

    friend void displayStudentDetails(Student &s);
};

void displayStudentDetails(Student &s) {
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "Department: " << s.department << endl;
    cout << "Course: " << s.course << endl;
}

int main() {
    Student s("vedansh", 20, "Computer Science", "B.Tech");
    displayStudentDetails(s);
    return 0;
}
