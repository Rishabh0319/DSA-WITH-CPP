

/* ********************* WAP to input & print array Element using pointer ********************* */

#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int *ptr = arr;
    cout<< "Enter 5 Element in array: ";

    for(int i=0 ; i < 5 ; i++)
    {
        cin>> *(ptr + i);
    }
 
    cout<< "printing 5 Element in array: ";

    for(int i=0 ; i < 5 ; i++)
    {
        cout<< *(ptr + i)<<" ";
    }

    return 0;
}

