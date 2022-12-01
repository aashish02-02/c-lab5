#include<iostream>
using namespace std;
class time
{
	int hour,min,sec;
	public:
		time()
		{
			
		}
		time(int h,int m,int s)
		{
			hour=h;
			min=m;
			sec=s;
		}
		void display()
		{
			cout<<hour<<":"<<min<<":"<<sec<<endl;
		}
		void sumtime(time t1,time t2)
		{
			sec=t1.sec+t2.sec;
			min=sec/60;
			sec=sec%60;
			min=min+t1.min+t2.min;
			hour=min/60;
			min=min%60;
			hour=hour+t1.hour+t2.hour;
		}
};
int main()
{
 	int hour1,min1,sec1,hour2,min2,sec2;
 	cout<<"Enter first hour, minute and seconds"<<endl;
 	cin>>hour1>>min1>>sec1;
 	cout<<"Enter second hour, minute and seconds "<<endl;
 	cin>>hour2,min2,sec2;
 	time t1(hour1,min1,sec1);
 	time t2(hour2,min2,sec2);
 	time t3;
 	t3.sumtime(t1,t2);
 	cout<<"Sum of two times"<<endl;
 	t3.display();
	return 0;
}

