#include<stdio.h>
//int main()
//{
//	int hour1,hour2,minute1,minute2;
//	scanf("%d %d",&hour1,&minute1);
//	scanf("%d %d",&hour2,&minute2);
//	int ih=hour2-hour1;
//	int im=minute2-minute1;
//	if(im<0){
//		im=60+im;
//		ih--;
//	}
//	printf("时间差是%d小时%d分。\n",ih,im);
//	return 0;
//}

//int main()
//{
//
//	printf("%d\n",5==3);
//	printf("%d\n",5>3);
//	printf("%d\n",5<=3);
//	return 0;
//}

//int main()
//{
//	printf("%d\n",7>=3+4);
//	return 0;
//}

//int main()
//{
//	//初始化
//	int price=0,bill=0;
//	//读入金额和票面
//	printf("请输入金额：");
//	scanf("%d",&price);
//	printf("请输入票面：");
//	scanf("%d",&bill);
//	//计算找零
//	if(bill>=price){
//	printf("应该找零：%d。\n",bill-price);
//	}
//	return 0;
//}

//int main()
//{
//	//初始化
//	const int MINOR=35;
//	int age=0;
//	printf("请输入你的年龄：");
//	scanf("%d",&age);
//	printf("你的年龄是%d岁。",age);
//	if(MINOR>=age){
//		printf("年轻是美好的！");
//	}
//	return 0;
//}

//int main()
//{
//	//初始化
//	int price=0,bill=0;
//	//读入金额和票面
//	printf("请输入金额：");
//	scanf("%d",&price);
//	printf("请输入票面：");
//	scanf("%d",&bill);
//	//计算找零
//	if(bill>=price)
//	{
//		printf("应该找零：%d。\n",bill-price);
//	}
//	else
//	{
//		printf("你的钱不够！");
//	}
//	return 0;
//}

//int main()
//{
//	//初始化
//	int a=0,b=0,max=0;
//	printf("请输入两个整数：");
//	scanf("%d %d",&a,&b);
//	if(a>b){
//	max=a;
//	}
//	printf("%d大。\n",max);
//	return 0;
//}

//int main()
//{
//	//初始化
//	int a=0,b=0,max=0;
//	printf("请输入两个整数：");
//	scanf("%d %d",&a,&b);
//	if(a>b)
//	{
//		max=a;
//	}
//	else
//	{
//		max=b;
//	}
//	printf("%d大。\n",max);
//	return 0;
//}

//int main()
//{
//	const double RATE=8.25;
//	const int STANARD=40;
//	double pay=0.0;
//	int hours;
//	printf("请输入工作的小时数：");
//	scanf("%d",&hours);
//	printf("\n");
//	if(hours>STANARD){
//		pay=STANARD*RATE+(hours-STANARD)*(RATE*1.5);
//	}
//	else
//		pay=hours*RATE;
//	printf("应付工资：%f。\n",pay);
//	return 0;
//}

//int main()
//{
//	const int PASS=60;
//	int score;
//	printf("请输入成绩：");
//	scanf("%d",&score);
//	printf("你输入的成绩是%d\n",score);
//	if(score<PASS)
//		printf("很遗憾，成绩没有及格。");
//	else
//		printf("恭喜你，成绩及格。");
//	printf("再见\n");
//	return 0;
//}

//int main()
//{
//	const int PASS=60;
//	int score;
//	printf("请输入成绩：");
//	scanf("%d",&score);
//	printf("你输入的成绩是%d\n",score);
//	if(score<PASS)
//	{
//		printf("很遗憾，成绩没有及格。");	
//	}
//	else
//	{
//		printf("恭喜你，成绩及格。");
//		printf("再见\n");
//	}
//		
//	return 0;
//}
