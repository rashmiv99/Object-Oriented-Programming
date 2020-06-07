#include <fstream>
#include <iostream>
#include <string.h>
#include<cstdlib>
using namespace std;

int main(int argc,char *argv[])
{
	if(argc<4)
	{
		cout<<"Insufficient number of arguments on command line\n";
		exit (1);
	}
	string data,newdata; 
	fstream fin;
	cout<<"Find string \""<<argv[2]<<"\" and replace with \""<<argv[3]<<"\" in file\""<<argv[1]<<" \"\n";
	cout<<"**************Contents of file before replacing*********\n";
	fin.open(argv[1],ios::in);
	if(!fin)
	{
		cout<<"error opening file";
		return 1;
	}
	while(fin)
	{
		getline(fin,data);
		cout<<data<<endl;
	}
	fin.close();
	fin.open(argv[1],ios::in);
	newdata="";
	if(!fin)
	{
		cout << "Unable to open file";
		exit(1);
	}
	while(fin)
	{
		getline(fin,data);
		int b;
		int a =(int) data.find(argv[2],0);
		while (a != string::npos)
		{
			data.replace(a,strlen(argv[2]),argv[3]);
			a =(int) data.find(argv[2],(a+1));
		}
		newdata=newdata+data+"\n";
	}
	fin.close();
	fin.open(argv[1],ios::out);
	if(!fin)
	{
		cout<<"error opening file";
		return 1;
	}
	fin<<newdata;
	cout<<"Replacement successful\n";
	fin.close();
	cout<<"********************Contents of file after replacing**************\n";
	fin.open(argv[1],ios::in);
	if(!fin)
	{
		cout<<"error opening file";
		return 1;
	}
	while(fin)
	{
		getline(fin,data);
		cout<<data<<endl;
	}
	fin.close();
	return 0;
}
