#include<iostream>
using namespace std;

int main()
{
	int a,s=0,rev;
	
	cout<<"Enter Element: ";
	cin>>a;
	
	while(a!=0)
	{
		rev=a % 10;
		s =s * 10 + rev;
		a/=10;
	}
	cout<<"Reverse Number : "<<s;
	return 0;
}
