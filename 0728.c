#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void foo(int b[][3])//��ά�����ں�������ĵ���
{
	++b;//b��һ����ָ��
	b[1][1] = 9;//�൱��*(*(b+1)+1),�൱�ڽ�b����һ�еĵڶ���λ�õ�Ԫ�ر����9��Ҳ����a[2][1]
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

	//switch (c)//�����c����������

	//char *szStr = "abcde";
	//szStr += 2;
	//printf("%lu\n", szStr);//�������"abcde"����ַ����е�'c'�ĵ�ַ

	//int i;
	//char acNew[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	////������ַ���������0���������ַ�0���൱��'\0'
	//for (i = 0; i < 10; i++)
	//{
	//	acNew[i] = '0';
	//}
	//printf("%d\n", strlen(acNew));//10  strlen�������֪��'\0'֮ǰ���ַ�������

	//int a[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	//foo(a);
	//printf("%d", a[2][1]);//9

	//int x = 0, y = 0, z = 0;
	//z = (x == 1) && (y = 2);
	//printf("%d", y);//0  �����������������ȼ�

	//int i = 10;
	//long long t = sizeof(i++);
	//printf("%d", i);//10

	int num[10] = { 0, 3, 4, 0, 7, 8, 1, 0, 0, 3 };
	int n=Get(num, 9);
	printf("%d \n",n);

	system("pause");
	return 0;
}