#include "./cylinder.h"
#include "./menu.h"

int main()
{
    Cylinder C1(2, 3);
    Emenu choice;
    while ((choice = menu())!= 0)
    {
        switch (choice)
        {
        case Accept:
            C1.accept();
            break;
        case Calculate_volume:
            C1.Volume();
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
    }
    cout << "Thank you!!!" << endl;
    return 0;
}