#include<iostream>
using namespace std;
class Node
{
public :
	int Value;
	Node* Next;
	Node()
	{
		Value = 0;
		Next = NULL;
	}
	Node(int data)
	{

		Value = data;
		Next = NULL;
	}
};
class linklist
{
private:
	Node* Head;
public :
	linklist()
	{
		Head = NULL;
	}
	void InsertAtBegining(int firstVALUE)
	{
		//declair and intialize new node
		Node* fistnode;
		fistnode = new Node(firstVALUE);
		if (Head==NULL)
		{
			//Move the head to new node
			Head = fistnode;
		}
		else
		{	
			//Point the NEXT of new node to the current node
			fistnode->Next = Head;
			//Move the head to new node
			Head = fistnode;
		}

	}
	void InsertAtLast(int lastVALUE)
	{
		Node* lastnode = new Node(lastVALUE);
		Node* temp = Head;
		if (Head==NULL)
		{
			Head = lastnode;
			return;
		}
		while (temp->Next!=NULL)
		{
			temp = temp->Next;
		}
		temp->Next = lastnode;
	}
	void InsertAtMiddle(int MiddleVALUE , int position)
	{
		if (position < 1)
		{
			cout << "Position cannot be less than 1 and Negative" << endl;
			return;
		}

		Node* MiddleNode = new Node(MiddleVALUE);
		if (position==1)
		{
			MiddleNode->Next = Head;
			Head = MiddleNode;
			return;
		}

		Node* temp = Head;
		int current_position = 1;
		while (current_position < position - 1 && temp != nullptr)
		{
			temp = temp->Next;
			current_position++;
		}
		if (temp==NULL)
		{
			cout << "Position exceeds the length of the list" << endl;
		}
		else
		{
			//Now next of temp is at position-1 so we give next of temp to next of MiddleNode
			MiddleNode->Next = temp->Next;
			temp->Next = MiddleNode;
		}

	}
	void DeleteAtFirst()
	{
		if (Head==NULL)
		{
			cout << "List Is Empty" << endl;
		}
		else
		{
			Node* temp = Head;
			Head = Head->Next;
			delete temp;
			cout <<"1st node deleted" << endl;
		}
	}

	void DeleteAtLast()
	{
		if (Head == NULL)
		{
			cout << "List Is Empty" << endl;
		}
		else
		{
			Node* second_lst_node = Head;
			while (second_lst_node->Next->Next!=NULL)
			{
				second_lst_node = second_lst_node->Next;
			}
			second_lst_node->Next = NULL;
			cout << "Last node deleted" << endl;

		}
	}
	void DeleteAtMiddle(int position)
	{
		if (Head == NULL)
		{
			cout << "List is empty" << endl;
			return;
		}
		if (position < 1)
		{
			cout << "Position cannot be less than 1 and Negative" << endl;
			return;
		}
		if (position == 1)
		{
			DeleteAtFirst();
			return;
		}

		int current_pos = 1;
		Node* prev_node = Head;
		while (current_pos!=position-1 && prev_node != nullptr)
		{
			prev_node = prev_node->Next;
			current_pos++;
		}
		if (prev_node==NULL || prev_node->Next == nullptr)
		{
			cout << "\nEntered Position is greater than the length of the list" << endl;
		}
		else
		{
			Node* temp = prev_node->Next;
			prev_node->Next = prev_node->Next->Next;
			delete temp;
			cout << "Node at position " << position << " deleted" << endl;
		}
	
	}
	void display()
	{
		Node* temp = Head;
		if (Head==NULL)
		{
			cout << "linklist is empty " << endl;
			return;
		}
		while (temp!=NULL)
		{
			cout << temp->Value<< "->";
			temp = temp->Next;
		}
		cout << "Null" << endl;
	}


};
int main()
{
	
	linklist obj1;
	cout << "Linklist after insert value at begining : ";
	obj1.InsertAtBegining(1);
	obj1.InsertAtBegining(2);
	obj1.display();
	cout << endl;

	cout << "linklist after insert at last : ";
    obj1.InsertAtLast(219);
	obj1.InsertAtLast(207);
	obj1.InsertAtLast(285);
	obj1.InsertAtLast(450);
	obj1.display();
	cout << endl;


	cout << "linklist after insert at middle : ";
	obj1.InsertAtMiddle(600, 2);
	obj1.display();
	cout << endl;


	obj1.DeleteAtFirst();
	obj1.display();
	cout << endl;

	obj1.DeleteAtLast();
	obj1.display();
	cout << endl;

	obj1.DeleteAtMiddle(2);
	obj1.display();
	cout << endl;
	system("pause");
	return 0;
}
