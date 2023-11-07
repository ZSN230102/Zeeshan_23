#include<iostream>
using namespace std;
#define max_size 2
class Queue
{
private :
	int rare, front ;
	int Arr_queue[max_size];
public:
	Queue()
	{
		rare = -1;
		front = -1;
	}
	void Enque(int Queue_value)
	{
		if (rare==max_size-1)
		{
			cout << "Queue is Full" << endl;
		}
		else if (rare==-1)
		{
			rare++;
			front++;
		}
		else
		{
			rare++;
		}
		Arr_queue[rare] = Queue_value;
		cout << Queue_value << " is inseted at index " << rare << endl;
	}
	void Deque()
	{
		if (front==-1)
		{
			cout << "Queue is Empty" << endl;
			return;
		}
		cout << Arr_queue[front] << " is deleted from index " <<front<< endl;
		if (rare==front)
		{
			
			rare = -1;
			front = -1;
		}
		else
		{
			front++;
		}
	}
	void display()
	{
		cout << "Queue Values : ";
		for (int i = front; i <= rare;i++)
		{
			cout << Arr_queue[i] << " ";
		}
		cout << endl;
	}
};
int main()
{
	Queue obj1;
	int values;
	int choice;
	
	do
	{
		cout << "1: Insert \n2: Delete \n3: Display\n\n";
		cout << "Enter your choice : ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter Queue Values" << endl;
			cin >> values;
			obj1.Enque(values);
			break;
		case 2:
			obj1.Deque();
			break;
		case 3:
			obj1.display();
			break;
		default :
			break;
		}
	} while (choice != 3);
	
	system("pause");
	return 0;
}