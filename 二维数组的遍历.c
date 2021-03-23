# include <stdio.h>
void bubble_sort(int arr[],int sz)
{
	int i = 0;
	int j = 0;
	int temp = 0;
	
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//用来判断原数组是否为有序
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;//数组不完全有序
			}
			if (flag == 1)
			{
				break;
			}
		}
	}

}
int main()
{
	int i = 0;
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[1]);
	bubble_sort(arr,sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}