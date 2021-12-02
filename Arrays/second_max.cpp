#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed
using namespace std;
int main()
{
    // Write your code here
 	int a[5];
	int first,sec;
	int minn=9999999;
  	for(int i=0; i<5; i++){
      cin>>a[i];
      minn= min(minn,a[i]);
    }
  first = minn;
  sec = minn;
  for(int i=0; i<5;i++){
    if(first<a[i]){
      first = a[i];
    }
  }
  for(int i=0; i<5;i++){
    if(sec<a[i] && a[i]!=first){
      sec = a[i];
    }
  }
    cout<<sec;
    return 0;
}
