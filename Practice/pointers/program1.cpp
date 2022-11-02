

/* ****************** WAP to swap two numbers using pointers ******************* */

#include <iostream>
using namespace std;

int main()
{
    int a,b;
    int *p = &a,*q= &b;

    cout<< "Enter two numbers: ";
    cin >>a >>b;
    
    cout<< "Before swap: ";
    cout<< "A: " <<a <<" " <<"B: " <<b <<endl;
    *p=*p+*q;
    *q=*p-*q;
    *p=*p-*q;
    

    cout<< "After swap: ";
    cout<< "A: " <<a <<" " <<"B: " <<b;

    return 1;
}