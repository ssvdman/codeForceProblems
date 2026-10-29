#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, smallest_index = 0, greatest_index = 0;
 
    cin >> n;
 
    vector<int> arr(n);
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    if (n == 1) 
    {
        cout << "NO";
    } 
    else
    {
        sort(arr.begin(), arr.end());
    
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= arr[smallest_index]) smallest_index = i;
            if (arr[i] >= arr[greatest_index]) greatest_index = i;
        }
        if (greatest_index == smallest_index) cout << "NO";
        else cout << arr[smallest_index + 1];
    }
}   