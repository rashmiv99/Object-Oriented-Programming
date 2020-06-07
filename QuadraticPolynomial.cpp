#include <iostream>
#include <cmath>
using namespace std;

class Quadratic
{
	int a;
	int b;
	int c;
	public:
		Quadratic()
		{
			a=0;
			b=0;
			c=0;
		}
		Quadratic operator+(Quadratic x)
		{
			Quadratic temp;
			temp.a = (a)+(x.a);
			temp.b = (b)+(x.b);
			temp.c = (c)+(x.c);
			return temp;
		}
		friend ostream &operator<<(ostream &out, Quadratic &y)
		{
			out<<y.a<<"x^2 + "<<y.b<<"x + "<<y.c<<endl;
			return out;
		}
		friend istream &operator>>(istream &in, Quadratic &y)
		{
			in>>y.a>>y.b>>y.c;
			return in;
		}
		void eval(int v)
		{
			int ans = (a*v*v)+(b*v)+(c);
			cout<<"The value of the entered expression when x = "<<v<<" is "<<ans<<endl;
		}
		void solution()
		{
			float ans1, ans2;
			ans1 = ((-b) + sqrt(pow(b,2)-(4*a*c)))/(2*a);
			ans2 = ((-b) - sqrt(pow(b,2)-(4*a*c)))/(2*a);
			cout<<"The solutions are: "<<ans1<<" and "<<ans2<<endl;
		}
};

int main()
{
	Quadratic a, b, c;
	int choice;
	char ans;
	do
	{
		cout<<"\n************* MENU ************\n";
		cout<<"\n\t1.Addition\n\t2.Evaluate for x\n\t3.Solutions";
		cout<<"\n\nEnter your choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1:
					cout<<"Enter the values of a, b and c in the polynomial."<<endl;
					cin>>a;
					cin>>b;
    				c=a+b;
    				cout<<"\n\nAddition is: "<<c;
					break;
			case 2:
					cout<<"Enter the values of a, b and c in the polynomial."<<endl;
					cin>>a;
					int v;
    				cout<<"Enter the value of x: ";
					cin>>v;
					a.eval(v);
					break;
			case 3:
					cout<<"Enter the values of a, b and c in the polynomial."<<endl;
					cin>>a;
					a.solution();
					break;
			default:    
    				cout<<"\nWrong choice";
		}
    	cout<<"\nDo you want to continue?(y/n): ";
    	cin>>ans;
    }
	while(ans=='y' || ans=='Y');
	return 0;
}
	
