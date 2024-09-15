//#include<stdio.h>
//int main()
//{
//	int type;
//	scanf("%d",&type);
//	switch (type) {
//	case 1:
//		printf("你好");
//		break;
//	case 2:
//		printf("早上好");
//		break;
//	case 3:
//		printf("晚上好");
//		break;
//	case 4:
//		printf("再见");
//		break;
//	default:
//		printf("啊，什么啊？");
//		break;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	const int MRN=2;
//	int type;
//	scanf("%d",&type);
//	switch (type) {
//	case 1:
//		printf("你好");
//		break;
//	case MRN://C99能用
//		printf("早上好");
//		break;
//	case 3:
//		printf("晚上好");
//		break;
//	case 4:
//		printf("再见");
//		break;
//	default:
//		printf("啊，什么啊？");
//		break;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int type;
//	scanf("%d",&type);
//	switch (type) {
//	case 1:
//	case 2:
//		printf("早上好");
//		break;
//	case 3:
//		printf("晚上好");
//	case 4:
//		printf("再见");
//		break;
//	default:
//		printf("啊，什么啊？");
//		break;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("请输入成绩");
//	int grade;
//	scanf("%d",&grade);
//	grade/=10;
//	switch (grade) {
//	case 10:
//	case 9:
//		printf("A\n");
//		break;
//	case 8:
//		printf("B\n");
//		break;
//	case 7:
//		printf("C\n");
//		break;
//	case 6:
//		printf("D\n");
//		break;
//	default:
//		printf("F\n");
//		break;
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	printf("请输入月份");
	int month;
	scanf("%d",&month);
	switch (month) {
	case 1: printf("1月"); break;
	case 2: printf("2月"); break;
	case 3: printf("3月"); break;	
	case 4: printf("4月"); break;	
	case 5: printf("5月"); break;	
	case 6: printf("6月"); break;	
	case 7: printf("7月"); break;	
	case 8: printf("8月"); break;
	case 9: printf("9月"); break;	
	case 10: printf("10月"); break;	
	case 11: printf("11月"); break;	
	case 12: printf("12月"); break;		
	}
	return 0;
}
