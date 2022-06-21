#include <stdio.h>

int main()
{
    int num, n;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Enter the value for 'n': ");
    scanf("%d", &n);
    //set last n bits
    num = num | ((1 << n) - 1);
    printf("After setting the last %d bits: num = %d\n", n, num);
    
    //clear last n bits
    num = num & ~((1 << n) - 1);
    printf("After clearing the last %d bits: num = %d\n", n, num);
    
    //toggle last n bits
    num = num ^ ((1 << n) - 1);
    printf("After setting the last %d bits: num = %d\n", n, num);

    return 0;
}

