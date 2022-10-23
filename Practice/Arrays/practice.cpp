#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the size of the array: ";
    int size;
    cin>> size;
    int arr[size], freq[size];

    cout<<"Enter " <<size <<" elements in array" <<endl;

    for(int i=0 ; i < size ; i++)
    {
       cin>> arr[i];
    }

    for(int i=0 ; i < size ; i++)
    {
       int count = 1;

       for(int j= i+1 ; j < size ; j++)
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

    for(int i=0 ; i < size ; i++)
    {
       if(freq[i] != 0)
       {
          cout<<"frequency of " <<arr[i] <<" is: " <<freq[i] <<endl;
       }
    } 

    return 0;
}


