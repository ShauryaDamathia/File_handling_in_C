#include<fstream>
#include<iostream>

using namespace std;
/*
int main()
{
	char c[40];
	ifstream ob("CreatingFile.txt");
	while(!ob.eof())
	{
		ob.getline(c,40); 
		cout<<c<<endl;
	}
}


/*
int main()
{
	char c;
	ifstream ob("CreatingFile.txt");
	ob.get(c);
	while(!ob.eof())
	{
		cout<<c;
		ob.get(c);
	}
}
*/


int main(){
	fstream ob;
	ob.open("1.txt",ios::out);
	string name;
	cin>>name;
	int l=name.length();
	
	for(int i=0;i<l;i++){
		char ch=name[i];
		ob.put(ch);
	}
	ob.close();
	
	fstream ob2;
	ob.open("1.txt",ios::in);
	ob2.open("2.txt",ios::out);
	char ch2[40];
	
	while(!ob.eof())
    {	
	ob2.put(ch2[40]);
	ob.getline(ch2,40);
	}
}


