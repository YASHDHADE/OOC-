
#include <iostream>
#include <string>

using namespace std;

class student {
private:
    string name;
    int marks;
    friend class result;

public:
    student(string n, int m) {
        name = n;
        marks = m;
    }
};

class result {
public:
    void displayresult(student s) {
        cout << "Student Name:" << s.name << endl;
        cout << "marks: " << s.marks << endl;
    }
};

int main() {
    student s("Mrunal", 98);
    result r;
    r.displayresult(s);
    return 0;
}