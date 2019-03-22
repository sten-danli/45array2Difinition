#include<stdio.h>
int main() {
	int arr[10][8] = { 1,2,3,4,5,6 };
	int a[3] = {588,599,5858};
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			printf("%d", *(arr[i] + j)); //	*arr[i]和 *(arr+0) 是一样的，他们都是数组名
		}
		putchar(10);
	}

	printf("-------------------------------------------------------------------------\n\n");


	//数组名是数组的唯一标识符
	//数组名，充当一种构造类型
	//数组名，充当访问数据成员的首地址

	printf("sizeof(arr) = %d\n",sizeof(arr));				// sizeof(arr) = 40
	printf("sizeof(int[10]) = %d\n", sizeof(int[10]));		// sizeof(int[10]) = 40
	


	printf("-------------------------------------------------------------------------\n\n");
	printf("arr			 = %p\n",arr);								// arr = 005EFD20
	printf("&arr		 = %p\n", &arr);							// &arr = 005EFD20
	printf("arr[0]		 = *(arr+0) %d\n", *(a));				// arr[0] & *(arr+0) 2
	printf("arr[0][0]	 = %p", &arr[0][0]);

	printf("-------------------------------------------------------------------------\n\n");

	printf("sizeof(a)=%d\n",sizeof(a));						// sizeof(a) = 48
	printf("sizeof (int[3][4])=%d\n", sizeof(int[3][4]));	// sizeof(int[3][4]) = 48


		
	
}	