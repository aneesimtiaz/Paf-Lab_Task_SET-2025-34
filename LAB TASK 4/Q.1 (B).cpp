#include<iostream>
using namespace std;
int main()
{
	int cost =1200;
	int discount =cost*25/100;
	int afterdiscount= discount-cost;
	int servicescharges= afterdiscount*8/100;
	int afterservices= servicescharges+afterdiscount;
	int finalprice= afterservices+50;
	cout<<" final ticket price ="<<finalprice<<"\n";

	return 0;

}
