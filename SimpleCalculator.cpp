#include <iostream>
using namespace std;
int main() {
int n1,n2;
char op;
cout<<"Enter 1st numbers: ";
cin>>n1;
cout<<"Enter operand: ";
cin>>op;
cout<<"Enter 2nd number:";
cin>>n2;
switch (op)
{
case '+':
cout<<n1+n2<<endl;
break;
case '-':
cout<<n1-n2<<endl;
break;
case '*':
cout<<n1*n2<<endl;
break;
case '/':
cout<<n1/n2<<endl;
break;
case '%':
cout<<n1%n2<<endl;
break;
default:
cout<<"Operator not found!"<<endl;
break;
}

return 0;
}