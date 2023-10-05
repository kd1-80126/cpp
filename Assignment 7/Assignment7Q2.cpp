/*Q2. A shop sells book or tapes. The Book class holds id, title, author, and price; whereas Tape class
holds id, title, artist, and price. There is 5% discount on tapes, while 10% discount on books.
Assuming that each user purchase 3 products (either book or tape), calculate final bill. The program
should be menu driven and should not cause memory leakage.*/

#include <iostream>
using namespace std;

class Product
{
private:
    int id;
    string title;
    float price;

public:
    void setPrice(float price)
    {
        this->price = price;
    }

    float getprice()
    {
        return this->price;
    }

    Product()
    {
        cout << "inside parameterless constructor of product class" << endl;
    }

    Product(int id, string title, float price)
    {
        cout << "inside parameterized constructor of product class" << endl;

        this->id = id;
        this->title = title;
        this->price = price;
    }

    virtual void accept()
    {
        cout << "Enter  id:" << endl;
        cin >> id;
        cout << "Enter title :" << endl;
        cin >> this->title;
        cout << "Enter price of the product:" << endl;
        cin >> this->price;
    }
    virtual void display()
    {
        cout << "Id = " << this->id << endl;
        cout << "Title = " << this->title << endl;
        cout << "Price = " << this->price << endl;
    }
};

class Book : public Product
{
public:
    string author;

public:
    void accept()
    {
        Product::accept();
        cout << "Enter author of the book:" << endl;
        cin >> this->author;
    }

    void display()
    {
        Product::display();
        cout << "Author = " << this->author << endl;
    }
};

class Tape : public Product
{
private:
    string artist;

public:
    Tape()
    {
        cout << "inside parameterless constructor of tape class" << endl;
    }

    Tape(int id, string title, string artist, float price)
    {
        cout << "inside parameterized constructor of tape class" << endl;
    }


    void accept()
    {
                Product::accept();

       
        cout << "Enter author of the tape:" << endl;
        cin >> this->artist;
      
    }

    void display()
    {
        
        Product::display();

        cout << " author of the Tape:" <<this->artist<< endl;

        
    }
};

void calculateBill(Product **arr)
{
    float total_books = 0;
    float total_tape;
    float final_price,price_ofbooks,price_oftape,total_bill;
    

    for (int i = 0; i < 3; i++)
    {
        if (typeid(*arr[i]) == typeid(Book))
        {
            total_books = total_books + arr[i]->getprice();
        }
        else
        {
         
         total_tape= total_books+ arr[i]->getprice();
        }

    }
    price_ofbooks=total_books-(total_books * 0.05);
    price_oftape= total_tape-(total_tape * 0.1);
    total_bill= price_ofbooks+ price_oftape;

   cout<<"final bill="<<total_bill<<endl;
};

int menu()
{

    int choice;
    cout << "--------------------" << endl;
    cout << "0. Exit" << endl;
    cout << "1. Add Book" << endl;
    cout << "2. Add Tape" << endl;
    cout << "4. Display Book details" << endl;
    cout << "5. Display Tape details" << endl;
    cout << "6.calculate the bill" << endl;

    cout << "Enter Your Chocie = ";
    cin >> choice;
    cout << "--------------------" << endl;
    return choice;
}

int main()
{
    int choice;

    Product *arr[3];
    int count = 0;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            if (count < 3)
            {
                arr[count] = new Book();
                arr[count]->accept();
                count++;
            }
            else
                cout << "Array is Full, Cannot add the Book" << endl;
            break;
        case 2:
            if (count < 3)
            {
                arr[count] = new Tape();
                arr[count]->accept();
                count++;
            }
            else
                cout << "Array is Full, Cannot add the Tape Object.." << endl;

            break;

            // calculate the bill
        case 6:
            calculateBill(arr);
            break;

            // default:
            //     cout << "Wrong Choice ..." << endl;
            //     break;
        }
    }
    for (int i = 0; i < count; i++)
        delete arr[i];

    cout << "Thank you for using our app..." << endl;
    return 0;
}