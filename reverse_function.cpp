#include <iostream>
using namespace std;

int reverseNumber(int num) 
{
    int reversed = 0;
    while (num != 0) 
    {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

int main() 
{
    int number;

    cout << "Enter number ,And i`ll reverse it :";
    cin >> number;

    cout << "Reverse of number is: " << reverseNumber(number) << endl;

    return 0;
}
