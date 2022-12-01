#include<iostream>
#include<string.h>
using namespace std;
class person
{
	char name[20],address[20];
	long int citizeno;
	int age;
	public:
		person(char n[],int a,char addr[],long int c)
		{
			strcpy(name,n);
			age=a;
			strcpy(address,addr);
			citizeno=c;
		}
		void display()
		{
			cout<<"Name ="<<name<<endl;
			cout<<"Age ="<<age<<endl;
			cout<<"Address ="<<address<<endl;
			cout<<"Citizenship number ="<<citizeno<<endl;
		}
};
int main()
{
 	char name[20],address[20];
 	int age;
 	long int citizeno;
 	cout<<"Enter name ="<<endl;
 	cin>>name;
 	cout<<"Enter age ="<<endl;
 	cin>>age;
 	cout<<"Enter address ="<<endl;
 	cin>>address;
 	if(age>16)
 	{
 		cout<<"Enter citizenship number ="<<endl;
		 cin>>citizeno;
		 person p1(name,age,address,citizeno);
		 p1.display();	
	}
	else
	{
		person p1(name,age,address,0);
		p1.display();	
	}
 	return 0;
}

