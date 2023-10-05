#include "./menu.h"
#include <iostream>
using namespace std;

Emenu menu()
{
    int choice;
    cout << "*******************" << endl;
    cout << "0. EXIT" << endl;
    cout << "1. Accept Radius & Height" << endl;
    cout << "2. Calculate Volume" << endl;
    cout << "Enter your choice"<<endl;
    cin >> choice;
    cout << "*******************" << endl;
    return Emenu(choice);
}