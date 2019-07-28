#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void foo(int b[][3])//二维数组在函数里面的调用
{
	++b;//b是一个行指针
	b[1][1] = 9;//相当于*(*(b+1)+1),相当于将b的下一行的第二个位置的元素变成了9，也就是a[2][1]
}

int Get(int arr[], int k)
{
	int i,j;
	for (i = 0, j = 9; i != j; i++, j--)
	{
		if (arr[i] + arr[j] == k)
		{
			return i;
			return j;
		}
	}
	return 0;
}

int main()
{
	//unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
	//unsigned long * pulPtr;
	//pulPtr = pulArray;
	//*(pulPtr + 2) += 2;
	//printf("%d,%d\n", *pulPtr, *(pulPtr + 2));//6,10

	//switch (c)//里面的c必须是整型

	//char *szStr = "abcde";
	//szStr += 2;
	//printf("%lu\n", szStr);//输出的是"abcde"这个字符串中的'c'的地址

	//int i;
	//char acNew[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	////上面的字符型数组是0，而不是字符0，相当于'\0'
	//for (i = 0; i < 10; i++)
	//{
	//	acNew[i] = '0';
	//}
	//printf("%d\n", strlen(acNew));//10  strlen计算的是知道'\0'之前的字符的数量

	//int a[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	//foo(a);
	//printf("%d", a[2][1]);//9

	//int x = 0, y = 0, z = 0;
	//z = (x == 1) && (y = 2);
	//printf("%d", y);//0  考察的是运算符的优先级

	//int i = 10;
	//long long t = sizeof(i++);
	//printf("%d", i);//10

	int num[10] = { 0, 3, 4, 0, 7, 8, 1, 0, 0, 3 };
	int n=Get(num, 9);
	printf("%d \n",n);

	system("pause");
	return 0;
}