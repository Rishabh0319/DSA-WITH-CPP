

/* ******************* WAP to print armstrong number in between given range ******************** */


#include<stdio.h>
void printArmstrong(int,int);
void main()
{
    printf("Enter a range: ");
    int s,e;
    scanf("%d %d",&s,&e);

    printArmstrong(s,e);
}


void printArmstrong(int start,int end)
{
   int sum,clone; 
   for (int num = start; num <= end; num++)
   {
      sum=0,clone = num;

      while (clone != 0)
      {
        int rem = clone % 10;
        sum = (sum + (rem*rem*rem));
        clone = clone/10;
      }
      
      if(sum == num)     // it means number is Armstrong
      {
        printf("%d ", sum);
      }
   }
     
}