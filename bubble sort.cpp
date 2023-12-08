#include<iostream>
using namespace std;
int main() 
{
    int arr[10], size = 10;

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


	//bubble sort
	cout << " Values  after swapping: ";
	for (int i = 0; i < size; i++)
	{
		for (int j = i+1; j < size; j++)
		{
			if (arr[i]>arr[j])//ascending order
			{
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}




	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;


    return 0;
}
