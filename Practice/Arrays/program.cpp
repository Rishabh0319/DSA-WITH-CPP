

/* **************** WAP to print all negative elements in an array ****************** */


// #include <iostream>
// using namespace std;
// int main()
// {
//    int size;
//    cout<< "Enter size of array: ";
//    cin>> size;

//    int arr[size];

//    for(int index=0; index < size ; index++)
//    {
//       cout<<"enter Element no " << index+1 <<": ";
//       cin>> arr[index];
//    }

//    for(int index=0 ; index < size ; index++)
//    {
//       if(arr[index] < 0)
//         cout<< arr[index] <<" ";
//    }

//    return 0;
// }





/* **************** WAP to find the sum of all array elements ****************** */


// #include<iostream>
// using namespace std;

// int main()
// {
//     int size;
//     cout<< "Enter size of an array: ";
//     cin>> size;

//     int arr[size];

//     for(int index=0 ; index < size ; index++)
//     {
//        cout<< "enter element no " << index+1 << ": ";
//        cin>> arr[index];
//     }

//     int sum = 0;
//     for(int index=0 ; index < size ; index++)
//     {
//        sum += arr[index];
//     }

//     cout<< "sum of all array elements is: " << sum;

//     return 0;
// }




/* **************** WAP to find the minimum and maximum of array elements ****************** */


// #include <iostream>
// using namespace std;

// int main()
// {
//     int size;
//     cout<< "Enter size of the array: ";
//     cin>> size;

//     int arr[size];
    
//     for(int index=0 ; index < size ; index++)           // input elements of the array
//     {
//        cout<< "enter element no " << index+1 << ": ";
//        cin>> arr[index];
//     }

//     int max = arr[0];
//     int min = arr[0];
    
//     for(int index=0 ; index < size ; index++)
//     {
//        if(arr[index] > max)
//        {
//           max = arr[index];
//        }
//        if(arr[index] < min)
//        {
//           min = arr[index];
//        }
//     }

//     cout<< "max is : " <<max <<endl;
//     cout<< "min is : " <<min <<endl;

//     return 0;
// }





/* **************** WAP to count total number of even and odd elements in an array ****************** */


// #include <iostream>
// using namespace std;

// int main()
// {
//     int even=0,odd=0,size=0;

//     cout<<"Enter the size of the array: ";
//     cin>> size;
//     int arr[size];

//     for(int index=0; index < size; index++)
//     {
//        cout<<"enter element no " << index+1 <<": ";
//        cin>> arr[index];
//     }
    
//     for(int index=0 ; index < size ; index++)
//     {
//        if(arr[index] % 2 == 0)
//        {
//           even = even+1;
//        } 
//        else
//        {
//           odd = odd+1;
//        }
//     }

//     cout<< "number of even element is: " << even << endl;
//     cout<< "number of odd element is: " << odd << endl;

//     return 0;
// }



/* **************** WAP to copy all elements of one array to another ****************** */


// #include <iostream>
// using namespace std;

// int main()
// {
//     int size;
//     cout<< "Enter the size of Array: ";
//     cin>> size;

//     int arr[size];

//     for(int index=0 ; index < size ; index++)
//     {
//        cout<< "enter element no " << index+1 <<": ";
//        cin>> arr[index];
//     }

//     cout<<"this is original ARRAY::" <<endl<<endl;
    
//     for(int index=0 ; index < size ; index++)
//     {
//        cout<< arr[index] <<" ";
//     }
//     cout<<endl;

//     int size_of_array = (sizeof(arr)/sizeof(int));
  
//     int arr2[size_of_array];

//     for(int index=0 ; index < size ; index++)
//     {
//        arr2[index] = arr[index];
//     }

//     cout<<"this is copyed ARRAY::" <<endl<<endl;
    
//     for(int index=0 ; index < size_of_array ; index++)
//     {
//        cout<< arr2[index] <<" ";
//     } 
//     cout<< endl;
//     return 0;
// }




/* **************** WAP to count duplicate elements in array ****************** */


// #include<iostream>
// using namespace std;

// int main()
// {
//    int size, count=0;
//    cout<<"Enter the size of the array: ";
//    cin>> size;
//    int arr[size];
//    for(int i=0; i < size; i++)
//    {
//       cout<<"Enter Element no " << i+1 <<": ";
//       cin>> arr[i];
//    }

//    for(int i=0 ; i < size; i++)
//    {
//       for(int j = i+1 ; j < size ; j++)
//       {
//          if(arr[i] == arr[j]) 
//             {
//                count++;
//                break;
//             }
//       }
//    }

//    cout<< "number of duplicate Elements is: " << count;

//    return 0;
// }


/* **************** WAP to find second largest element in an array ****************** */


// #include <iostream>
// using namespace std;

// int main()
// {
//    int size;
//    cout<< "Enter the Size of the Array: ";
//    cin>> size;
//    int arr[size];

//    // input elements in array
//    for(int index=0; index < size; index++)
//    {
//       cout<<"Enter element no "<<index+1 <<": ";
//       cin>> arr[index];
//    }

//    for(int i=0 ; i < size; i++)
//    {
//       for(int j=i+1 ; j < size ; j++)
//       {
//          if(arr[i] > arr[j])
//          {
//             int temp = arr[i];        // LOGIC OF SWAPING USING THIRD VARIABLE
//             arr[i] = arr[j];
//             arr[j] = temp;
//          }
//       }
//    }

//    int second_Largest_Element = arr[size-2];

//    cout<< "Second Largest Element is: " << second_Largest_Element;

//    return 0;
// }



/* **************** WAP to count frequency of each element in array ****************** */


#include <iostream>
using namespace std;

int main()
{
    int size,count=0;
    cout<<"Enter the size of the array: ";
    cin>> size;

    int arr[size], freq[size];

    for(int i=0; i < size; i++)
    {
       cout<<"enter element no " << i+1 << ": ";
       cin>> arr[i];
    //    freq[i] = -1;
    }

    for(int i=0; i < size; i++)
    {
        count=1;
       for(int j=i+1; j < size; j++)
       {
          if(arr[i] == arr[j])
          {
            count++;
            freq[j] = 0;
          }
       }

       if(freq[i] != 0)
       {
         freq[i] = count;
       }
    }

    cout<<"list of each element frequency: "<<endl<<endl;

    for(int i=0 ; i < size ; i++)
    {
       if(freq[i] != 0) 
       {
          cout<< "frequency of " << arr[i] <<" is: " <<freq[i] <<endl;
       }
    }

    return 0;
}
















