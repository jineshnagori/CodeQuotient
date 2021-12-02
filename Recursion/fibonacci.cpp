#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
void fib(int n, int a, int b,int c){
  if(n>c)
    return;
  fib(n+1,b,a+b,c);
  cout<<a+b<<endl;
}
int main()
{
  int n;
  cin>>n;
  if(n>2)
  	fib(3,0,1,n);
  if(n==1)
    cout<<0;
  if(n>=2)
    cout<<1<<endl<<0;
   return 0;
}
