#include <stdio.h>

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    for(int i = 31;i >= 0;i--)
    {
        if((num >> i) & 1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");

    return 0;
}

