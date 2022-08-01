#include<iostream>
using namespace std;
void swap()
{
	int a,b,c;
	cout<<"Enter Number of a: ";
	cin>>a;
	
	cout<<"Enter Number of b: ";
	cin>>b;
		
	c=a;
	a=b;
	b=c;
	
	cout<<"value of a: "<<a<<endl;
	cout<<"value of b: "<<b;

}
int main()
{
	
	swap();
	return 0;
}
