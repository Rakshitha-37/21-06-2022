#include <stdio.h>

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    //To check whether number is even or odd
    if(num & 1)
    {
        printf("%d is odd number\n", num);
    }
    else
    {
        printf("%d is even number\n", num);
    }
    
    //To check whether number is positive or negative
    if((num >> 31) & 1)
    {
        printf("%d is negative number\n", num);
    }
    else
    {
        printf("%d is positive number\n", num);
    }

    return 0;
}

