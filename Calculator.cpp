#include <iostream>

using namespace std;

int main()
{
	int num1,num2,sum,subtract,multiply,devide;
	
	cout<<"Enter a firs number : ";
	cin>>num1;
	
	cout<<"Enter 2nd Number : ";
	cin>>num2;
	
	sum=num1+num2;
	subtract=num1-num2;
	multiply=num1*num2;
	devide=num2/num1;
	
	cout<<"sumbation of "<< num1 <<"and"<< num2 <<"="<< sum<<endl;
	cout<<"subtraction of "<< num1 <<"and"<< num2 <<"="<< subtract<<endl;
	cout<<"Multiplying of "<< num1 <<"and"<< num2 <<"="<< multiply<<endl;
	cout<<"davion of "<< num1 <<"and"<< num2 <<"="<< devide<<endl;
	
	return 0;
}
