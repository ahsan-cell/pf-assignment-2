#include<iostream>
using namespace std;
int human_Turn();
void twothree();
int computer_Turn(int human,int left);
int main()
{
	cout << "++++++welcome to twenty three++++++" << endl << "number of toothpicks=23 "<<endl;
	twothree();
	return 0;
}
int human_Turn()
{   
	int x = 0, n;
	while (x == 0)
	{
		cout << "how many sticks will you take out: ";
		cin >> n;
		if (n > 0 && n <= 3)
			return n;
		else
			cout << "enter a valid input"<<endl;
	}
	return 0;
}
int computer_Turn(int human,int left)
{
	if (left > 4)
		return 4 - human;
	else if (left == 2)
		return 1;
	else if (left == 3)
		return 2;
	else if (left == 4)
		return 3;
	else
		return 1;
}
void twothree()
{
	int left = 23,x,y;
	while (left > 0)
	{
		x = human_Turn();
		left = left - x;
		cout << "toothpicks left= " << left<<endl;
		if (left == 0 && x == 1) //x here represents the last turn taken by human so if his last turn was 1 and toothpick left is zero the comp wins
		{
		  cout  << "---------COMPUTER HAS WON------------";
		  return;
		}
		y = computer_Turn(x, left);
		cout << endl << "computer takes out " << y << " toothpicks";
		left = left - y;
		cout << endl << "toothpicks left= " << left<<endl<<endl;
		if (left == 0 && y == 1) //y represnts the last turn taken by computer
		{
			cout << "--------YOU HAVE WON-----------";
			return;
		}
	}

}