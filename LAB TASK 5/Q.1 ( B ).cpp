#include<iostream>
using namespace std;
int main()
{
	int purchaseamount = 6000;
	int membershipcard = false;
	cout<<((purchaseamount>5000 || membershipcard)?"discount applied":" no discount");
	return 0;
	}
