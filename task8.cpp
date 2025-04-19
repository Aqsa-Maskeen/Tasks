//checking leap year
# include <iostream>
using namespace std;
int main(){
	int year;
	//user input
	cout<<"Enter an year:";
	cin>>year;
	//apply condition to check leap year
	if(year%4==0)
	cout<<"You enter leap year.";
	else
	cout<<"Not a leap year.";
	return 0;
}
