//YOUSUS AHMED;
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double w, h;
	char ch;
	cout << "Enter the width : ";
	cin >> w;
	cout << "Enter the height : ";
	cin >> h;
	cout << "Enter the character : ";
	cin >> ch;
	for (int n = 1;n <= h;n++)
	{

		for (int i = 1;i <= w;i++)
		{
			cout << ch;
		}
		cout << "\n";
	}

}
