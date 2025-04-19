//simple login password check
# include <iostream>
using namespace std;
int main(){
	//hard code password and username
	string pass_word="12345$",user_name="Ali@2";
	string username,password;
	//user input
	cout<<"Enter username:";
	cin>>username;
	cout<<"Enter password:";
	cin>>password;
	//Apply condition
	if(username==user_name &&password==pass_word)
	cout<<"Acess Granted:";
	else
	cout<<"Acess Deined:";
	return 0;
}
