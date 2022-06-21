#include <stdio.h>

int main()
{
    int num, n, pos;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Enter the value for 'n': ");
    scanf("%d", &n);
    printf("Enter the value for 'pos': ");
    scanf("%d", &pos);
    
    //To set n bits from position
    num = num | ((1 << n) - 1) << pos - n + 1;
    printf("After setting %d bits from %d position: num = %d\n", n, pos, num);
    
    //To clear n bits from position
    num = num & ~(((1 << n) - 1) << pos - n + 1);
    printf("After setting %d bits from %d position: num = %d\n", n, pos, num);
    
    //To set n bits from position
    num = num ^ ((1 << n) - 1) << pos - n + 1;
    printf("After setting %d bits from %d position: num = %d\n", n, pos, num);
    return 0;
}

