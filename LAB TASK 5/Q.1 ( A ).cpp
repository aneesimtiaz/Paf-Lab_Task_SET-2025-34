#include<iostream>
using namespace std;
int main()
{
	int attendance =80;
	int feepaid = true;
	cout<<((attendance>=75 && feepaid)?"eligible":"not eligible");
	return 0;
}
