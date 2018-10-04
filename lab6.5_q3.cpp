/*
Question 3 (Loops and Logic): The integer 36 has a peculiar property: it is a perfect square, and is also the sum of the integers from 1 through 8. The next such number is 1225 which is 352, and the sum of the integers from 1 through 49. Find the next number (or numbers) that is a perfect square and also the sum of a series 1...n. This next number may be greater than 32767 (range of int, so use long). You may use library functions that you know of, (or mathematical formulas) to make your program run faster. (Note: depending on your machine and your program, it can take quite a while to find this number.)
*/
#include<iostream>
#include<cmath>
using namespace std;
//funtion for verification whether the number is perfect square or not 
int square(long &a)
{	long double s;
	s=sqrt(a);
	return s;
}
//main function
int main()
{
//declare the variables
	long b;
	long double m,n;
//find the function for the sum of numbers
	for(long a=50;a>=50;a++)
	{	b=((a*(a+1))/2);
// find whether those numbers are perfect squares or not.
		m=square(b);
		n=(m*m);
		if(n==b)
//display the results
		{	cout<<"the required number is"<<b<<endl;
			break;
		}
	}
return 0;
}


