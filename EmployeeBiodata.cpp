#include <iostream>
#include <cstring>
using namespace std;
class Biodata;
class Personal
{
	protected:
		char name[50];
		char address[50];
		char dob[12];
		long long phno;
	public:
		void accept1()
		{
			cout<<"Enter name: ";
			cin.getline(name, 50);
			cout<<"Enter address: ";
			cin.getline (address, 50);
			cout<<"Enter date of birth (DD/MM/YYYY): ";
			cin.getline (dob, 12);
			cout<<"Enter the phone number: ";
			cin>>phno;
		}
		void display1()
		{
			cout<<"\nName: ";
			cout.write(name, strlen(name));
			cout<<"\nAddress: ";
			cout.write(address, strlen(address));
			cout<<"\nDOB: ";
			cout.write(dob, strlen(dob));
			cout<<"\nPhone number: "<<phno;
		}
};

class Academic
{
	protected:
		float ssc;
		float hsc;
		char qual[50];
	public:
		void accept2()
		{
			cout<<"Enter SSC percentage: ";
			cin>>ssc;
			cout<<"Enter HSC percentage: ";
			cin>>hsc;
			cout<<"Enter qualification: ";
			cin.ignore();
			cin.getline (qual, 50);
		}
		void display2()
		{
			cout<<"\nSSC percentage: "<<ssc;
			cout<<"\nHSC percentage: "<<hsc;
			cout<<"\nQualification: ";
			cout.write(qual, strlen(qual));
		}
};

class Professional
{
	protected:
		char compname[50];
		char des[50];
	public:
		void accept3()
		{
			cout<<"Enter company name: ";
			cin.getline(compname, 50);
			cout<<"Enter current designation: ";
			cin.getline(des, 50);
		}
		void display3()
		{
			cout<<"\nCompany name: ";
			cout.write(compname, strlen(compname));
			cout<<"\nCuurent designation: ";
			cout.write(des, strlen(des));
		}
};

class Biodata:public Personal,public Academic,public Professional
{
	public:
		void displayfinal()
		{
			cout<<"Enter the details: \n";
			accept1();
			accept2();
			accept3();
			cout<<"\nBIODATA"<<endl;
			display1();
			display2();
			display3();
			cout<<endl;
		}
};

int main()
{
	Biodata b;
	b.displayfinal();
	return 0;
};

