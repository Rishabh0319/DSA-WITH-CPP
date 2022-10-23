
#include<iostream>
using namespace std;

// int main()
// {
// //     int arr[10];           // declaration array;
// //     cout << endl << "Every thing is fine" << endl << endl;


// //     // accessing an array

// //     cout<< "value at position 8 " << arr[7] << endl <<endl;
// //     cout<< "value at index 8 " << arr[8] << endl <<endl;



//     // initialization of array

//     // int arr1[5] = {12,23,34,45,56};
//     // cout<< arr1[2] << endl << endl;   //  this target to 34 value in index 2

//     // for(int index=0; index < 5; index++)
//     // {
//     //    cout<< arr1[index] << " ";
//     // }

//     // what if you want initialize same value in all memory cell of the array ??

//     // int arr2[5] = {0};     // you can initialize all values with o in whole array

//     // for(int index=0; index < 5 ; index++)    
//     // {
//     //     cout<< arr2[index] << " ";
//     // }

//     // cout<< endl <<endl;



//     // int arr3[5] = {23};    // this is wrong you cannot initialize like this the whole value with number accept zero(0)
    
//     // for(int index=0 ; index < 5 ; index++)
//     // {
//     //     cout<< arr3[index] + " ";
//     // } 




//     // Using Designated Initializers      int arr[5] = {[0...5]=23};


//     return 0;
// }











/* ******************* function call by passing array ******************** */

int takeInput(int arr1[])
{
   int size = (sizeof(arr1)/sizeof(int));
   for(int i=0 ; i < size ; i++)
   {
    cout<<"enter element no: " << i+1 <<": ";
    cin>> arr1[i];
   }   
   return arr1;
}

#include<iostream>
int main()
{
  int arr[10];
  arr = takeInput(arr);

  int size = (sizeof(arr)/sizeof(int));

  for(int i=0 ; i < size ; i++)
   {
    cout<< arr[i] <<" ";
   }   
 
  return 0;
}




