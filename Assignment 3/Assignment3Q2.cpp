#include <iostream>
using namespace std;
class tollbooth
{
private:
    unsigned int ncars;
    double amt;

public:
    tollbooth()
    {
        this->ncars = 0;
        this->amt = 0;
    }
    void payingCar()
    {
        this->ncars = ncars + 1;
        this->amt = amt + 0.50;
    }
    void nopayCar()
    {
        this->ncars = ncars + 1;
        // this->amt = amt + 0;
    }
    void printOnConsole()
    {
        cout << "total no.cars=" << ncars << endl;
        cout << "total amount received=" << amt << endl;
    }
};

int main()
{
    tollbooth t1;
    int a;
    do
    {
        cout << "Press 0 to exit.\nPress 1 when a car passes and pays toll.\nPress 2 when a car passes but doesn't pay toll.\n";
        cin >> a;
        switch (a)
        {
        case 1:
            t1.payingCar();
            t1.printOnConsole();
            break;
        case 2:
            t1.nopayCar();
            t1.printOnConsole();
        default:
            break;
        }
    } while (a != 0);
    return 0;
}