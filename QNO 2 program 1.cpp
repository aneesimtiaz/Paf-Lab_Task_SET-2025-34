#include<iostream>
#include<string>
using namespace std;
int main()
{
	string name;
	int rollNo;
	string Department;
	int english,math,physics;
	int total;
	float persentage;
	cout<<"Enter Student Name:";
	cin>>name;
	cout<<"Enter roll no:";
	cin>>rollNo;
	cout<<"Enter department:";
	cin>>Department;
	cout<<"Enter mark in english:";
	cin>>english;
	cout<<"Enter mark in math:";
	cin>>math;
	cout<<"Enter mark in physics:";
	cin>>physics;
	total=english+math+physics;
	persentage=(total/300)*100;
	cout<<"=======================================\n";
	cout<<"\tStudent Result Card\n";
	cout<<"=======================================\n";
	cout<<"Name:\t\t"<<name<<endl;
	cout<<"RollNo:\t\t"<<rollNo<<endl;
	cout<<"Department:\t"<<Department<<endl;
	cout<<"=======================================\n";
	cout<<"Subject\t\tMarks\n";
	cout<<"=======================================\n";
	cout<<"English\t\t";
	cin>>english;
	cout<<"math\t\t";
	cin>>math;
	cout<<"physics\t\t";
	cin>>physics;
	cout<<"=======================================\n";
	cout<<"Total Marks:"<<total<<"/300\n";
	cout<<"Persentage:\t"<<persentage<<"%\n";
	cout<<"Grade:\t\tA+\n";
	cout<<"congratulations"<<name<<"!\n";
	cout<<"=======================================\n";
	
	
	 
}
