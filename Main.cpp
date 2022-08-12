#include <iostream>
using namespace std;

int main()
{
     int n, num, digit;
     int r = 0;

     cout << "Enter a positive number : ";
     cin >> num;

     n = num;

     do
     {
         digit = num % 10;
         r = (r * 10) + digit;
         num = num / 10;
     } while (num != 0);

     cout << " The reverse of the number is: " << r << endl;

     if (n == r)
     {
         cout << " The number is a palindrome.";
     }
     else
     {
         cout << " The number is not a palindrome.";
     }

    return 0;
}
