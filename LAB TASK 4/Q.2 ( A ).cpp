#include<iostream>
using namespace std;
int main()
{
	int requried = 500;
	int current = 420;
	cout<<(current>=requried)<<endl;
	//1.is stock sufficient?
	cout<<(current<requried/2)<<endl;
	//2.less than 50%?
	cout<<(current==requried)<<endl;
	//3. exactly equal?
	cout<<(requried-current>50)<<endl;
	//4. shortage?
	
}
