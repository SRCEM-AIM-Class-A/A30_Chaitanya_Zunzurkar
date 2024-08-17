/* Program to Check Whether the input is a Binary number or not.
    // 1. if input is a binary number then print binary number and it's 1's Complement.
    // 2. if input is a bianry number then print Incorrect Number.
    // 3. use classes in the program.
*/
#include <iostream>
#include <string>
using namespace std;

class Binary // Making of a class named as Binary
{
private:
    string s;

public:
    void read(void);    // declaration of function to read Binary Number
    void check(void);   // declaration of function to check whether number is Binary or not
    void ones_complement(void); // declaration of function to convert binary number into it's 1's complement
    void display(void); // declaration of function to display Binary Nnumber
    void display_ones_complement(void); // declaration of function to Display binary number
};
int main()
{
    Binary bi;
    // Calling all the function 
    bi.read();
    bi.check();
    bi.display();
    bi.ones_complement();
    bi.display_ones_complement();

    return 0;
}

// defination of function to read
void Binary::read(void)
{
    cout << "Enter Binary Number :";
    cin >> s;
}
// defination of function check 
void Binary::check(void)
{
    // loop will ittreate till the end of string.
    // if it contain digit other than '1' and '0' then the number will no longer remain binary and it will print "Incorrect Number".
    for (int i = 0; i < s.length(); i++)
    {
        if ((s.at(i) != '0') && (s.at(i) != '1'))
        {
            cout << "Incorrect Number."<< endl;
            exit(0);
        }
    }
}
// defination of function ones-complement
void Binary::ones_complement(void)
{
    // loop will ittreate till the end of string.  
    // change
       // 0 ----> 1
       // 1 ----> 0
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }

        else
        {
            s.at(i) = '0';
        }
    }
}
// defination of function display
void Binary::display(void)
{
    cout<<"Displaying your Binary number :";
    for (int i = 0; i < s.length(); i++)
    {
        cout<< s.at(i);
    }
    cout<<endl;
}
// defination of function display_ones-complement
void Binary::display_ones_complement(void)
{
    cout<<"Displaying Ones Complement of your binary number :";
    for (int i = 0; i < s.length(); i++)
    {
        cout<< s.at(i);
    }
    cout<<endl;
}