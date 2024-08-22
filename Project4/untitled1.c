#include<stdio.h>
//int main()
//{
//	int hour1,hour2,minute1,minute2;
//	scanf("%d %d",&hour1,&minute1);
//	scanf("%d %d",&hour2,&minute2);
//	int t1=hour1*60+minute1;
//	int t2=hour2*60+minute2;
//	int t=t2-t1;
//	printf("时间差是%d小时%d分。",t/60,t%60);
//}

int main()
{
	int t=0,a=5,b=6;
	t=a;
	a=b;
	b=t;
	
	printf("a=%d,b=%d\n",a,b);
	return 0;
}
