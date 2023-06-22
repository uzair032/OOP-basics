#include<iostream>
using namespace std;
class Book
{
	private:
		string auther;
		string *chapname=new string[3];
	    int count=0;
	    
	public:
	    void setvalues(string auth,string *chp,int set_count)
	    {
	    	auther=auth;
	    	chapname=chp;
	    	count=set_count;
		}
		Book()
		{
			cout<<"Constructor without arguments"<<endl;
		}	
		Book(string auth,string *chp,int set_count)
		{
			auther=auth;
	    	chapname=chp;
	    	count=set_count;
			cout<<"Constructor with arguments"<<endl;
		}
		void comparebook(string name)
		{
			if(auther==name)
			cout<<"Books are same"<<endl;
			else
			cout<<"Books are not same"<<endl;
		}
		void  compareChap(Book b1)
		{
			if(count>b1.count)
			cout<<"Book: "<<auther<<" has more chapters: "<<count<<endl;
			else 
			cout<<"Book: "<<b1.auther<<" has more chapters: "<<b1.count<<endl;
		} 
		
};
int main()
{
	
	string auther1,auther2,chptername;
	int i,count1,count2;
	while(1)
	{
	cout<<"Enter Author For Book 1: ";
	cin>>auther1;	
	cout<<"\nEnter Total Chapters: ";
	cin>> count1;
	string *chpname1=new string[3];
	
	cout<<"Enter chapter names:\n";
	for(i=0;i<count1;i++)
	{
		cin>>chptername;
		chpname1[i]=chptername;
	}
	Book b1= Book(auther1,chpname1,count1);
	b1.setvalues(auther1,chpname1,count1);
	//Book 2
	cout<<"Enter Author For Book 2: ";
	cin>>auther2;	
	cout<<"\nEnter Total Chapters: ";
	cin>> count2;
	string *chpname2=new string[3];
	
	cout<<"Enter chapter names:\n";
	for(i=0;i<count2;i++)
	{
		cin>>chptername;
		chpname2[i]=chptername;
	}
	Book b2;
	b2.setvalues(auther2,chpname2,count2);
	b2.comparebook(auther1);
	b2.compareChap(b1);
	cout<<endl;
    }
}