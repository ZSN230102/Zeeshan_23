#include<iostream>
#include <string>;
using namespace std;
int main()
{
	
	string name, age, gender, program, semester;
	cout << "Enter name." << endl;
	cin >> name;
	cout << "Enter age." << endl;
	cin >> age;
	cout << "Enter gender." << endl;
	cin >> gender;
	cout << "Enter program." << endl;
	cin >> program;
	cout << "Enter semester." << endl;
	cin >> semester;
	cout << "-----STUDENT INFORMATION-----" << endl;
	cout << "\n Name:" << name << endl;
	cout << "\n Age:" << age << endl;
	cout << "\n Gender:" << gender << endl;
	cout << "\n Pogram:" << program << endl;
	cout << "\n Smester:" << semester << endl;
	system("pause");
	return 0;
}