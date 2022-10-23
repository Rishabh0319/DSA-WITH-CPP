

#include <iostream>
using namespace std;

void printNegativeElements()
{
   int size;
    cout<< "enter the size of the array: ";
    cin>> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout<< "enter element no " << i+1 << ": ";
        cin>> arr[i];
    }

    for(int index=0; index < size; index++)
    {
       if(arr[index] < 0)
       {
          cout<< arr[index] <<" ";
       }
    }
}

void sumOfAllElements()
{
    int size;
    cout<< "Enter the size of the Array: ";
    cin>> size;
    int arr[size];
    int sum=0;

    for(int index=0 ; index < size ; index++)
    {
       cout<< "enter element no " << index+1 <<": ";
       cin>> arr[index];
    }

    for(int index=0 ; index < size; index++)
    {
       sum += arr[index];
    }

    cout<< "sum of all Elements is: " <<sum;
}

void maxAndMin()
{
    int size;
    cout<<"Enter the size of the array: ";
    cin>> size;
    int arr[size];

    for(int index=0 ; index < size ; index++)
    {
        cout<< "Enter element no " << index+1 <<": ";
        cin>> arr[index];
    }

    int max= arr[0], min= arr[0];
    for(int index=0 ; index < size ; index++)
    {
       if(arr[index] > max)
       {
         max = arr[index];
       }
       if(arr[index] < min)
       {
         min = arr[index];
       }
    }

    cout<< "maximum is: " << max << endl;
    cout<< "minimum is: " << min << endl;
}


void frequencyOfElements()
{
    int size,count;
    cout<< "Enter the size of the array: ";
    cin>> size;
    int arr[size], freq[size];

    for(int index=0 ; index < size ; index++)
    {
       cout<< "enter element no: " << index+1 <<": ";
       cin>> arr[index];
       freq[index]= -1;
    }

    for(int i=0 ; i< size ; i++)
    {
        count=1;
        for(int j=i+1 ; j < size ;j++)
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

    for(int i=0 ; i< size ; i++)     // print the array elements and it's frequency
    {
        if(freq[i] != 0)
        {
            cout<<"frquency of " << arr[i] <<": " <<freq[i] <<endl;
        }
    } 
}

void countDuplicateElements()
{
    int size,count=0;
    cout<<"Enter the size of the array: ";
    cin>> size;
    int arr[size];

    for(int i=0 ; i < size ; i++)
    {
       cout<< "enter the element no " << i+1 <<": ";
       cin>> arr[i];
    }

    for(int i=0 ; i < size ; i++)
    {
        for(int j= i+1 ; j < size ; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }

    cout<<"number of duplicate elements is: " << count;
}


int main()
{
    // printNegativeElements();    
    // sumOfAllElements(); 
    // maxAndMin();
    // frequencyOfElements();
    // countDuplicateElements();

    int arr[10];
    
    cout<< arr[12] << endl << arr[-3];

    return 0;
}


