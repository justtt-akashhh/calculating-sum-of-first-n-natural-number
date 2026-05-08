#include<stdio.h>
int main()
{
    int a;                        
    printf("Enter a number: ");        //Taking input from the user
    scanf("%d",&a);

    int sum = 0;
    for (int i = 0; i <= a; i++){         //for loop for calculation
    sum = sum + i;}
    printf("The sum of the first %d natural numbers is: %d", a, sum);        // shows output to the user
    return 0;
}    
