#include <iostream>
using namespace std;

int main()
{
	int age;
	float income;
	int w;
	int ch;
	try
	{
		cout<<"Enter Age: "<<endl;
		cin>>age;
		cout<<"Enter Income: "<<endl;
		cin>>income;
		cout<<"Enter Place of Stay as below. \nEnter 1 for Pune. \nEnter 2 for Mumbai. \nEnter 3 for Bangalore. \nEnter 4 for Chennai.\nEnter Choice: "<<endl;
		cin>>ch;
		cout<<"Enter the number of wheels on vehicle: ";
		cin>>w;
		cout<<"\nThe user details are: "<<endl;
		cout<<"Age: "<<age<<endl;
		cout<<"Income: "<<income<<endl;
		cout<<"Place: "<<ch<<endl;
		cout<<"Four Wheeler Status: "<<w<<endl;		
		if(age>55 || age<18)
		{
			throw age;
		}

		if(income>100000 || income<50000)
		{
			throw income;
		}

		if(ch>4)
		{
			throw ch;
		}
		if(w!=4)
		{
			throw w;
		}
		else
		{
			cout<<"NO EXCEPTION CAUGHT"<<endl;
		}
		
	}
	catch(int a)
	{
		cout<<"EXCEPTION CAUGHT at age: "<<a;
		cout<<"\nUser should be 18-55 years old."<<endl;
	}
	
	catch(float a)
	{
		cout<<"EXCEPTION CAUGHT at income: "<<a;
		cout<<"\nUser should receive income of 50,000-1,00,000 per month."<<endl;
	}
	catch(int a)
	{
		cout<<"EXCEPTION CAUGHT at place: "<<a;
		cout<<"\nUser should be staying in Pune, Mumbai, Banglore or Chennai."<<endl;
	}
	catch(int w)
	{
		cout<<"EXCEPTION CAUGHT at wheels: "<<w;
		cout<<"\nVehicle should be a 4 wheeler."<<endl;
	}
	return 0;
}
