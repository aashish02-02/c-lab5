#include<iostream>
#include<string.h>
using namespace std;
class employee
{
	int code,salary;
	char name[20],address[20];
	public:
		employee(int c,char n[],char a[],int s)
		{
			code=c;
			strcpy(name,n);
			strcpy(address,a);
			salary=s;
		}
		employee(employee &e)
		{
			code=e.code;
			strcpy(name,e.name);
			strcpy(address,e.address);
			salary=e.salary;
		}
		void display()
		{
			cout<<"Code ="<<code<<endl;
			cout<<"Name ="<<name<<endl;
			cout<<"Address ="<<address<<endl;
			cout<<"Salary ="<<salary<<endl;
		}
};

int main()
{
	int code,salary;
	char name[20],address[20];
	cout<<"Enter code, Name, Address and Salary"<<endl;
	cin>>code>>name>>address>>salary;
	employee e1(code,name,address,salary);
	employee e2(e1);
	cout<<"Details of e1"<<endl;
	e1.display();
	cout<<"Details of e2"<<endl;
	e2.display();
 	return 0;
}

