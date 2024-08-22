#include <stdio.h>

//int main()
//{
//	int price=0;
//	printf("请输入金额（元）");
//	scanf("%d",&price);
//	int change=100-price;
//	printf("找你%d元\n",change);
//	return 0;
//}

//int main()
//{
//	const int AMOUNT=100;//const是一个修饰符给变量添加一个不变的属性，此变量不能被修改。
//	int price=0;
//	printf("请输入金额（元）");
//	scanf("%d",&price);
//	int change=AMOUNT-price;
//	printf("找你%d元\n",change);
//	return 0;
//}

//int main()
//{
//	int amount=100;
//	int price=0;
//	printf("请输入金额（元）");
//	scanf("%d",&price);
//	printf("请输入票面（元）");
//	scanf("%d",&amount);
//	int change=amount-price;
//	printf("找你%d元\n",change);
//	return 0;
//}

int main()
{
	int a,b;
	printf("请输入两个整数：");
	scanf("%d %d",&a,&b);
	printf("%d+%d=%d\n",a,b,a+b);
	return 0;
}
