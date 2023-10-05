#include <iostream>
using namespace std;
class Matrix
{
private:
    int r;
    int c;
    int **arr;

public:
    Matrix() {}
    Matrix(int r, int c)
    {
        this->r = r;
        this->c = c;
        // for (int i=0;i<r;i++)  // this is wrong way.
        arr = new int *[r];

        for (int i = 0; i < r; i++)
            arr[i] = new int[c];
    }

    void accept()
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << "enter " << i << " " << j << endl;
                cin >> arr[i][j];
            }
        }
    }
    void print()
    {
        cout << "Matrix is : " << endl;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    friend void add(Matrix M1, Matrix M2, Matrix M3, int r, int c);
    friend void substract(Matrix M1, Matrix M2, Matrix M3, int r, int c);
    friend void Multiplication(Matrix M1, Matrix M2, Matrix M3, int r, int c);
    friend void Transpose(Matrix M1, Matrix M4, int r, int c);
    ~Matrix() {}
};

void add(Matrix M1, Matrix M2, Matrix M3, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            M3.arr[i][j] = M1.arr[i][j] + M2.arr[i][j];
            // cout<<M3.arr[i][j]<<endl;
        }
    }
}
void substract(Matrix M1, Matrix M2, Matrix M3, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            M3.arr[i][j] = M1.arr[i][j] - M2.arr[i][j];
            // cout<<M3.arr[i][j]<<endl;
        }
    }
}

void Multiplication(Matrix M1, Matrix M2, Matrix M3, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            M3.arr[i][j] = 0;
            for (int k = 0; k < c; k++)
            {
                M3.arr[i][j] += M1.arr[i][k] * M2.arr[k][j];
                // cout<<M3.arr[i][j]<<endl;
            }
        }
    }
}

void Transpose(Matrix M1, Matrix M4, int r, int c)
{
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            M4.arr[j][i] = M1.arr[i][j];
        }
    }
}

int main()
{
    int x, y;
    cout << "Enter number of Rows : ";
    cin >> x;
    cout << "Enter number of Columns : ";
    cin >> y;
    Matrix M1(x, y);
    Matrix M2(x, y);
    Matrix M3(x, y);

    Matrix M4(y, x);

    cout << "Enter 1st matrix  : " << endl;
    M1.accept();

    cout << "Enter 2nd  matrix  : " << endl;
    M2.accept();

    cout << "1st Matrix : " << endl;
    M1.print();
    cout << "2nd Matrix : " << endl;
    M2.print();

    cout << "Addition of matrix is : " << endl;
    add(M1, M2, M3, x, y);
    M3.print();

    cout << "substract of matrix is : " << endl;
    substract(M1, M2, M3, x, y);
    M3.print();

    cout << "Multiplication of matrix is : " << endl;
    Multiplication(M1, M2, M3, x, y);
    M3.print();

    cout << "Transpose of matrix is : " << endl;
    Transpose(M1, M4, x, y);
    M4.print();

    return 0;
}