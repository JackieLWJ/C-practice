//1��100֮�������
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
//�ж�һ�����Ƿ�Ϊ����
// #include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 2 == 0)
//	{
//		printf("%dż��\n",n);
//	}
//	else if (n % 2 == 1)
//	{
//		printf("%d������\n", n);
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
 //n�Ľ׳�
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
// 1��10�Ľ׳˵ĺ�
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
//���ֲ���
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;//���±�
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
//			printf("�ҵ���\n");
//			break;
//		}
//
//	}
//	if (right < left)
//	{
//		printf("û�ҵ�\n");
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
		printf("����������\n");
		scanf("%s", password);
		if (strcmp(password,"123456")==0)
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
		if(i==3)
		{
			printf("�������������,������\n");
		}
		
	}
	return 0;
}
