#include <stdio.h>
void decimalToBinary(int n)
{
    // array to store binary number
    int binaryNum[32];
    int i = 0;
    while (n > 0)
    {
        binaryNum[i++] = n % 2;
        n = n / 2;
    }
    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
}
