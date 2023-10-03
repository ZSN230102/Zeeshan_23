#include<iostream>
#include <string>;
using namespace std;
int main()
{
	
	int sum,result=0;
	for (int i = 1; i <= 100;i++)
	{
		sum += i;
		result = sum;
	}
	cout << "Sum of 1st 100 numbers : " << result<<endl;

	system("pause");
	return 0;
}