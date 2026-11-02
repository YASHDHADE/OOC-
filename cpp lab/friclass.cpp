#include <iostream>
using namespace std;

class A
{
private:
    int num = 10;

    friend class B;
};

class B
{
public:
    void display(A obj)
    {
        cout << "Number = " << obj.num;
    }
};

int main()
{
    A a;
    B b;

    b.display(a);

    return 0;
}