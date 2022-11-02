

/* *********************** WAP to find all prime number between given interval using function *********************** */



// LOGIC OF FINDING PRIME NUMBER

// #include<stdio.h>
// void checkPrime(int);
// void main()
// {
//     int num;
//     printf("Enter a number to check prime or not: "); 
//     scanf("%d",&num);  
//     checkPrime(num);
// }

// void checkPrime(int num)
// {
//     int i;
//     for (i = 2; i <= num-1; i++)
//     {
//         if(num % i == 0)
//            break;
//     }
    
//     if(i == num)
//     printf("number is Prime");    
//     else
//     printf("number is Not Prime");
// }




#include <stdio.h>
void printPrime(int,int);
void main()
{
   int s,e; 
   printf("Enter starting and ending range");
   scanf("%d %d",&s,&e);
   printPrime(s,e);
}

void printPrime(int start, int end)
{
    int i,j;
   // Exception Handeling 
   if(start < end)
   {
      for(i = start ; i <= end ; i++)
      {

        for(j=2 ; j <= i ; j++)
            if(i % j == 0)
                break;
            
        if(j == i)
        {
            printf("%d ",i); 
        }
        
      }
   } 
   else
   {
    printf("Start value must be smaller then End ");
   }
}













