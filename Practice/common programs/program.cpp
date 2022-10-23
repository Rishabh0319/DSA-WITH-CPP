

/* ******************* WAP to count number of digits in number ****************** */

// #include<iostream>
// using namespace std;

// int main()
// {
//     int num,count=0;
//     cout<<"Enter a number: ";
//     cin>> num;

//     while(num != 0)
//     {
//        count++;
//        num = num/10;
//     }

//     cout<< "number of digit is: " << count;

//     return 0;
// }

/* ******************* WAP to find first and last digit of a number ****************** */

#include <iostream>
using namespace std;

int main()
{
    int first_Digit = 0;
    int last_Digit = 0;
    int num;

    cout << "Enter a number: ";
    cin >> num;

    while (num != 0)
    {
        if (last_Digit <= 0)
        {
            last_Digit = num % 10;
        }
        if (num / 10 == 0)
            break;

        num = num / 10;
        first_Digit = num;
    }

    cout<< "first digit: " << first_Digit <<endl;
    cout<< "last digit: " << last_Digit;
    return 0;
}
