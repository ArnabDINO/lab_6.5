/*
Question 2 (Functions): You are a salesperson of Bata shoe company, where each shoe is Rs 225. Company gave you three options for the salary.
1. Just a salary of Rs 600 per week;
2. A salary of Rs7.00 per hour plus a 10% commission on sales; (Assume you work 40 hours a week)
3. No salary, but 20% commissions and Rs20 for each pair of shoes sold
Write a program to help decide the best choice of compensation. You ask the user for input (Write a function for this). Then write other functions for each of the options. Write a driver program to use the 4 functions and decide the best option for yourself. (Of course, the weekly sales - the number of shoes sold per week has to be given by the user)
*/
#include<iostream>
using namespace std;
/*
input
*/
void intro(int &num)
{
	cout<<"you want salary option? /n look below"<<endl;
	cout<<"1. Just a salary of Rs 600 per week;"<<endl;
	cout<<"2. A salary of Rs7.00 per hour plus a 10% commission on sales; (If you work 40 hours a week)"<<endl;
	cout<<"3. No salary, but 20% commissions and Rs20 for each pair of shoes sold"<<endl;
	cout<<endl;
	cout<<"enter your weekly turnover of the numberof pair of shoes "<<endl;
	cin>>num;
}

//function to calculate money to be get in commision.
void commission(int &num,double &com1,double &com2)
{
	com1=(280+(22.5*num));
	com2=(65*num);
}
//function to compare between the gain in different options
void compare(double &com1,double &com2)
{
	if ((com1>600)&&(com1>com2))
	{
		cout<<"take option two"<<endl;
	}
	else if ((com2>600)&&(com2>com1))
	{
		cout<<"i think you should opt for the option3"<<endl;
	}
	else if(com1==com2)
	{
		cout<<"both option 2 and 3 are equally good for you."<<endl;
	}
	else
	{
		cout<<"it would be better for you you and your family if you opt for the option 1"<<endl;
	}
}
//the main funtion
int main()
{
	int num;
	double com1,com2;
	intro(num);
	commission(num,com1,com2);
	compare(com1,com2);
	return 0;
}

