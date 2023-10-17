#include<iostream>
using namespace std;
class MyArray
{
private:
	int sum = 0;
	int *arr= nullptr ,Capacity=0,size=0;
public :
	MyArray()
	{	
	}
	MyArray(int capacity)
	{
		this->Capacity = capacity;
		arr = new int[capacity];
	}

	void insert(int value)
	{
		/*arr[size] = value;
		size++;*/
		if (size<Capacity)
		{
			arr[size] = value;
			size++;
		}
		else
		{
			cout << "Array Is full" << endl;
		}
		cout << endl;
	}

	void Remove(int index)
	{
		if (index<0 || index>Capacity)
		{
			cout << "index not valid" << endl;
		}
		else
		{
			for (int i = index; i < size; i++)
			{
				arr[i] = arr[i+1];
			}
		}
		size -= 1;
	}

	void search(int searchelement)
	{
		for (int i = 0; i < Capacity;i++)
		{

			if (arr[i] == searchelement)
			{
				cout << arr[i] << " is found at index " << i << endl;
			}	
		}	
	}

	void Sum()
	{	
		int SUM=0;
		for (int i = 0; i < Capacity;i++)
		{
			SUM += arr[i];
		}
		cout << " Sum = " << SUM << endl;
		sum = SUM;
	}

	void average()
	{
		int average = sum/Capacity;
		cout << "Average = " << average << endl;	
	}
	//void get()
	//void update()
	//void getsize()
	//void isempty();
	void slice(int start, int end)
	{
		MyArray slice(end-start+1);
		for ()
		{

		}
	}
	void dispaly()
	{
		cout <<"Array values : ";
		for (int i = 0; i < Capacity; i++)
		{
			cout << arr[i]<<" ";
		}
	}
};
int main()
{
	int Capacity, value;
	cout << "Enter Capacity of array ";
	cin >> Capacity;

	MyArray obj1(Capacity);
	cout << "Enter Array Elements : " << endl;
	for (int i = 0; i < Capacity; i++)
	{
		cin >> value;
		obj1.insert(value);
	}
	obj1.dispaly();

	int index = 0;
	cout << "\nEnter index of value you want to remove" << endl;
	cin >> index;
	obj1.Remove(index);
	obj1.dispaly();

	int searchelement = 0;
	cout << "\nEnter search element in an array" << endl;
	cin >> searchelement;
	obj1.search(searchelement);

	obj1.Sum();
	obj1.average();

	system("pause");
	return 0;
}