//find max of three numbers
# include <iostream>
using namespace std;
int main()
{
	int num1,num2,num3;
	//input numbers
	cout<<"Enter first number:";
	cin>>num1;
	cout<<"Enter second number:";
	cin>>num2;
	cout<<"Enter third number:";
	cin>>num3;
	//apply condition to find maximum number
	if(num1>num2&&num1>num3)
	cout<<"Greater number is:"<<num1;
	else if(num2>num1&&num2>num3)
	cout<<"Greater number is:"<<num2;
	else
	cout<<"Greater number is:"<<num3;
}
