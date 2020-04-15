#include<bits/stdc++.h>
using namespace std;
int func(int *arr,int s,int *mx)
{
int maxend=1;
if(s==1)
return 1;
int res;
for(int i=1;i<s;i++)
{
res=func(arr,i,mx);
if(arr[i-1]<arr[s-1]&&res+1>maxend)
maxend=res+1;
}
if(maxend>*mx)
*mx=maxend;
return maxend;
}
int main()
{int max=1;
int arr[]={10, 22, 9, 33, 21, 50, 41, 60};
int size=sizeof(arr)/sizeof(arr[0]);
cout<<"maximum elements in increasing order is\n"<<func(arr,size,&max);
return 0;
}
