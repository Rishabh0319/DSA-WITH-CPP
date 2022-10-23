

  /* *************** function call by refrance *************** */

#include<iostream>
using namespace std;

void swap(int *x, int *y)
{
   int t;
   t = *x;
   *x = *y;
   *y = t;
}

int main()
{
   
    int a,b;

    cout<<"enter two numbers: ";
    cin >>a >>b;

    cout<< "before swaping" <<endl;
    cout<<"a: " <<a <<endl <<"b: " <<b;

    swap(&a,&b);

    cout<< "after swaping swaping" <<endl;
    cout<<"a: " <<a <<endl <<"b: " <<b;
    
    return 0;
}