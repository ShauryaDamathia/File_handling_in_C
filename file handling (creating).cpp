#include<fstream>
#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"Enter the numbers:"<<endl;
	cin>>a>>b;
	ofstream ob("CreatingFile.txt");
	ob<<"Sum="<<a+b<<endl;
	ob<<"This is crazy dude"<<endl;
	return 0;
}
