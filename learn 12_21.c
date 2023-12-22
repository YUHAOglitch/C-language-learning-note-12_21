#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int arr[] = { 1,2,3,4,5 };//大小端字节序
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + 1) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

#include <string.h>

//int main()
//{
//	char arr[10001] = { 0 };
//	gets(arr);//获取字符串
//	int left = 0;
//	int right = strlen(arr) - 1;//不包含\n 求字符串长度
//	//交换
//	return 0;
//}

#include <math.h>

//int main()
//{
//	int a = 10;
//	int b = 3;
//	int c = pow(a, b);//a的b次方 <math.h>
//	return 0;
//}

//*p.a //err

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int sum = a;
//	while (a > 1)
//	{
//		sum += a / 2;
//		//if (a % 2 == 1)
//		//	a = (a / 2) + 1;
//		//else
//		//	a = a / 2;
//		a = a / 2 + a % 2;
//	}
//	printf("%d", sum);
//	//sum = 2 * a - 1;
//	return 0;
//}