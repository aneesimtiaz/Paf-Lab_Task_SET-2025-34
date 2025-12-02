#include<iostream>
using namespace std;
int main()
{
	int temperature = 32;
	int windowclosed = true;
	cout<<((temperature>30&& windowclosed)?"AC ON":"AC OFF");
	return 0;
	}
