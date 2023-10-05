#include <iostream>

using namespace std;

class Address
{
private:
    string building;
    string street;
    string city;
    int pin;

public:
    Address()
    {
        this->building = "mohite township";
        this->street = "sinhagad road";
        this->city = "pune";
        this->pin = 411051;
    }

    Address(string building, string street, string city, int pin)
    {
        this->building = building;
        this->street = street;
        this->city = city;
        this->pin = pin;
    }

    void accept()
    {
        getchar();
        cout << "Enter building name:" << endl;
        // cin>>this->building;
        getline(cin, building);
        getchar();
        cout << "Enter street name:" << endl;
        getline(cin, street);
        getchar();
        cout << "Enter city name:" << endl;
        getline(cin, city);
        cout << "Enter pin:" << endl;
        cin >> this->pin;
    }

    void display()
    {
        cout << "building name=" << this->building << endl;
        cout << "street name=" << this->street << endl;
        cout << "city name=" << this->city << endl;
        cout << "pin=" << this->pin << endl;
    }

    string get_building()
    {
        return this->building;
    }
    string get_street()
    {
        return this->street;
    }
    string get_city()
    {
        return this->city;
    }
    int get_pin()
    {
        return this->pin;
    }
    void set_building(string building)
    {
        this->building = building;
    }
    void set_street(string street)
    {
        this->street = street;
    }
    void st_city(string city)
    {
        this->city = city;
    }
    void set_pin(int pin)
    {
        this->pin = pin;
    }
};
int main()
{
    char ch;
    string a;
    Address s;
    do
    {
        int choice;
        cout << "1.enter details:" << endl;
        cout << "2.display details" << endl;
        cout << "3.display building name:" << endl;
        cout << "4.display street name:" << endl;
        cout << "5.display city name:" << endl;
        cout << "6.display pin name:" << endl;
        cout << "7.enter building name:" << endl;
        cout << "8.enter street name:" << endl;
        cout << "9.enter city name:" << endl;
        cout << "10.enter pin name:" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            s.accept();
            break;

        case 2:
            s.display();
            break;

        case 3:
            cout << "building name=" << s.get_building() << endl;
            break;

        case 4:
            cout << "street name=" << s.get_street() << endl;
            break;

        case 5:
            cout << "city name=" << s.get_city() << endl;
            break;

        case 6:
            cout << " pin=" << s.get_pin() << endl;
            break;

        case 7:
            cout << "enter building name to update" << endl;
            cin >> a;
            s.set_building(a);

            break;

        case 8:
            cout << "enter street name to update" << endl;
            cin >> a;
            s.set_street(a);

            break;

        case 9:
            cout << "enter city name to update" << endl;
            cin >> a;
            s.set_street(a);
            break;

        case 10:
            break;
        }
        cout << "Do you want to continue? enter 'y' for continue=";
        cin >> ch;
    } while (ch != 'y');

    return 0;
}
