#include<iostream>
using namespace std;
void calc()
{
	char op;
	double a,b;
	double result=0;
	int c=1;
	bool first=true;
	while(c==1)
	{
		if(first)
		{
			cout<<"Enter the numbers you want to perform calculation on: ";
			while(!(cin>>a>>b)) 
			{
				cout<<"Invalid numbers. Please enter again: ";
				cin.clear();
				cin.ignore(1000,'\n');
			}
			first=false;
		}
		else
		{
			a=result;
			cout<<"Previous result: "<<result<<endl;
			cout<<"Enter next number: ";
			cin>>b;
		}
		while (true)
		{
			cout<<"\nWhat calculation do you want to do? (+, -, *, x, /): ";
			cin>>op;
			if(op=='+') {result=a+b;break;}
			else if(op=='-') {result=a-b;break;}
			else if(op=='*' || op=='x') {result=a*b;break;}
			else if(op=='/')
			{
				if(b==0) 
        		{
					cout<<"You divided by 0"<<endl;
					continue;
				}
				result=a/b;
				break;
			}
			else
			{
				cout << "Invalid operator. Try again."<<endl;
			}
		}
		cout<<"Want to continue? Press 1: ";
		while(!(cin>>c))
		{
			cout<<"Invalid choice, Please enter again: ";
			cin.clear();
			cin.ignore(1000,'\n');
		}
	}
	cout<<"The final results are: "<<result<<endl;
}
void menu()
{
	int choice;
	while(true)
	{
	cout<<"\n1. Do a calculation"<<endl;
	cout<<"2. Quit"<<endl;
	cout<<"Select:";
	while(!(cin>>choice))
	{
		cout<<"Invalid choice, Enter 1 or 2: ";
		cin.clear();
		cin.ignore(1000,'\n');
	}
	if(choice==1)
	{
		calc();
	}
	else if(choice==2)
	{
		break;
	}
	else
	{
		continue;
	}
}
}
int main()
{
	menu();
	return 0;
}
