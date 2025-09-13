#include <iostream>
using namespace std;

class Student {
    int age;
    string name;

public:

    Student(int a, string n) {
        age = a;
        name = n;
    }


    Student(const Student &s) {
        age = s.age;    
        name = s.name;   
        cout << "Copy constructor called!" << endl;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1(20, "Alice");
    Student s2 = s1;       

    s1.display();

    s2.display();
}
