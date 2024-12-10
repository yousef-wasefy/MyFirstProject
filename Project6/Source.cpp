//YOUSUS AHMED;
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	// This method job is to ....

	double width, height ;
	char ch;
	cout << "Enter the width : ";
	cin >> width;
	cout << "Enter the height : ";
	cin >> height;
	cout << "Enter the character : ";
	cin >> ch;
	for (int n = 1;n <= height;n++)
	{
		// nested loop to handle .....
		for (int i = 1;i <= width;i++)
		{
			cout << ch;
		}
		cout << "\n";
	}
}
