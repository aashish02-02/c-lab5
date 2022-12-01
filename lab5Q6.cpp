#include<iostream>
#include<string.h>
using namespace std;
class mountain
{
	char name[20],location[20];
	float height;
	public:
		mountain(char n[],float h,char l[])
		{
			strcpy(name,n);
			height=h;
			strcpy(location,l);
		}
		void displayInf()
		{
			cout<<"name ="<<name<<endl;
			cout<<"Height ="<<height<<endl;
			cout<<"Location ="<<location<<endl;
		}
		friend void cmpheight(mountain m1,mountain m2);
};
void cmpheight(mountain m1,mountain m2)
{
	if(m1.height>m2.height)
	{
		m1.displayInf();	
	}
	else 
	{
		m2.displayInf();
	}
}
int main()
{
 char name1[20],name2[20];
 float height1,height2;
 char location1[20],location2[20];
 cout<<"Enter name,height and location of first mountain"<<endl;
 cin>>name1>>height1>>location1;
 cout<<"Enter name,height and location of second mountain"<<endl;
 cin>>name2>>height2>>location2;
 mountain m1(name1,height1,location1);
 mountain m2(name2,height2,location2);
 cout<<"Details of mountain with greatest height"<<endl;
 cmpheight(m1,m2);
 return 0;
}

