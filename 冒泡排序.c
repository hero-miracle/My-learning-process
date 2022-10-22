#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void  Asc(int arr[], int sz)
{
	int i = 0;
	int flag = 1;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag = 1)
			break;
	}
}
int main()
{
	int arr[] = { 1,2,3,4,9,8,7,6,5,10 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	Asc(arr, sz);
	for (i = 0; i <= sz - 1; i++)
	{
		printf("%d ", arr[i]);

	}

	return 0;
}