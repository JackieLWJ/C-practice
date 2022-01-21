//三个数从大到小排列
// #include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b= 0;
//	int c = 0;
//
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if(b<c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n",a,b,c );
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	for (num = 1; num <= 100; num++)
//	{
//		if (num % 3 == 0) 
//		{
//			printf("%d\n", num);
//		}
//		
//	}
//	return 0;
//}
// 求最大公约数
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d", &a, &b);
	while (a % b)
	{
		c = a % b;
		a = b;
		b = c;
	}
	printf("%d\n", b);
	return 0;
}
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	int num = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d是闰年\n", year);
//			num++;
//		}
//		else {
//			printf("%d不是闰年\n", year);
//		}
//		printf("%d\n", num);
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("\ncount=%d\n",count);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int count = 0;
//	int num = 0;
//	for (num = 1; num <= 100; num++)
//	{	
//		if (num <= 10)
//		{
//			if(num%9==0)
//			{
//				count++;
//			}
//		}
//		if (num > 10 && num <= 100)
//		{
//			if (num % 10 !=0)
//			{
//
//				if (num  %10% 9 == 0)
//				{
//		
//					count++;
//				}
//			}
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{	
//	double sum1 = 0;
//	double sum2 = 0;
//	double num = 0;
//	
//	for (num = 1; num <= 100; num=num+2)
//	{
//		
//		sum1 += 1 / num;
//	}
//	for (num = 2; num <= 100; num =num+ 2)
//	{
//		sum2 -= 1 / num;
//	}
//	printf("%lf\n", sum1+sum2);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	int max = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int num = 1;
//	for (i = 1; i < 10; i++)
//	{
//		
//		for (num=1;num<=i;num++)
//		{
//			
//			printf("%d*%d=%2d ",num, i,num*i);
//
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("#######################\n");
//	printf("##  1.play   0.exit  ##\n");
//	printf("#######################\n");
//}
//void game()
//{
//	int ret = 0;
//	 ret = rand();
//
//	
//	int guess = 0;
//	ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("猜猜数字>:");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
int main ()
{	
	int input = 0;
	srand((unsigned int)time(NULL));
	
	do {
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1 :
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}