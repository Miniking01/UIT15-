#include<iostream>

using namespace std;

int main()
{
	int a[]={98,76,109,34,67,190,80,12,14,89,1};
	int k=sizeof(a)/sizeof(a[0]);
	int j;
	for(int i=1;i<k;i++)//循环从第2个元素开始
	{
		if(a[i]<a[i-1])
		{
			int temp=a[i];
			for(j=i-1;j>=0&&a[j]>temp;j--)
			{//下方争论皆因未加大括号引起误解，故增加以避免误导
				a[j+1]=a[j];
			}	
			a[j+1]=temp;//此处就是a[j+1]=temp;
		}
		for(int f=0;f<k;f++)
		{
			cout<<a[f]<<" ";
		}
		cout << endl;
	}
	for(int f=0;f<k;f++)
	{
		cout<<a[f]<<" ";
	}
	return 0;
}
