

#include<stdio.h>
void findFactorial(int);
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    
    findFactorial(num);
}

void findFactorial(int num)
{
    int fact = 1;
    for(int i=num ; i >= 1 ; i--)
    {
       fact = fact * i;
    }
    printf("%d ", fact);

}