#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    
    cin >> t;
 
    vector<string> arr;
    vector<int> one, zero;
    int sum[t];
 
    for (int i = 0; i < t; i++)
    {
        string num;
        cin >> num;
        arr.push_back(num);
        sum[i] = 0;
    }
 
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            // find index of 1s and 0s
            if (arr[i][j] == '1')
            {
                int buffer = j;
                one.push_back(buffer);
            }
            else
            {
                int buffer = j;
                zero.push_back(buffer);
            }
        }
        one.shrink_to_fit();
        zero.shrink_to_fit();
 
        //if there is a zero index between two 1s then delete all the zero indexes inbetween
        for (int k = 0; k < zero.size(); k++)
        {
            if (one.size() > 1 && zero[k] > one[0] && zero[k] < one[one.size() - 1])
            sum[i]++;
        }
        one.clear();
        zero.clear();
    }
 
    for (int i = 0; i < arr.size(); i++)
    {
        cout << sum[i] << "
";
    }
}