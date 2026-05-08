#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);

    int sum = 0;
    for (int i = 0; i <= a; i++){
    sum = sum + i;}
    printf("The sum of the first %d natural numbers is: %d", a, sum);
    return 0;
}    