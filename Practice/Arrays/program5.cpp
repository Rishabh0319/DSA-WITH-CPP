

/* **************** search elements using pointer ***************** */

#include <iostream>
using namespace std;

int main()
{
   int arr[5];   
   int *p = arr;
   cout<<"Enter 5 Elements in array: ";

   for (int i = 0; i < 5; i++)
   {
       cin>> *(p+i);
   }

//    p = arr;

   int elem;
   cout<< "Enter Elements to search";
   cin>> elem;

   bool signal = false;
   for(int i=0 ; i < 5 ; i++)
   {
      if(*(p+i) == elem)
      {
        signal = true;
        break;
      }  
   }

    if(signal)
        cout<<"Element found";
    else 
        cout<<"Element Not Found";
}







