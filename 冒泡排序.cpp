# include <iostream>
using namespace std;

void bubble_sort(int a[], int n);

void bubble_sort(int a[], int n)
{
    int i, j, temp;
    for (j = 0; j < n - 1; j++)
        for (i = 0; i < n - 1 - j; i++)
        {
            if(a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
}
 
int main()
{
    int a[6] = {4, 2, 8, 6, 24, 15};
    int i;
    bubble_sort(a, 6);
    for (i = 0; i < 6; i++)
    {
        cout<<a[i]<<endl;
    }
}
