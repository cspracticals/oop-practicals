#include<iostream>
using namespace std;
class publication
{
	public:
		char title[20];
		float price;
};
class book:public publication
{
	public:
		int pages;
		void getdata()
		{
			cout<<"Enter the title: ";
			cin>>title;
			cout<<"Enter the price";
			cin>>price;
			cout<<"Enter the pages";
			cin>>pages;
			
		}
		void putdata()
		{
			cout<<"Title: "<<title<<endl;
			cout<<"Price: "<<price<<endl;
			cout<<"pages: "<<pages<<endl;
			
		}
};
class tape:public publication
{
	public:
		int minutes;
		void getdata()
		{
			cout<<"Enter the title: ";
			cin>>title;
			cout<<"Enter the price";
			cin>>price;
			cout<<"Enter minutes";
			cin>>minutes;
			
		}
		void putdata()
		{
			cout<<"Title: "<<title<<endl;
			cout<<"Price: "<<price<<endl;
			cout<<"Minutes: "<<minutes<<endl;
		}
		
		
};

int main(){
	book b;
	tape t;
	b.getdata();
	t.getdata();
	b.getdata();
	t.getdata();
	return 0;
}
