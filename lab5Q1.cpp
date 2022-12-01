#include<iostream>
#include<string.h>
using namespace std;
class bowler
{
	char name[20];
	float over;
	int run;
	int wicket;
	public:
		bowler(char n[],float o,int r,int w)
		{
			strcpy(name,n);
			over=o;
			run=r;
			wicket=w;
		}
		void display()
		{
			cout<<"Name ="<<name<<endl;
			cout<<"Overs ="<<over<<endl;
			cout<<"Runs ="<<run<<endl;
			cout<<"Wicket ="<<wicket<<endl;
		}
};
int main()
{
 bowler b1("Biraj",6.5,60,10);
 b1.display();
 return 0;
}

