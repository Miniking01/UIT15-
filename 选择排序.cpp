# include <iostream>
# include <stdlib.h>
using namespace std;

void swap(int*a,int*b);
void select_sort(int A[],int n);

void swap(int*a,int*b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void select_sort(int A[],int n)
{
    register int i,j,min,m;
    for(i=0;i<n-1;i++)
    {
        min=i;//查找最小值
        for(j=i+1;j<n;j++)
        {
            if(A[min]>A[j])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            swap(&A[min],&A[i]);
            cout << "第" << i+1 << "趟排序结果为:\n";
            for(m=0;m<n;m++)
            {
                if(m>0)
                {
                    cout << " " ;
                }
                cout << A[m];
            }
            cout << endl;
        }
    }
}
int main(void)
{
    int n;
    while(scanf("%d",&n)!=EOF) 
    {
        int i;
        int*A=(int*)malloc(sizeof(int)*n);
        for(i=0;i<n;i++)
            cin >> A[i];
        select_sort(A,n);
        cout <<"最终排序结果为:\n";
        for(i=0;i<n;i++)
        {
            if(i>0)
                printf(" ");
            printf("%d",A[i]);
        }
       cout << endl;
    }
    return 0;
}
