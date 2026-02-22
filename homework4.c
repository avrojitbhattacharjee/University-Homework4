//check prime numbers

#include<stdio.h>

int checkprime(int n){
    if(n<=1)
    return 0;

    for(int i=2; i*i <=n; i++)
    {
        if(n % i ==0)
            return 0;
    }
    return 1;
}
int main()
{
    int num;
    printf("Enter any Number :");
    scanf("%d",&num);

    if(checkprime(num))
    {
        printf("This is prime number");
    } else
        printf("Not a prime number");

   return 0;
}

