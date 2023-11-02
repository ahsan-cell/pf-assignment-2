#include<iostream>
using namespace std;
void hollowdiamond(int);
void hexagon(int, char);
void arrow(int, char);
int main()
{
	int input;
	char ch;
	cout << "enter a number: ";
	cin >> input;
	cout << "enter a character: ";
	cin >> ch;
	hollowdiamond(input);
	hexagon(input, ch);
	arrow(input, ch);
	return 0;

}
void hollowdiamond(int input)
{

	cout << "-----------------HOLLOW SQUARE WITH A DIAMOND------------------" << endl;
	int length = (input * 2) - 1;
	int inner1 = input - 1;
	int space_contrller = 1; // space_controller will actually control the number of spaces
	int first_line = 1;
	for (; first_line <= input; first_line++)
		cout << first_line;
	first_line -= 2;
	for (; first_line >= 1; first_line--)
		cout << first_line;
	for (int outer = 1; outer < input; outer++)
	{


		cout << endl;

		for (int i = 1; i <= inner1; i++)
		{
			cout << i;
		}
		for (int space = 1; space <= space_contrller; space++)
			cout << " ";

		for (int j = inner1; j >= 1; j--)
		{
			cout << j;
		}

		inner1--;
		space_contrller += 2;


	}
	cout << endl;
	int input2 = input - 1; // the above code only prints half of the pattern this part prints the secon half of pattern this approach is also taken in the other 2 patterns
	int inner2 = 2;
	space_contrller -= 4;
	for (int outer = 1; outer < input2; outer++)
	{
		for (int i = 1; i <= inner2; i++)
			cout << i;
		for (int space = 1; space <= space_contrller; space++)
			cout << " ";
		for (int j = inner2; j > 0; j--)
			cout << j;

		space_contrller -= 2;
		inner2++;
		cout << endl;

	}
	int last_line = 1;
	for (; last_line <= input; last_line++)
		cout << last_line;
	last_line -= 2;
	for (; last_line >= 1; last_line--)
		cout << last_line;
	cout << endl;
}
void hexagon(int input, char ch)
{
	cout << "---------------------------HEXAGON-------------------------" << endl;
	int space_controller = input - 1;
	int inner1 = input;
	for (int outer = 1; outer <= input; outer++)
	{
		for (int space = space_controller; space > 0; space--)
			cout << " ";
		for (int i = 0; i < inner1; i++)
			cout << ch;
		cout << endl;
		inner1 += 2;
		space_controller--;

	}
	input--;
	space_controller = 1;
	int inner2 = inner1 - 4;

	for (int outer = 1; outer <= input; outer++)
	{
		for (int space = 0; space < space_controller; space++)
			cout << " ";
		for (int i = 0; i < inner2; i++)
			cout << ch;
		cout << endl;
		space_controller++;
		inner2 -= 2;

	}
}
void arrow(int input, char ch)
{
	cout << "--------------------ARROW------------------"<<endl;
	int space_controller = input - 1;
	int inner_spaces_controller = 1;
	int inner_spaces_controller2 = 1;
	for (int outer = 1; outer <= input; outer++)
	{
		for (int space = space_controller; space > 0; space--)
			cout << " ";
		cout << ch;
		if (outer > 2)
		{
			for (int inner_spaces = 0; inner_spaces < inner_spaces_controller; inner_spaces++)
				cout << " ";
			inner_spaces_controller++;
		}

		if (outer == 2)
		{
			cout << ch<<ch;
		}
		if (outer > 2)
			cout << ch;
		if (outer > 2)
		{
			for (int inner_spaces = 0; inner_spaces < inner_spaces_controller2; inner_spaces++)
				cout << " ";
			inner_spaces_controller2++;
		}
		if (outer > 2)
			cout << ch;

		cout << endl;




		space_controller--;

	}
	int space2_controller = input - 1;
	for (int i = 1; i < input; i++)
	{
		for (int space2 = 0; space2 < space2_controller; space2++)
			cout << " ";
		cout << ch;
		cout << endl;
	}
}
