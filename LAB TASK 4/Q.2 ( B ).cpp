#include<iostream>
using namespace std;
int main()
{
	int attended=48;
	int total=60;
	cout<<(attended*100/total>=75)<<endl;//requriment met?
	cout<<(attended>50)<<endl;//attended more than 50?
	cout<<(attended*100/total<60)<<endl;//less than 60%?
	return 0;
	
}