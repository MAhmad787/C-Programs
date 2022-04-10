//#include<stdio.h>
//
//int main()
//{
//	int x, y;
//	for(x = 1; x<=3; x++)
//	{
//	for(y = 1; y<=5; y++)
//	{
//		printf("*");
//		}
//		printf("\n");	
//	}
//}

#include<stdio.h>

int main()
{
	int x, y;
	char ch = 'A';
	for(x = 1; x<=5; x++)
	{
	for(y = 1; y<=x; y++)
	{
		printf("%c", ch);
		ch++;
		}
		printf("\n");	
	}
}
