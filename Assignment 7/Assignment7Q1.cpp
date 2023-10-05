#include <iostream>
using namespace std;

class Date
{
public:
    int day;
    int month;
    int year;

public:
    Date()
    {
        cout << "inside parameterless constructor of Date class" << endl;
        this->day = 1;
        this->month = 1;
        this->year = 2000;
    }

    Date(int day, int month, int year)
    {
        cout << "inside parameterized constructor of Date class" << endl;

        this->day = day;
        this->month = month;
        this->year = year;
    }

    int get_day()
    {
        return this->day;
    }

    void set_day(int day)
    {
        this->day = day;
    }

    int get_month()
    {
        return this->month;
    }

    void set_month(int month)
    {
        this->month = month;
    }

    int get_year()
    {
        return this->year;
    }

    void set_year(int year)
    {
        this->year = year;
    }

    void display()
    {
        cout << this->day << "/" << this->month << "/" << this->year << endl;
        is_leap_year();
    }
    void accept()
    {
        cout << "Enter the day=" << endl;
        cin >> this->day;
        cout << "Enter the month" << endl;
        cin >> this->month;
        cout << "Enter the year" << endl;
        cin >> this->year;
    }

    void is_leap_year()
    {
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        {
            cout << "its a leap year" << endl;
        }
        else
        {
            cout << "its  not a leap year" << endl;
        }
    }
};

class Person
{
protected:
    string name;
    string addr;
    Date dob;

public:
    Person()
    {
        cout << "inside parameterless constructor of person class" << endl;
        this->name = "akshay";
        this->addr = "sinhagad road";
    }

    Person(string name, string addr, int day, int month, int year) : dob(day, month, year)
    {
        cout << "inside parameterized constructor of person class" << endl;

        this->name = name;
        this->addr = addr;
    }

    string get_name()
    {
        return this->name;
    }

    void set_name(string name)
    {
        this->name = name;
    }

    string get_addre()
    {
        return this->addr;
    }

    void set_addr(string addr)
    {
        this->addr = addr;
    }

    void get_birth_date()
    {

        cout << dob.get_day() << "/";
        cout << dob.get_month() << "/";
        cout << dob.get_year();
    }

    void set_birth_date(int s, int d, int k)
    {
        dob.set_day(s);
        dob.set_month(d);
        dob.set_year(k);
    }
     void display()
    {
        cout << "name of person is=" << this->name << endl;
        cout << "address of person is=" << this->addr << endl;
        dob.display();
    }

     void accept()
    {
        cout << "name of person is=" << endl;
        cin >> this->name;
        cout << "address of person" << endl;
        cin >> this->addr;
        dob.accept();
    }
};

class Employee :public Person
{
    protected:
    int id;
    float sal;
    string dept;
    Date doj;

    public:
    Employee()
    {
                cout<<"inside parameterless constructor of Employee class"<<endl;

     this->id=1;
     this->sal=7500;
     this->dept= "HR";
     doj.display();
     
     


    }
    Employee(int id,float sal,string dept,int day,int month,int year):doj(day,month,year)
    {
                cout<<"inside parameterized constructor of Employee class"<<endl;

        this->id=id;
        this->sal=sal;
        this->dept=dept;
       // this->doj=doj;

    }
    
     
int get_id()
{
    return this->id;

}

void set_id()
{
    this->id=id;
}

float get_sal()
{
   return  this->sal;
}

void set_sal(float sal)
{
    this->sal=sal;
}

string get_dept()
{
    return this->dept;
}
 
 void set_dept(string dept)
 {
    this->dept=dept;
 }

 Date get_joining_date()
 {
    return this->doj;
    
 }

 void set_joining_date(int s,int d,int k )
{
       doj.set_day(s);
       doj.set_month(d);
       doj.set_year(k);

}

void displayEmployee()
{
    cout<<"id="<<this->id<<endl;
    cout<<"sal="<<this->sal<<endl;
    cout<<"dept="<<this->dept<<endl;
    doj.display();

}
void acceptEmployee()
{
 cout<<"Empid="<<this->id<<endl;
 cout<<"sal"<<this->sal<<endl;
 cout<<"dept="<<this->dept<<endl;
 doj.accept() ;
}
};

int main()
{

    //Person p; 
    Employee e;
    // Person *p = new Employee; // upcasting
    // p->accept();
    // p->display();

    // Employee *e = (Employee *)p; // downcasting
    // p->accept();
    // e->display();

// e.set_id(555);
// e.get_id();

// e.set_sal(5000);
// e.display();








    return 0;
}