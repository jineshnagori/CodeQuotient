#include<iostream>
#include<cstdio>
using namespace std;
int getFistOccurrence(int A[], int left, int right, int key) {
 while (left <= right) {
   int mid = left + (right - left) / 2;
   if (A[mid] == key) {
     if (mid - 1 >= left && A[mid - 1] == key)
       right = mid - 1;
     else
       return mid;
   } else if (A[mid] < key)
     left = mid + 1;
   else
     right = mid - 1;
 }
 return -1;
}
int getLastOccurrence(int A[], int left, int right, int key) {
 while (left <= right) {
   int mid = left + (right - left) / 2;
   if (A[mid] == key) {
     if (mid + 1 <= right && A[mid + 1] == key)
       left = mid + 1;
     else
       return mid;
   } else if (A[mid] < key)
     left = mid + 1;
   else
     right = mid - 1;
 }
 return -1;
}
int getCount(int arr[], int n, int k) {
 int first = getFistOccurrence(arr, 0, n - 1, k);
 if (first == -1)
   return 0;
 int last = getLastOccurrence(arr, 0, n - 1, k);
 return (last - first + 1);
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
     printf("%d\n", getCount(arr, N, K));
   }
 return 0;
}
