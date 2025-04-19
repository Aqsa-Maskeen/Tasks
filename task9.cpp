//character checker
# include <iostream>
using namespace std;
int main()
{
	char character;
	//user input
	cout<<"Enter a  single character:";
	cin>>character;
	//apply condition to check character
	if (character>='A'&& character<='Z')
	cout<<"You enterd uper case letter.";
	else if (character>='a'&& character<='z')
	cout<<"You enterd lower case letter.";
	else if (character>='0'&&character<='9')
	cout<<"You enterd digit.";
	else
	cout<<"you enterd special symbol.";
	return 0;
	
	
}
