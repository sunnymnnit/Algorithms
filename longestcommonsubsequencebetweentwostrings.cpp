#include<bits/stdc++.h>
using namespace std;
int max(int a,int b)
{return (a<b)?b:a;}
int func(char *a,char *b,int la,int lb)
{ if(la==0||lb==0)
return 0;
    if(a[la-1]==b[lb-1])
return 1+func(a,b,la-1,lb-1);
else return (max(func(a,b,la-1,lb),func(a,b,la,lb-1)));
}
int main()
{char a[]="slkflsa";
char b[]="lksjfgsa";
int la=strlen(a);
int lb=strlen(b);
cout<<"length of longest common subsequence is :"<<func(a,b,la,lb);
}
