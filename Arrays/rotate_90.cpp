#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
        cin>>arr[i][j];
      }
    }
    for(int i=0;i<n;i++)
    {
      for(int j=i;j<n;j++)
      {
        swap(arr[i][j],arr[j][i]);
      }
    }
    for(int i=0;i<n;i++)
    {
        int l=0;
        int h=n-1;
        while(l<h)
        {
          swap(arr[i][h],arr[i][l]);
          l++;
          h--;
      }
    }
     for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
        cout<<arr[i][j];
        if(j!=n-1)
        {
          cout<<" ";
        }
      }
       cout<<endl;
     }
    cout<<endl;
  }
   return 0;
}
