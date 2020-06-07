#include <iostream>
using namespace std;

class Calci
{
    float a;
	float b;
	char o;
	float f;
	public:
		Calci()
		{
			a=0;
			b=0;
			f=0;
			o='x';
		}
		void accept()
		{
			cout<<"Enter the first number, operator, second number: \n";
			cin>>a>>o>>b;
		}
		void display()
		{
			cout<<a<<o<<b<<"="<<f<<endl;
		}
		void calc()
		{
			switch (o)
			{
				case '+': f=a+b;
						  display();
						  break;
				case '-': f=a-b;
						  display();
						  break;
				case '*': f=a*b;
						  display();
						  break;
				case '/': f=a/b;
						  display();
						  break;
				default: cout<<"Invalid Character.\n";
						  break;
			}
		}
};

int main()
{
	char choice;
	do
	{
		Calci c;
		c.accept();
		c.calc();
		cout<<"Do you want to continue? (y/n): ";
		cin>>choice;
	}
	while (choice=='Y'||choice=='y');
	return 0;
}

			
