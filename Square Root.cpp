#include<iostream>
using namespace std;
double square_root(int n);
int main()
{
	int n;
	cout << "enter a number ";
	cin >> n;
	cout<<"square root= "<<square_root(n);
	return 0;
}
double square_root(int n)
{
	double  A = 1.0; //guess (taken in double becuase with int and float compiler gives warinig of arthemetic overflow)
	double B, C;
	for (int i = 0; i < 10; i++)
	{
		B = (A + (n / A)) / 2.0;
		C = (B + (n / B)) / 2.0;
	    A = C;
		

	}
	return C;
}