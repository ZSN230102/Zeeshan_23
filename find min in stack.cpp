#include<iostream>
using namespace std;
class stack 
{
private :
	int *stackarr = nullptr, top, size, minstack;
public :
	stack(int Size)
	{
		size = Size;
		top = -1;
		stackarr=new int [size] ;
	}
	void push(int value)
	{
		if (isfull())
		{
			top++;
			stackarr[top] = value;
		
			if (top == 0 || value <= minstack) 
			{
				minstack = value;  
			}
			/*else 
			{
				if (value <= minstack) 
				{
					minstack = value;  
				}
			}*/
		}
		else
		{
			cout << "Stack is full cannot push " << value << endl;
		}
	}
	int pop()
	{
		if (isempty())
		{
			int popvalue;
			popvalue = stackarr[top];
			top--;
			return popvalue;
		}
		else
		{
			cout << "Stack i empty " << endl;
			return 0;
		}
	}
	bool isempty()
	{
		if (top>=0)
		{
			return true;
		}
	}
	bool isfull()
	{
		if (top<size)
		{
			return true;
		}
	}
	int getmin()
	{
		return minstack;
	}

};
int main()
{
	int size=0;
	cout << "size = ";
	cin >> size;
	stack obj1(size);

	cout << "Pushing values : " << endl;
	for (int i = 0; i < size; i++)
	{
		int value=0;
		cin >> value;
		obj1.push(value);
	}

	cout << "Poping values : ";
	for (int i = 0; i < size; i++)
	{
		cout << obj1.pop() << " ";
	}
	cout << endl;

	cout << "Min vlaue = " << obj1.getmin() << endl;
	system("pause");
	return 0;
}
