

/* ******************** WAP to copy one array to another  ******************* */

#include <iostream>
using namespace std;

int main()
{
    int arr[10], arr2[10];
    cout<<"Enter 10 elements in array: ";

    for(int i=0 ; i < 10 ; i++)
    {
       cin>> arr[i];
       arr2[i] = arr[i];
    }

    cout<<"printing original one: ";
    for(int i=0 ; i < 10 ; i++)
    {
       cout<< arr[i] <<" ";
    }

    cout<<"printing arr2 one: ";
    for(int i=0 ; i < 10 ; i++)
    {
       cout<< arr2[i] <<" ";
    }

    return 0;
}
