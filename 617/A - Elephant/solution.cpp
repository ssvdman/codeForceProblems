#include <iostream>
using namespace std;
 
int main()
{
    int i = 0;
    int count = 0;
 
    cin >> i;
 
    int arr[5] = { 1,2,3,4,5 };
 
    int j = 0;
 
    while(j < 5)
    {
        if (i > 5)
        {
            i -= 5;
            j = 0;
            count++;
            continue;
        }
        else if (i == arr[j])
        {
            count++;
        }
        j++;
    }
    cout << count << endl;
}