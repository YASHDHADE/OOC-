#include <iostream>
using namespace std;

class Demo
{
private:
    int num;

public:
    void getData()
    {
        num = 10;
    }

    friend void display(Demo);
};

void display(Demo d)
{
    cout << "Number = " << d.num;
}

int main()
{
    Demo d;
    d.getData();
    display(d);

    return 0;
}