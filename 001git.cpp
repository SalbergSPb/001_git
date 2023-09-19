#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));


	cout << "Hello Waldemar!!!" << endl;
	cout << "Привет Владимир!!!" << endl;
	
	constexpr int row{ 5 };
	constexpr int col{ 7 };
	int arr[row][col];
	for (int i{ 0 }; i < row; ++i)
	{
		for (int j{ 0 }; j < col; ++j)
		{
			arr[i][j] = rand() % 1000 + 99;
		}
	}
	for (int i{ 0 }; i < row; ++i)
	{
		for (int j{ 0 }; j < col; ++j)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	} 

	system("pause");

	return 0;
}