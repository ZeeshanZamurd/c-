#include<iostream>
using namespace std;
int main()
{
	int number,reverse=0,rem,temp;
	cout<<"enter number";
	cin>>number;
	cout<<"enter number is"<<number;
	temp=number;
	while(temp!=0){
		rem=temp%10;
		reverse= reverse*10+rem;
		temp=temp/10;
		
	}
	if(number==reverse){
		cout<< number << " is palindrome";
	}
	else cout<< number << " is not palindrome";
}
