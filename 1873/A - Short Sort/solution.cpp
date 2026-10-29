#include<iostream>
using namespace std;
 
int main()
{
	//abc
	int t;
	cin >> t;
 
	for (int i = 0; i < t; i++)
	{
		string a;
		cin >> a;
 
		//number of possible ways: 6
		if (a == "bca" || a == "cab")
		{
			cout << "NO" << endl;
		}
		else
		{
			cout << "YES" << endl;
		}
	}
}