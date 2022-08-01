#include<iostream>
using namespace std;
void menu()
{	int ch;
	int a,b;
	
	cout<<"==========================="<<endl;
	cout<<"        1.Addition         "<<endl;
 	cout<<"        2.Substraction     "<<endl;
	cout<<"        3.Multiplicatin    "<<endl;
	cout<<"        4.Division         "<<endl;
	cout<<"        5.Modular          "<<endl;
	cout<<"==========================="<<endl;
	
	cout<<"Please Select Any Number"<<endl;
	cin>>ch;
	
	cout<<"Please Enter First Number"<<endl;
	cin>>a;
	
	cout<<"Please Enter Second Number"<<endl;
	cin>>b;
		
	if(ch==1)
	{
		cout<< "Addition Of Two Number Is: "  <<a+b;
	}
	else if(ch==2)
	{
		cout<< "Substraction Of Two Number Is: "  <<a-b;
	}
	else if(ch==3)
	{
		cout<< "Multiplication Of Two Number Is: "  <<a*b;
	}
	else if(ch==4)
	{
		cout<< "Division Of Two Number Is: "  <<a/b;
	}
	else if(ch==5)
	{
		cout<< "Modulo Of Two Number Is: "  <<a%b;
	}
}
int main()
{
	menu();
	return 0;
}
