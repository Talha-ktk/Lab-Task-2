#include<iostream>
using namespace std;
int main()
{
	bool ishot=true;
	bool issunny=false;
	
	cout<<"is Hot AND is Sunny:"<<(ishot&&issunny)<<endl;
	cout<<"is Hot OR is Sunny:"<<(ishot||issunny)<<endl;
	cout<<"NOT is sunny"<<(!issunny)<<endl;
}
