#include<iostream>
#include<string>
using namespace std;

namespace NStudent
{
    class Student
    {
        private:
        int rollno;
         string name;
         int marks;

        public:
        void initStudent()
        {
         rollno=1;
          name="akshay";
            marks=100;
        }
        void printStudentOnConsole()
        {
         cout<<"rollno="<<this->rollno<<endl;
          cout<<"name="<<this->name<<endl;

         cout<<"marks="<<this->marks<<endl;

         }
         void acceptStudentFromConsole()
        {
         cout<<"Enter rollno,name and marks=";
         cin>>this->rollno>>this->name>>this->marks;


        }
    };
}

using namespace NStudent;

int main()
{
    //NStudent::
    Student s;
    int choice;
    char ch;
  do
  {
    cout << "1.initialize student" << endl;
    cout << "2.enter student details"<< endl;
    cout<<"3.view student details"<<endl;
        cout<<"4.exit"<<endl;

 cin>>choice;
    switch(choice)
    {

    
         
         case 1:s.initStudent();
                   break;

          case 2 :    s.acceptStudentFromConsole();
                   break;

        
          case 3: s.printStudentOnConsole();
          break;
          
          default:printf("INVALID CHOICE");
    }
    cout << "Do you want to continue? enter 'y' for continue=";
    cin >> ch;
  } while(ch == 'y');
    return 0;

}