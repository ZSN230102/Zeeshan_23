#include<iostream>
using namespace std;
int main()
{
	
	int size = 3, count=0;
	int* dynamicArray = new int[size],elements;
	while (true)
	{
		cout << "Enter elements "<<count+1<<" (-1 to exit) :" << endl;
		cin >> elements;
		count++;
		if (elements==-1)
		{
			break;
		}
		if (count==size)
		{
			int * newArray = new int[size * 2];
			for (int i = 0; i < size;i++)
			{
				newArray[i] = dynamicArray[i];
			}
			delete[] dynamicArray;
			dynamicArray = newArray;
			size *= 2;
		}

		dynamicArray[count] = elements;
		/*count++;*/
	}

	system("pause");
	return 0;
}