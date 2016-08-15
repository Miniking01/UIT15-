
#define MAXSIZE 20

typedef int KeyType;

typedef struct
{
	KeyType key;
}RecordType;

typedef struct
{
	RecordType r[MAXSIZE+1];
	int length;
}Sequence_List;

#include "stdio.h"

typedef Sequence_List HeapType;

void HeapAdjust(HeapType &H,int s,int m)
{
	H.r[0]=H.r[s];	
	for(int j=2*s;j<=m;j*=2)
	{
		if(j<m && H.r[j].key<H.r[j+1].key) ++j;
			if(H.r[0].key>=H.r[j].key) break;
		H.r[s]=H.r[j];
		s=j;
	}
	H.r[s]=H.r[0];
}

void HeapSort(HeapType &H)
{
	int i;
	for(i=H.length/2;i>0;--i) HeapAdjust(H,i,H.length);
		for(i=H.length;i>1;--i)
		{
			H.r[0]=H.r[1];
			H.r[1]=H.r[i];
			H.r[i]=H.r[0];
			HeapAdjust(H,1,i-1);
		}
}

void print_HeapType_List_H(HeapType &H,int total_heap_sort_record) 
{
	int i;
	for(i=1;i<=total_heap_sort_record;i++) 
		printf("%d ",H.r[i].key); 
		printf("\n");
}

int main ()
{
	HeapType H;
	H.length=8;
	H.r[1].key=49; 
	H.r[2].key=38;
	H.r[3].key=65; 
	H.r[4].key=97;
	H.r[5].key=76; 
	H.r[6].key=13; 
	H.r[7].key=27; 
	H.r[8].key=49;
	printf("´ýÅÅ¼ÇÂ¼³õÊ¼ÐòÁÐ£º\n");
	print_HeapType_List_H(H, H.length);
	HeapSort(H);
	printf("¶ÑÅÅÐòºó¼ÇÂ¼ÐòÁÐ£º\n");
	print_HeapType_List_H(H, H.length);
}
