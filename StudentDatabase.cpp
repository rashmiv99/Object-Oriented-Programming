#include <iostream>
#include <cstring>
using namespace std;

class Student
{
    char name[50];
    int rollno;
    int marks;
	int *n;
    public:
        Student()
        {
			name[50] = '\0';
			rollno = 0;
			marks = 0;
			n = new int (1);
		}
		Student (String name, int rollno, int marks)
		{
			this->name[50] = name[50];
			this->rollno = rollno;
			this->marks = marks;
		}
		~Student()
		{
			delete n;
		}
		void display()
		{
			cout<<"Name: "<<name;
			cout<<"\nRoll number: "<<rollno<<"\nMarks: "<<marks;
		}
};

int main()
{
	Student s1("Rashmi",1,100);

	cout<<"For parameterised: \n";
	s1.display();

	Student s2[100];
	return 0;
}


