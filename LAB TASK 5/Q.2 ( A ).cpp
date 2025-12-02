#include<iostream>
using namespace std;
int main()
{
	int balance = 1000;
	int recharge= 500;
	balance +=recharge;//add recharge
	balance +=balance*10/100;// add10% bonus
	cout<<"updated balance="<<balance;
	return 0;
	}
		