#include<iostream>
using namespace std;
int factorial(int f)
	{
		if(f>1)
		{
			return f*factorial(f-1);
		}
	}
int main()
{
	int f;
	cout<<"Enter Your Number: "<<endl;
	cin>>f;	
	
	cout<<"factorial: "<<factorial(f);
	
	return 0;
}
