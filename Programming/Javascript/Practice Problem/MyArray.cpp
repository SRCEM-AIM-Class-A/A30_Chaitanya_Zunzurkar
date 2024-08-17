#include <iostream>
using namespace std;

class MyArray
{
    int TotalSize;
    int UsedMemoryBlocks;
    int *array;

public:
    MyArray();
    void getSize();
    void Display();
};

MyArray::MyArray()
{
    array = nullptr;
}

void MyArray::getSize()
{
    cout << "Enter Size of Array you want to create :";
    cin >> TotalSize;

    array = new int[TotalSize];
    int element;
    cout << "Enter Number of Element you want to enter :";
    cin >> element;

    for (int i = 0; i < element; i++)
    {
        cout << "Enter Element :";
        cin >> array[i];
    }
}

void MyArray::Display()
{
    int element;
    cout << "Number of Element you have entered :";
    cin >> element;
    int *ptr = array;
    for (int i = 0; i < TotalSize; i++)
    {
        if (i < element)
            cout << &array[i] << " is occupied." << endl;
        else
            cout << &array[i] << " is not occupied." << endl;
    }
}

int main()
{
    MyArray myArray;
    myArray.getSize();
    myArray.Display();

    return 0;
}
