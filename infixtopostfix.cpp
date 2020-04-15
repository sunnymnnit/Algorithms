#include<iostream>
#include<ctype.h>
using namespace std;
int top=-1;
char sta[50];
int stcomp(char str)
{if(str=='+'||str=='-')
return 0;
if(str=='*'||str=='/')
return 1;
if(str=='^')
    return 2;
if(str=='0')
    return -1;
else if(str=='(') return 3;
else return -2;
}
int main()
{char str[50];
sta[0]='0';top++;
cout<<"enter the expression of infix\n";
cin.getline(str,50);

for(int i=0;str[i];i++)
{if(isalpha(str[i]))
cout<<str[i];
else if(str[i]==')')
{while(sta[top--]!='(')
cout<<sta[top+1];
}else if(stcomp(str[i])>stcomp(sta[top]))
sta[++top]=str[i];

else {while(sta[top]!='('&&stcomp(sta[top])>=stcomp(str[i])) cout<<sta[top--];
sta[++top]=str[i];}
}while(top>0)
cout<<sta[top--];
return 0;}
