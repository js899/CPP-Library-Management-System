#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main(){
	string s = "string 10";
	stringstream ss;
	ss<<s;
	int f;
	string temp;
	ss>>temp;
	if(stringstream(temp)>>f){
		--f;
		ss>>f;
	}
	cout<<s;
	return 0;
}
