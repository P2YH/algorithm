#include <stdio.h>

//打印数组
void printArray(int nArray[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d," , nArray[i]);
	}
	printf("\n");
}

//插入排序
void InsertSort(int nArray[], int n)
{
	int key = 0;
	for (int i = 1; i < n; i++)
	{
		key = nArray[i];
		int j = i - 1;
		while (j >= 0 && nArray[j] > key)//遍历key之前已经排好序的数，如果这个数大于key值那么进入后移操作
		{
			nArray[j + 1] = nArray[j];//大的数后移一位
			j--;//游标前移
		}
		nArray[j + 1] = key;//插入到顺序的位置
	}
}
//插入排序 for循环版本
void InsertSort3( int nArray[], int n)
{
	int key = 0;
	for (int i = 1; i < n; i++)
	{
		key = nArray[i];
		int j = i -1;
		for (; j >= 0 && nArray[j] > key; j--)
		{
			nArray[j+1] = nArray[j];
		}
		nArray[j+1] = key;
	}
}

//插入排序3 交换法
void InsertSort3(int nArray[], int n)
{
	for(int i = 1; i < n; i++)
	{
		//依次比较i之前包括i的相邻的两个元素，如果后一个比前一个元素小，那么交换位置，游标j前移以为
		for(int j = i -1; j >=0 && nArray[j + 1] < nArray[j]; j--)
		{
			int nTemp = nArray[j];
			nArray[j] = nArray[j + 1];
			nArray[j + 1] = nTemp;
		}
	}
}

int main()
{
	int nArray[] = {10,3,5,2,1,4};
	int nSize = sizeof(nArray)/sizeof(nArray[0]);
	printArray(nArray, nSize);
	InsertSort(nArray, nSize);
	printArray(nArray, nSize);
	getchar();
	return 0;
}
