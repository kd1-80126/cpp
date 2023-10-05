#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    float sal;

public:
    Employee()
    {
        cout << "inside parameterless constructor of Employee class" << endl;

        this->id = 1;
        this->sal = 7500;
    }
    Employee(int id, float sal, string dept, int day, int month, int year) : doj(day, month, year)
    {
        cout << "inside parameterized constructor of Employee class" << endl;

        this->id = id;
        this->sal = sal;
    }

    int get_id()
    {
        return this->id;
    }

    void set_id()
    {
        this->id = id;
    }

    float get_sal()
    {
        return this->sal;
    }

    void set_sal(float sal)
    {
        this->sal = sal;
    }

    void display()
    {
        cout << "id=" << this->id << endl;
        cout << "sal=" << this->sal << endl;
        cout << "dept=" << this->dept << endl;
    }
    void accept()
    {
        cout << "Empid=" << this->id << endl;
        cout << "sal" << this->sal << endl;
        cout << "dept=" << this->dept << endl;
    }
};

class Salesman : virtual public Employee
{
protected:
    float comm;

public:
    Salesman()
    {
        this->comm = 0;
    }

    Salesman(int, float, float)
    {
        this->id = id;
        this->sal = sal;
        this->comm = comm;
    }

    float get_comm()
    {
        return this->comm;
    }

    float set_comm(float comm)
    {
        return this->comm;
    }

    void accept()
    {
        cout << "enter comm" << endl;
        cin >> this->comm;
    }
    void display()
    {
        cout << "salesman's commission=" << this->comm << endl;
    }
};

class Manager : virtual public Employee
{
protected:
    float bonus;

public:
    Manager()
    {
        this->bonus = 0;
    }
    Manager(int id, float sal, float bonus)
    {
        this->id = id;
        this->sal = sal;
        this->bonus;
    }

    float get_bonus()
    {
        return this->bonus;
    }

    void set_bonus(float bonus)
    {
        this->bonus = bonus;
    }

    void display()
    {
        cout << "manager's bonus=" << this->bonus << endl;
    }

    void accept()
    {
        cout << "enter bonus" << endl;
        cin >> this->bonus;
    }
};

class Salesman : virtual public Employee
{
protected:
    float comm;

public:
    Salesman()
    {
        this->comm = 0;
    }

    Salesman(int, float, float)
    {
        this->id = id;
        this->sal = sal;
        this->comm = comm;
    }

    float get_comm()
    {
        return this->comm;
    }

    float set_comm(float comm)
    {
        return this->comm;
    }

    void accept_Salesman()
    {
        cout << "enter comm" << endl;
        cin >> this->comm;
    }
    void display_salesman()
    {
        cout << "salesman's commission=" << this->comm << endl;
    }
};

class Sales_manager : public Salesman, public Manager
{
public:
    Sales_manager()
    {
        int id;
        float sal;
        this->bonus = 100;
        this->comm = 100;
    }

    Sales_manager(int id, float sal, float bonus, float comm)
    {
        this->id = id;
        this->sal = sal;
        this->bonus = bonus;
        this->comm = comm;
    }

    void display_sales_manager()
    {

        Employee::display_Employee();
        Salesman::display_salesman();
        Manager::display_manager();
    }

    void accept_sales_manager()
    {

        Employee::accept_Employee();
        Salesman::accept_Salesman();
        Manager::accept_manager();
    }
};

int menu()
{
    int choice;
    cout << "-------------------------" << endl;
    cout << "0.Exit" << endl;
    cout << "1.Accept Employee" << endl;
    cout << "2.Accept salesman" << endl;

    cout << "3.Accept manager" << endl;
    cout << "4.Accept sales_manager" << endl;

    cout << "5.count of all employees with respect to
        designation"<<endl;
        cout
         << "6.respective designation employees" << endl;
    cout << "Enter Your Chocie = ";
    cin >> choice;
    cout << "--------------------" << endl;
    return choice;
}



void countObjects(Employee **arr)
{
    int employee_count = 0;
    int manager_count = 0;
    for (int i = 0; i < 10; i++)
    {
        if (typeid(*arr[i]) == typeid(Employee))
            employee_count++;
        else
            Manager++;
    }
    cout << "Total Employee = " << employee_count << endl;
    cout << "Total Manager = " << manager_count << endl;
}




int main()
{
    int choice;
    Employee *arr[10];

    int count = 0;
    while ((choice = menu() != 0))
    {
        switch (choice)
        {
        case 1:
            if (count < 10)
            {
                arr[count] = new Employee;
            
            }

            case 2: 
                if (count<10)
                {
                    arr[count]= new Salesman;
                }

                case 3: 
                if (count<10)
                {
                    arr[count]= new Manager;
                }

                case 4:
                if (count<10)
                {
                    arr[count]= new Sales_manager;
                }


                countObjects(Employee);


        }
    }

    return 0;
}
