#include <stdio.h>
/* Include other headers as needed */
int sumOfDigits(int n)
{
    int ans = 0;
    while (n > 0)
    {
        ans += n % 10;
        n = n / 10;
    }
    return ans;
}
int main()
{
   int T, n;
   scanf("%d",&T);
   while(T--)
   {
     scanf("%d",&n);
     printf("%d\n", sumOfDigits(n));
   }
 return 0;
}
