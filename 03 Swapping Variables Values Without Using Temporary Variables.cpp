#include<iostream>
#include <string>;
using namespace std;
int main()
{
	
	int a = 1, b = 2;
	cout << "Before Swapping : " << " a = " << a << " & b = " << b << endl;
	a = a+b;//(1+2=3)
	b = a - b; //3-2=1
	a = a - b;// 3-1=2
	cout << "After Swapping : " << " a = " << a << " & b = " << b << endl;
	system("pause");
	return 0;
}