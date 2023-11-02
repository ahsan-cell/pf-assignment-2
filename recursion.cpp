#include<iostream>
using namespace std;
int factorial(int);
int nPr(int, int);
int nCr1(int, int);
int nCr2(int, int);
void menu();
int main()
{
	menu();
}
int factorial(int x)
{
	int res=1;
	for (int i = 1; i <= x; i++)
	{
		res = res * i;
	}
	return res;
}
int nPr(int n, int r)
{
	return (factorial(n)) / (factorial(n - r));
}
int nCr1(int n, int r)
{
	return (factorial(n)) / (factorial(n - r) * factorial(r));
}
int nCr2(int n, int r)
{
	return (nPr(n, r)) / factorial(r);
}
void menu()
{
	int x = 0,n,f,r;
	while (x != 5)
	{
		cout << "-------------menu----------------" << endl;
		cout << "1 for factorial" << endl;
		cout << "2 for nPr" << endl;
		cout << "3 for nCr (part3)" << endl;
		cout << "4 for nCr (part4)" << endl;
		cout << "5 to exit the program";
		cout << "----------------------------------" << endl;
		cout << "enter a number to perform a task: ";
		cin >> x;
		switch (x)
		{
		case 1:
			
			cout << "enter a number: ";
			cin >> f;
			cout << "factorial= " << factorial(f)<<endl;
			break;
		case 2:
			
			cout << "enter the values of n and r: ";
			cin >> n >> r;
			cout << "nPr= " << nPr(n, r) << endl;
			break;
		case 3:
			
			cout << "enter the values of n and r: ";
			cin >> n >> r;
			cout << "nCr= " << nCr1(n, r) << endl;
			break;
		case 4:
			
			cout << "enter the values of n and r: ";
			cin >> n >> r;
			cout << "nCr= " << nCr2(n, r) << endl;
			break;
		case 5: // at case 5 loop will break because of loop condition
			break;
		default:
			cout << "enter a valid command" << endl;
		}
	}
	return;

}