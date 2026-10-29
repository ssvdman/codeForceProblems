#include <stdio.h>
 
int main(void)
{
    int t;
 
    scanf("%d", &t);
 
    int n[t]; 
    
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n[i]);
    }
 
    for (int i = 0; i < t; i++)
    {
        int og = n[i];
        og++;
        int x = og % 3;
        og = n[i];
        og--;
        int y = og % 3;
        if (x == 0 || y == 0) printf("First
");
        else printf("Second
");
    }
}