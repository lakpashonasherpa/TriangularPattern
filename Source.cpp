#include <iostream>	
using namespace std;

void printStars(int);


int main()
{
	int number;
	cout << "Enter the number of lines in the grid: ";

	cin >> number;
	printStars(number);
	cout << endl << "Grid Pattern Complete - End of Program.";
	system("pause");
	return 0;
} // end of main 

void printStars(int num)
{
	/*if (num < 0) cout << endl << "Please enter a non negative number." << endl;

	else {

		if (num == 0) return;

		else {
			for (int q = 1; q <= num; q++)
			{
				cout << "*";
			}
			cout << endl;

			printStars(num - 1);

			for (int q = 1; q <= num; q++)
			{
				cout << "*";
			}

			cout << endl;
		}
		
		*/

	for (int i = 1; i <= num; i++)
	{
		//for loop for displaying space
		for (int space = i; space < num; space++)
		{
			cout << " ";
		}
		//for loop to display star equal to row number
		for (int j = 1; j <= (2 * i - 1); j++)
		{
			cout << "*";
		}

		cout << "\n";
	}

}


// end printStars