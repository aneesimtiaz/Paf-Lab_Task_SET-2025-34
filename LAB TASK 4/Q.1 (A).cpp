#include<iostream>
using namespace std;
int main()
{
	int burgers =2*350;
	int drink = 120;
	int fries = 150;
	int total = burgers+drink+fries;
	int tax =total*7/100;
	int finalAmount = tax+total;
	int average = finalAmount/4;
	cout<<"total bill ="<<total<<endl;
	cout<<"sales tax(7%)="<<tax<<endl;
	cout<<"finalAmount="<<finalAmount<<endl;
	cout<<"average cost per item="<<average<<endl;
	return 0;
	 
}
