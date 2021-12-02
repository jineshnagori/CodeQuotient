#include <cstdio>
using namespace std;
int getFirstOccurrence(int A[], int n, int k) {
   int left = 0, right = n - 1;
   while (left <= right) {
       int mid = left + (right - left) / 2;
       if (A[mid] == k) {
           if (mid - 1 >= left && A[mid - 1] == k)
               right = mid - 1;
           else
               return mid;
       } else if (A[mid] < k)
           left = mid + 1;
       else
           right = mid - 1;
   }
   return -1;
}
int main() {
   int arr[50];
   int T,i,j;
  int N,K;
  scanf("%d",&T);
   for(j=1;j<=T;j++)
   {
  scanf("%d %d",&N,&K);
  for(i=0;i<N;i++)
    scanf("%d",&arr[i]);
     printf("%d\n", getFirstOccurrence(arr, N, K));
   }
     return 0;
}
