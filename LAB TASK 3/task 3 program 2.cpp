#include<iostream>
using namespace std;
int main()
{
	int age1,age2,age3;
	cout<<"Enter your age\t";
	cin>>age1;
	cout<<"Enter your age\t";
	cin>>age2;
	cout<<"Enter your age\t"; 
	cin>>age3;
string result1=(age1<=13)?"Child":(age1<=19)?"Teenager":"Adult";
cout<<"Age"<<age1<<"Falls under the catagory:"<<result1<<endl;
string result2=(age2<=13)?"Child":(age2<=19)?"Teenager":"Adult";
cout<<"Age"<<age2<<"Falls under the catagory:"<<result2<<endl;
string result3=(age3<=13)?"Child":(age3<=19)?"Teenager":"Adult";
cout<<"Age"<<age3<<"Falls under the catagory:"<<result3<<endl;
return 0;

	
	}
