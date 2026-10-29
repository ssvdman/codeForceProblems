#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string num;
 
    int k;
    cin >> k;
 
    for (int i = 0; i < k; i++)
    {
        num += to_string(i + 1);
    }
    cout << num[k - 1];
}