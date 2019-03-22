#include<stdio.h>
int main() {
	//数组名是数组的唯一标识符
	//数组名，充当一种构造类型
	//数组名，充当访问数据成员的首地址

	int arr[10] = { 1,2,3,4,5 };
	printf("sizeof(arr) = %d\n",sizeof(arr));				// sizeof(arr) = 40
	printf("sizeof(int[10]) = %d\n", sizeof(int[10]));		// sizeof(int[10]) = 40


	printf("arr = %p\n",arr);								// arr = 005EFD20
	printf("&arr = %p\n", &arr);							// &arr = 005EFD20
	printf("arr[0] & *(arr+0) %d\n", *(arr+1));				// arr[0] & *(arr+0) 2

}	