#include<iostream>
#include<map>
using namespace std;
int main()
{
	map<string,int> state;
	state.insert(pair<string,int>("Maharstra",90900000));
	state.insert(pair<string,int>("kerala",1312300));
	state.insert(pair<string,int>("goa",90900));
	state.insert(pair<string,int>("rajasratn",454600000));
	string search;
	cout<<"Enter the string to be searched"<<endl;
	cin>>search;
	map<string, int>::iterator i;
	int f=0;
	for (i=state.begin();i!=state.end();i++)
	{
		if(search==i->first)
		{
			f++;
			cout<<"The population of "<<i->first<<" = "<<i->second<<endl;
		}
	}
	if(f==0)
	cout<<"state not found."<<endl;
	return 0;
}
