int* reverseSubarray(int a[], int n, int k){
  int s,end,s1,end1;
  for(int i=0;i<n;i=i+k)
  {
    if((i+k)<n)
    {
      s=i;
      end=i+k-1;
      while(s<end)
  {
    int temp=a[s];
     a[s]=a[end];
    a[end]=temp;
    end--;
    s++;
  }
    }
    else
    {
      int s1=i;
      int end1=n-1;
       while(s1<end1)
  {
    int temp=a[s1];
    a[s1]=a[end1];
    a[end1]=temp;
    end1--;
    s1++;
  }
    }
  }
  return a;
}
