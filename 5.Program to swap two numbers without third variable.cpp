#include<iostream>
using namespace std;
main()
{
	int a,b;
	cout<<"Enter 1st number :";
	cin>>a;
	cout<<"Enter 2nd number : ";
	cin>>b;
	cout<<"Before swappping : ";
	cout<<"\n1st number : "<<a<<endl;
	cout<<"2nd number : "<<b<<endl;
	cout<<"After swappping : ";
	swap(a,b);
	cout<<"\n1st number : "<<a<<endl;
	cout<<"2nd number : "<<b<<endl;
}