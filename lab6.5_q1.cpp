/*
Question 1 (Loops): 
Apples cost Re1 each, mangoes cost Rs3 each, and 1 banana is only Rs0.50.
You bought 100 fruits for Rs100, How many of each fruit did you buy? 
*/

#include<iostream>
using namespace std;
int main()
{
	int aP,mA,bA;
	double tot;
	for(int aP=0;aP<=100;aP++)
	{
		for(int mA=0;mA<=100;mA++)
		{
			bA=100-mA-aP;
			tot=aP*1+mA*3+bA*0.50;
			if(tot==100.0)
			{
				cout<<"There are "<<aP<<" apples, "<<mA<<" mangoes and "<<bA<<" bananas."<<endl;
			}
		}
	}
	return 0;
}

/*
bA=100-mA-aP;
tot=aP*1+mA*3+bA*0.50;
*/
/*
cout<<"There are "<<aP<<" apples, "<<mA<<" mangoes and "<<bA<<" bananas."<<endl;
*/
