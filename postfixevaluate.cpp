#include<iostream>
#include<ctype.h>
using namespace std;
int sta[30];
int top=-1;
int main()
{char str[30]; int ans;
cout<<"enter the postfix expression\n";
cin.getline(str,30);
for(int i=0;str[i];i++)
{if(isdigit(str[i]))
{sta[++top]=str[i]-'0';
cout<<"before "<<sta[top];
}else {
switch(str[i])
{case '+': ans=sta[top-1]+sta[top];
            break;
 case '-':   ans=sta[top-1]-sta[top];
            break;
 case '/':   ans=sta[top-1]/sta[top];
            break;
 case '*':   ans=sta[top-1]*sta[top];
            break;
}
sta[--top]=ans;
}

}cout<<"ans is: "<<sta[top];

return 0;
}
