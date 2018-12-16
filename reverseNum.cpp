#include <iostream>
using namespace std;

int main()
{

    int number, reverse = 0;

    cout << "Input a number to reverse: ";
    cin >> number;

    for (; number!=0 ;)
    {
        reverse *= 10;
        reverse += number % 10;
        number /= 10;
    }

    cout << "Reversed number is: " << reverse << endl;



    return 0;
}
