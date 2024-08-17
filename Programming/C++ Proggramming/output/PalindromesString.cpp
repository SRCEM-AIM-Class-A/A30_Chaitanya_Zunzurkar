#include <iostream>
#include <string.h>
using namespace std;

int isPalindromeString(char str[]);

int main()
{
    char str[100];
    cout<<"Enter String :";
    fgets(str , 100 , stdin);
    if(isPalindromeString(str))
    {
        cout<<"string is palindrome.";
    }
    else{
         cout<<"string is not palindrome.";
    }
   
}

int isPalindromeString(char str[])
{ 
    int high=strlen(str) -1;
    int low=0;
    while (high > low)
    {
        if(str[high] != str[low])
        {
            return 0;
        }
         low++;
         high--;
    }
    return 1;
      
}