//1到100之间的奇数
// #include <stdio.h>
//int main()
//{
//	int n = 1;
//	while (n >= 1 && n <= 100)
//	{
//		if (n % 2 == 1)
//		{
//			printf("%d\n", n);
//		}
//		n++;
//	}
//
//
//	return 0;
//}
//判断一个数是否为奇数
// #include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 2 == 0)
//	{
//		printf("%d偶数\n",n);
//	}
//	else if (n % 2 == 1)
//	{
//		printf("%d是奇数\n", n);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if(ch<'0'||ch>'9')
//		{
//			continue;
//		}
//		putchar(ch);
//	}
//	return 0;
//}
// 
//#include <stdio.h>
//int main()
//{
//	int num = 1;
//	do {
//		printf("%d\n", num);
//		num++;
//	} while (num <= 10);
//	return 0;
//}
 //n的阶乘
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d", &n);
//	m = n;
//	int sum = 1;
//	for (n = 1; n <= m; n++)
//	{
//		sum *= n;
//	}
//	printf("%d\n", sum);
//	return 0;
//
// }
// 1到10的阶乘的和
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int sum = 1;
//	int sump = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		sum *= n;
//		sump += sum;
//	}
//	printf("%d\n", sump);
//	return 0;
//}
//二分查找
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;//左下标
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (right + left) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else 
//		{
//			printf("找到了\n");
//			break;
//		}
//
//	}
//	if (right < left)
//	{
//		printf("没找到\n");
//	}
//	return 0;
//
//}
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<windows.h>
//int main()
//{
//	char arr1[] = "welcome to bie !!!";
//	char arr2[] = "##################";
//	int right = strlen(arr1) - 1;
//	int left = 0;
//	while (left <= right)
//	{
//		
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//Sleep(1000);
//		//system("cls");
//		left++;
//		right--;
//		getchar();
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
// 
#include <stdio.h>
int main()
{
	char password[20] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码\n");
		scanf("%s", password);
		if (strcmp(password,"123456")==0)
		{
			printf("登陆成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
		if(i==3)
		{
			printf("三次密码均错误,请重试\n");
		}
		
	}
	return 0;
}
