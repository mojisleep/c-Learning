//#include<stdio.h>
//int main()
//{
//	int a,b,c;
//	scanf("%d %d %d",&a,&b,&c);
//	int max=0;
//	if(a>b)
//	{
//		if(a>c)
//		{
//			max=c;
//		}
//		else
//		{
//			max=c;
//		}
//	}else
//	{
//		if(b>c)
//		{
//			max=b;
//		}else
//		{
//			max=c;
//		}
//	}
//	printf("The max is %d\n",max);
//	return 0;		
//}
//

//#include<stdio.h>
//int main()
//{
//	const int READY=24;
//	int code=0,count=0;
//	scanf("%d %d",&code,&count);
//	if(code==READY)
//	{
//		if(count<20)
//		{
//			printf("一切正常\n");
//		}
//	}
//	else
//	{
//		printf("继续等待\n");
//	}
//
//	return 0;		
//}

//#include<stdio.h>
//int main()
//{
//	const int READY=24;
//	int code=0,count=0;
//	scanf("%d %d",&code,&count);
//	if(code==READY)
//		if(count<20)
//			printf("一切正常\n");
//		else
//			printf("继续等待\n");
//	return 0;		
//}

//#include<stdio.h>
//int main()
//{
//	int f=0;
//	int x;
//	scanf("%d",&x);
//	if(x<0)
//	{
//		f=-1;
//	}
//	else if(x==0)
//	{
//		f=0;
//	}
//	else if(x>5)
//	{
//		f=2*x;
//	}
//	else
//	{
//		f=3*x;
//	}
//		printf("%d\n",f);
//	return 0;		
//}

#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	if(x<0)
	{
		printf("%d\n",-1);
	}
	else if(x==0)
	{
		printf("%d\n",0);
	}
	else if(x>5)
	{
		printf("%d\n",2*x);
	}
	else
	{
		printf("%d\n",3*x);
	}
	return 0;		
}
