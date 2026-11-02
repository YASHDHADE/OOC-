#include <iostream>
using namespace std;

class Number {
    int n;

public:
    Number(int x) {
        n = x;
    }

    void operator++() {
        ++n;
    }

    void display() {
        cout << "Number = " << n;
    }
};

int main() {
    Number obj(5);

    ++obj;
    obj.display();

    return 0;
}