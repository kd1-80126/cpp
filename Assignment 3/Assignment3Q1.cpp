/*Q1. Write a menu driven program to calculate volume of the box(length * width * height).
Provide necessary constructors.*/

#include <iostream>
using namespace std;

class Volume
{
private:
    double length;
    double width;
    double height;

public:
    Volume()
    {
        this->length = 12;
        this->width = 45;
        this->height = 55;
    }
    void acceptValues()
    {
        cout << "Enter height=" << endl;
        cin >> this->height;
        cout << "Enter width=" << endl;
        cin >> this->width;
        cout << "Enter lenth=" << endl;
        cin >> this->length;
    }

    int Calculate()
    {
        return length * width * height;
    }

    void displayValues()
    {
        

        cout << "volume of the box=" << Calculate() << endl;
    }
};
enum Ebox
{
    EXIT,
    ACCEPT_VALUES,
    CALCULATE,
    DISPLAY_VOLUME

};

Ebox akshay()
{
    int choice;
    cout << "*********************" << endl;
    cout << "0.EXIT" << endl;
    cout << "1.Enter values" << endl;
    cout << "2.calculate" << endl;
    cout << "3.display volume" << endl;
    cout << "************************" << endl;
    cin>> choice;
    return Ebox(choice);
}

int main()
{
    Volume v;
    Ebox choice;

    while ((choice = akshay()) != EXIT)
    {
        switch (choice)
        {
        case ACCEPT_VALUES:
            v.acceptValues();
            break;

        case CALCULATE:
            v.Calculate();
            break;

        case DISPLAY_VOLUME:
            v.displayValues();

            break;
        default:
            cout << "Wrong choice entered ...:(" << endl;
        }
    }
    cout << "Thank you for using our app...:)" << endl;
    return 0;
}