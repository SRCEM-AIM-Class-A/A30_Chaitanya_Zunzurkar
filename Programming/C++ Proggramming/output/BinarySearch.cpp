#include <iostream>
using namespace std;

int main()
{
    int size, search;
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    size = 10;

    cout << "Enter Element you want to search: ";
    cin >> search;

    int first = 0;
    int last = size - 1;
    int mid;

    while (first <= last)
    {
        mid = (first + last) / 2;

        if (array[mid] == search)
        {
            cout << "Element is present at position " << mid + 1 << "." << endl;
            return 0;
        }
        else if (array[mid] < search)
        {
            first = mid + 1;
        }
        else
        {
            last = mid - 1;
        }
    }

    cout << "Element is not present in the array." << endl;
    return 0;
}
