#include<stdio.h>
int main(){
    int  n;
    printf("Enter a number whose table you want to print:");
    scanf("%d",&n);

    for (int i = 1; i <= 10; i++){
        printf(" %d\n",n*i);
    }
return 0;   
}