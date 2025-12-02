#include<iostream>

using namespace std;
int main(){
int balance;
int loyalcustomer;
cout<<"enter account balance:$";
cin>>balance;
cout<<"is the coustomer loyal(1 for yes , 0 for no)";
cin>>loyalcustomer;
string account_type=(balance<=100)?"low balance account":(balance<=500)?"standerd account":"premium account";
string special_offer=(balance>200&&loyalcustomer)?"you are eligible for special offer ":"not eligible for special offer";
cout<<"account type:"<<account_type<<endl;
cout<<"special offer:"<<special_offer<<endl;
 return 0;
 }
