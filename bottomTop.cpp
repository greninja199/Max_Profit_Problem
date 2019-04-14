#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
  int n,j;
  cin>>n;
  int a[n][n];
  for(int i=0;i<n;i++)
  {
    for( j=0;j<=i;j++)
    {
      cin>>a[i][j];
    }
    for(int k=j;k<n;k++)
      a[i][k]=0;
  }
  int arr[n];
  for(int i=0;i<n;i++)
    arr[i]=a[n-1][i];
  for(int i=n-2;i>=0;i--)
  {
    for(j=0;j<=i;j++)
    {
      if(arr[j]>arr[j+1])
        arr[j]+=a[i][j];
      else
        arr[j]=arr[j+1]+a[i][j];
    }
  }
  cout<<arr[0];
}
