/* ******************* Example 1 ******************* */
/*
#include<iostream>
using namespace std;

int main()
{

     int saving;

    cout<< "Enter your Savings: ";
    cin>> saving; 
   
    if(saving > 5000)
    {
        cout<< "Rashmi";
    }
    else
    {
        cout<< "neha";
    } 
    
        
    return 0;
}
*/


/* ************************ WAP to find the maximum between two numbers ************************** */

/* 
#include<iostream>
using namespace std;

int main()
{
   int first_number, second_number; 

   cout<< "Enter Two numbers: ";
   cin>> first_number;
   cin>> second_number;

   if(first_number > second_number)
   {
      cout<< "maximum is: " <<first_number;
   }
   else
   {
      cout<< "maximum is: " <<second_number;
   }

   return 0;
} 
 */





/* ************************ WAP to find the maximum between three numbers ************************** */

/* 
// ####### FIRST LOGIC #######

#include<iostream>
using namespace std;

int main()
{
  int first_number, second_number, third_number, maximum;
  cout<< "Enter three numbers\n"; 
  
  cout<< "enter First number: ";
  cin>> first_number;

  cout<< "enter second number: ";
  cin>> second_number;

  cout<< "enter third number: ";
  cin>> third_number;

  if(first_number > second_number)
  {
    if(first_number > third_number)
    {
        cout<< first_number;
    }
    else
    {
        maximum = third_number;
    }
  }
  else
  {
    if(second_number > third_number)
    {
        maximum = second_number;
    }
    else
    {
        maximum = third_number;
    }
  }
  
  cout<< "Maximum is: " << maximum;

  return 0;
}

 */



// ######### SECOND LOGIC #########

/* #include<iostream>
using namespace std;

int main()
{
    int num1, num2, num3, maximum;
    cout<< "Enter three number\n";

    cout<<"enter first number: ";
    cin>> num1;

    cout<<"enter second number: ";
    cin>> num2;

    cout<<"enter third number: ";
    cin>> num3;

    if(num1 > num2 && num1 > num3)
    {
        maximum = num1;
    }
    else if(num2 > num1 && num2 > num3)
    {
        maximum = num2;
    }
    else
    {
        maximum = num3;
    }

    cout<< "maximum number is: " << maximum;

    return 0;
}

 */


/* ************************ WAP check whether number is negative positive or zero ************************** */

/* 
#include<iostream>
using namespace std;

int main()
{
   int number;
   cout<<"Enter a number: ";
   cin>> number;

   if(number > 0)
   {
     cout<<"number is positive";
   }
   else if(number < 0)
   {
     cout<< "number is negative";  
   }
   else
   {
     cout<< "number is zero";
   }
   
   return 0;
}

 */






/* ************************ WAP to check whether a number is divisible by 5 and 11 or not ************************** */




/* 

// ######### FIRST LOGIC ##########

#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<< "Enter a number: ";
    cin>> number;

    if((number % 5 == 0) && (number % 11 == 0))
    {
        cout<< "Number is divisible by 5 and 11\n";
    }
    else
    {
        cout<< "number is not divisible by 5 and 11\n";
    }

    return 0;
}
 */


/* 
// ############ SECOND LOGIC ############

#include<iostream>
using namespace std;

int main()
{
   int number;
   cout<< "Enter a number: ";
   cin>> number;

   if(!(number % 5) && !(number % 11))
     cout<< "number is divisible by 5 and 11";
   else
     cout<< " number is not disivible by 5 and 11";
  return 0;
}


 */






/* ************************ WAP to check whether number is even or odd ************************** */

/* 
#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<< "Enter a number";
    cin>> number;

    if(number % 2 == 0)
    {
        cout<< "number is even";
    }
    else
    {
        cout<< "number is odd";
    }

    return 0;
}

 */





/* ************************ WAP to check whether check year is leap year or not ************************** */

/* 
#include<iostream>
using namespace std;

int main()
{
    int year;

    cout<< "Enter any year: ";
    cin>> year;

    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
       cout<< "leap Year";
    }
    else
    {
       cout<<"common Year";
    }

    return 0;
}

 */
