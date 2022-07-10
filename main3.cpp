#include <iostream>
using namespace std;
int main()
{
	cher ch;
	float a,b;
	cout<<"inter (+/-/*/(/)):";
	cin>>ch;
	cout<<"intera namber";
	cin>>a;
	cout<<"inter a number";
	cin>>b;
	if(ch=='+')
	{
		a=a+b;
	}
	else if(ch=='-')
	{
		a=a-b;
	}
	else if(ch=='*')
	{
		a=a*b;
	}
	else if(ch=='/')
	{
		a=a/b;
	}
	cout <<a;
	return0;
}

