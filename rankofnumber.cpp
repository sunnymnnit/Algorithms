#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void rank(int *ar,int size)
{
float ran[size];
for(int i=0;i<size;i++)
{int r=1;
int s=1;
  for(int j=0;j<size;j++)
  {
      if(i!=j&&ar[i]>ar[j])
        r+=1;
      if(i!=j&&ar[i]==ar[j])
        s+=1;
  } ran[i]=r+(float)(s-1)/(float) 2;
  cout<<ran[i]<<" ";
}}

int main()
{int arr[]={3,2,5,3,7,2,6};
int s=sizeof(arr)/sizeof(arr[0]);
rank(arr,s);
}
