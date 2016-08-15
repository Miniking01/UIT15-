# include <iostream>
using namespace std;

//希尔排序C的四种实现：

void shellsort(int *a,int n)
{
	int k=n/2;
	while(k>0)
	{
		for(int i=k;i<n;i++)
		{
			int t=a[i];
			int j=i-k;
			while(j>=0&&t<a[j])
			{
				a[j+k]=a[j];
				a[j]=t;
				j=j-k;
			}
		}
		k/=2;
	} 
}

/*void shellsort(int *a,int n)
{
	int k=n/2;
	while(k>0)
	{
		for(int i=k;i<n;i++)
		{
			int t=a[i];
			int j;
			for(j=i-k;j>=0&&t<a[j];j-=k)
				a[j+k]=a[j];
			a[j+k]=t;
		}
		k/=2;
	} 
}

void shellsort(int *a,int n)
{
	int k=n/2;
	while(k>0)
	{
		for(int i=k;i<n;i++)
		{
			int t=a[i];
			int j;
			for(j=i;j>=k&&t<a[j-k];j-=k)
				a[j]=a[j-k];
			a[j]=t;
		}
		k/=2;
	} 
}

void shellsort(int *a,int n)
{
	int k=n/2;
	while(k>0)
	{
		for(int i=k;i<n;i++)
		{
			int t=a[i];
			int j=i;
			while(j>=k&&t<a[j-k])
			{
				a[j]=a[j-k];
				j=j-k;
			}
			a[j]=t;
		}
		k/=2;
	} 
}*/ 

int main()
{
	int a[10]={8,10,3,5,7,4,6,1,9,2};
	shellsort(a,sizeof(a)/sizeof(a[0]));
	for(int k=0;k<10;k++)
		printf("a[%d]=%d\n",k,a[k]);
	return 0;
}
