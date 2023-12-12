#include<iostream>
using namespace std;

class Seaching
{
private:
	int size ;
	int *Arr ;

public:
	Seaching(int s)
	{
		size = s;
		Arr=new int[size];
	}

	void insert_vlaues()
	{
		cout << "Insert values : ";
		for (int i = 0; i < size;i++)
		{
			cin >> Arr[i];
		}
		cout << endl;
	}

	void linear_search(int value)
	{
		cout << "LINEAR SEARCH" << endl;
		int counter = 0;
		for (int i = 0; i < size;i++)
		{
			if (Arr[i]==value)
			{
				cout << value << " is found at index " << i << endl;
				counter++;
			}
		}
		if (counter == 0)
		{
			cout << "(Linear Search) Element is not present." << endl;

		}

		if (counter == 1)
		{
			cout << value << " repeats 1 time." << endl;
		}
		else
		{
			cout << value << " repeats " << counter << " time's" << endl;
		}
	}

	int binary_search(int value) {
		cout << "BINARY SEARCH" << endl;

		int low = 0, high = size - 1, middle;

		while (low <= high) 
		{
			middle = low + (high - low) / 2;

			if (Arr[middle] == value) 
			{
				return middle;
			}
			else if (Arr[middle] < value) 
			{
				low = middle + 1;
			}
			else 
			{
				high = middle - 1;
			}
		}

		cout << "(Binary Search) Element is not present." << endl;
		return -1;
	}

};


int main()
{
	int size;
	cout << "Size = ";
	cin >> size;
	Seaching obj1(size);
	obj1.insert_vlaues();

	int value;
	cout << "Enter value for linear search : ";
	cin >> value;
	obj1.linear_search(value);


	cout << "Enter value for Binary search : ";
	cin >> value;

	int result = obj1.binary_search(value);
	if (result != -1) 
	{
		cout << value << " is found at index " << result << endl;
	}
	system("pause");
	return 0;
}