//#include<iostream>
//using namespace std;
//class node
//{
//public:
//	int data;
//	node * next;
//	node()
//	{
//		data = 0;
//		next = NULL;
//	}
//	node(int d)
//	{
//		data = d;
//		next = NULL;
//	}
//};
//class linklist
//{
//private:
//	node * head;
//public:
//	linklist()
//	{
//		head = NULL;
//	}
//	void InserAtBegining(int newDATA)
//	{
//
//		////declare and initalize new node.
//		//node * newnode;
//		//newnode = new node();
//		////storing data of old node in new node.
//		//newnode->data = newDATA;
//		////pointing next of new node to head.
//		//newnode->next = head;
//		//head = newnode;
//
//		node * newnode;
//		newnode = new node(newDATA);
//		if (head == NULL)
//		{
//			head = newnode;
//		}
//		else
//		{
//			newnode->next = head;
//			head = newnode;
//		}
//	}
//	void InsertAtLast(int newDATA)
//	{
//		node * newnode;
//		newnode = new node();
//		newnode->data = newDATA;
//		node * temp;
//		temp = head;
//		newnode->next = NULL;
//		if (head == NULL)
//		{
//			head = newnode;
//			return;
//		}
//		while (temp->next != NULL)
//		{
//			temp = temp->next;
//		}
//		temp->next = temp;
//	}
//	void InsertAtMiddle(int newDATA,int position)
//	{
//		node * newnode;
//		newnode = new node();
//		newnode->data = newDATA;
//		if (position>1)
//		{
//			cout << "position can not be negative" << endl;
//		}
//		else if (position==1)
//		{
//			newnode->next = head;
//			head = newnode;
//		}
//	}
//	void display()
//	{
//		node* display = head;
//		while (head == NULL)
//		{
//			cout << "list is empty " << endl;
//		}
//		while (head != NULL)
//		{
//			cout << display->data << " ";
//			display = display->next;
//		}
//	}
//};
//int main()
//{
//	linklist obj1;
//	cout << "linklist is : ";
//	obj1.InserAtBegining(10);
//	obj1.InserAtBegining(100);
//	obj1.InserAtBegining(170);
//
//	cout << "linklist after insert at last : ";
//	obj1.InsertAtLast(200);
//	obj1.display();
//	system("pause");
//	return 0;
//}



#include<iostream>
using namespace std;

class node
{
public:
	int data;
	node *next;
	node()
	{
		data = 0;
		next = NULL;
	}
	node(int d)
	{
		data = d;
		next = NULL;
	}
};

class linklist
{
private:
	node *head;

public:
	linklist()
	{
		head = NULL;
	}

	void InserAtBegining(int newDATA)
	{
		node *newnode;
		newnode = new node(newDATA);
		if (head == NULL)
		{
			head = newnode;
		}
		else
		{
			newnode->next = head;
			head = newnode;
		}
	}

	void InsertAtLast(int newDATA)
	{
		node *newnode;
		newnode = new node();
		newnode->data = newDATA;
		node *temp;
		temp = head;
		newnode->next = NULL;
		if (head == NULL)
		{
			head = newnode;
			return;
		}
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}

	/*void InsertAtMiddle(int newDATA, int position)
	{
		node *newnode;
		newnode = new node(newDATA);
		if (position < 0)
		{
			cout << "position can not be negative" << endl;
		}
		else if (position == 1)
		{
			newnode->next = head;
			head = newnode;
		}
	}*/
	void InsertAtMiddle(int newDATA, int position)
	{
		if (position < 1)
		{
			cout << "position cannot be less than 1" << endl;
			return;
		}

		node *newnode;
		newnode = new node(newDATA);

		if (position == 1)
		{
			newnode->next = head;
			head = newnode;
			return;
		}

		node *temp = head;
		for (int i = 1; i < position - 1 && temp != NULL; i++)
		{
			temp = temp->next;
		}

		if (temp == NULL)
		{
			cout << "Position exceeds the length of the list" << endl;
		}
		else
		{
			newnode->next = temp->next;
			temp->next = newnode;
		}
	}

	void DeleteAtfirst()
	{
		if (head == nullptr)
		{
			cout << "List is empty" << endl;
		}
		else
		{
			node * temp = head;
			head = temp->next;
			delete temp;
			cout << "1st node deleted" << endl;
		}
	}

	void DeleteAtlast()
	{
		if (head == nullptr)
		{
			cout << "List is empty" << endl;
			return;
		}
		else
		{
			node * temp = head;
			while (temp->next->next!=NULL)
			{
				temp = temp->next;
			}
			temp->next = nullptr;
		}
	}
	void display()
	{
		node *display = head;
		if (head == NULL)
		{
			cout << "list is empty " << endl;
			return;
		}
		while (display != NULL)
		{
			cout << display->data << " ";
			display = display->next;
		}
		cout << endl;
	}
};

int main()
{
	linklist obj1;
	cout << "linklist is : ";
	obj1.InserAtBegining(10);

	obj1.display();
	cout << endl;

	cout << "linklist after insert at last : ";
	obj1.InsertAtLast(200);
	obj1.display();
	cout << endl;

	cout << "linklist after insert at middle : ";
	obj1.InsertAtMiddle(600,1);
	obj1.display();
	cout << endl;

	system("pause");
	return 0;
}
