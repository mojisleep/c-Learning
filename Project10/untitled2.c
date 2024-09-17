//#include<stdio.h>
//int main()
//{
//	int x,ret=-1,t;
//	scanf("%d",&x);
//	t=x;
//	while(x>1)
//	{
//		x/=2;
//		ret++;
//	}
//	printf("log2 of %d is %d。",t,ret);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n=3;
//	while(n>=0)
//	{
//		printf("%d",n);
//		n--;
//	}
//	printf("发射\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n=3;
//	while(n>=0)
//	{
//		n--;
//		printf("%d",n);
//	}
//	printf("发射\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int number,sun=0,count=0;
//	scanf("%d",&number);
//	while(number!=-1)
//	{
//		sun+=number;
//		count++;
//		scanf("%d",&number);
//	}
//	printf("%f\n",1.0*sun/count);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int number,sun=0,count=0;
//	do{
//	scanf("%d",&number);		
//	if(number!=-1)
//	{
//		sun+=number;
//		count++;
//	}
//	}while(number!=-1);
//	printf("%f\n",1.0*sun/count);
//	return 0;
//} 

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main()
//{
//	srand(time(0));
//	int number=rand()%100+1;
//	int count=0;
//	int a=0;
//	printf("我已经想到一个1到100之间的数。");
//	do{
//	printf("猜猜这个1到100之间的数：");		
//	scanf("%d",&a);
//	count++;
//	if(a>number)
//	{
//		printf("你猜大了");
//	}
//	else if(a<number)
//	{
//		printf("你猜小了");
//	}
//	}while(a!=number);
//	printf("你用%d次猜到答案。\n",count);
//	return 0;
//}

#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int digit;
	int ret=0;
	while(x>0)
	{
		digit=x%10;
		ret=ret*10+digit;
		x/=10;
	}
	printf("%d",ret);
	return 0;
}
