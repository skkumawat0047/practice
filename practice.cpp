#include <iostream>
using namespace std;

class Student {
    int age;
    string name;

public:
    // Normal constructor
    Student(int a, string n) {
        age = a;
        name = n;
    }

    // Copy constructor
    Student(const Student &s) {
        age = s.age;     // copy age
        name = s.name;   // copy name
        cout << "Copy constructor called!" << endl;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1(20, "Alice");  // create object s1
    Student s2 = s1;          // copy s1 into s2

    s1.display();
    s2.display();
}
