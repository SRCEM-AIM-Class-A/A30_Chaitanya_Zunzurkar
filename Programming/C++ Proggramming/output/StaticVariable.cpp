#include <iostream>
using namespace std;

int main()
{
    static int count;
    cout<< "Enter Number :";
    cin>> count;

    cout<<count<<endl;
    count++;
    cout<<count<<endl;
    count += 4;
    cout<<count<<endl;
    return 0;
}