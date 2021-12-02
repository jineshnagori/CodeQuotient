#include <stdio.h>
/* Include other headers as needed */
void fib(int n)
{
    int a = 0, b = 1, c;
    if (n >= 0)
        printf("%d\n", a);
    if (n > 1)
        printf("%d\n", b);
    for (int i = 2; i < n; i++)
    {
        c = a + b;
        printf("%d\n", c);
        a = b;
        b = c;
    }
}
int main()
{
  int n;  
  scanf("%d",&n);
    fib(n);
    return 0;
}
