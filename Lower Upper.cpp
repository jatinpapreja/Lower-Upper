#include<iostream>
using namespace std;
int main() {
  char ch;
  cin>>ch;
  if(97<=int(ch) and int(ch)<=122)cout<<"lowercase";
  else if(65<=int(ch) and int(ch)<=90)cout<<"UPPERCASE";
  else cout<<"Invalid";
	return 0;
}
