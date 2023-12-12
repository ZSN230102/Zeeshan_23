#include<iostream>
using namespace std;
class node 
{
public :

	node *next;
	int data;
	node(int d)
	{
		next = NULL;
		data = d;
	}
};

class Seaching_in_linklist
{
private:
	node *head ;
	int *Arr ;
public:

	Seaching_in_linklist()
	{
		head = NULL;
	}

	void InsertNodes(int data)
	{
		node* newnode = new node(data);
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

	void linear_search(int value)
	{
		cout << "LINEAR SEARCH" << endl;
		node *temp = head;
		int found = 0;

		while (temp != NULL)
		{
			if (temp->data == value)
			{
				cout << value << " is found in linklist" << endl;
				found ++;
				break;
			}
			temp = temp->next;
		}

		if (found==0)
		{
			cout << value << " is not found in link list" << endl;
		}
	}

};


int main()
{
	Seaching_in_linklist obj1;

	cout << "Inserting nodes....." << endl;
	obj1.InsertNodes(23);
	obj1.InsertNodes(203);
	obj1.InsertNodes(238);
	obj1.InsertNodes(23675);

	obj1.linear_search(238);
	
	system("pause");
	return 0;
}