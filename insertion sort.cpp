#include<iostream>
using namespace std;
int main() 
{
	int const size = 10;
	int  arr[size], min = 0;;
	cout << "INSERTION SORT" << endl;
    cout << " Values : ";
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	cout << " Values  before swapping: ";
	for (int i = 0; i < size; i++)
	{
		cout<< arr[i]<<" ";
	}
	cout << endl;


	//insertion sort
	cout << " Values  after swapping: ";
	for (int i=1; i<size;i++)
	{
		int temp = arr[i];

		int j = i - 1;
		while (j >= 0 && arr[j] > temp)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = temp;
	}




	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;


    return 0;
}
