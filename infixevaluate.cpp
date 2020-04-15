#include<iostream>
#include<ctype.h>
using namespace std;
char str[40];
int numsta[40];
char opsta[40];
int ntop=-1;
int otop=-1;
int func(int a,int b)
{int ans;
 int c=a;
 int d=b;
 switch(opsta[otop])
 {
     case '+': ans=c+d;
     break;
     case '-': ans=c-d;
     break;
     case '*': ans=c*d;
     break;
     case '/': ans=c/d;
     break;
 }  return ans;
}
int stcomp(char a)
{
    if(a=='+'||a=='-')
        return 1;
    if(a=='*'||a=='/')
        return 2;
    else if(a=='0') return -1;
    else return 3;
}
int main()
{ int ans;
numsta[0]=-7698;
opsta[0]='0';
otop++;
ntop++;
cout<<"enter the infix expression\n";
cin.getline(str,40);
for(int i=0;str[i];i++)
{if(isdigit(str[i]))

      numsta[++ntop]=(int)(str[i]-'0');
  else if(str[i]==')')
    {while(opsta[otop]!='(')
          {ans=func(numsta[ntop-1],numsta[ntop]);
          numsta[--ntop]=ans;otop--;}
    otop--;
  }else if(stcomp(str[i])>stcomp(opsta[otop]))
  { opsta[++otop]=str[i];

  }else
      {
                while(opsta[otop]!='('&&opsta[otop]!='0'&&opsta[otop]!=')')
             {
    ans=func(numsta[ntop-1],numsta[ntop]);
          numsta[--ntop]=ans;otop--;
  }  opsta[++otop]=str[i];}

} while(otop>0)
{
    ans=func(numsta[ntop-1],numsta[ntop]);
          numsta[--ntop]=ans;otop--;
}
cout<<"Now Final answer is : \n";
cout<<ans;
}
