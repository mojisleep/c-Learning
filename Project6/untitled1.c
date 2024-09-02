#include<stdio.h>
//int main()
//{
//	int x;
//	int n=0;
//	scanf("%d",&x);
//	if(x>999){
//		n=4;
//	}else if(x>99){
//		n=3;
//	}else if(x>9){
//		n=2;
//	}else if(x>0){
//		n=1;
//	}
//	printf("%d\n",n);
//	return 0;
//}

//int main()
//{
//	int x;
//	int n=0;
//	scanf("%d",&x);
//	n++;
//	x/=10;
//	while(x>0){
//		n++;
//		x/=10;
//	}
//	printf("%d\n",n);
//	return 0;
//}

//int main()
//{
//	int x;
//	int n=0;
//	scanf("%d",&x);
//	do{
//		n++;
//		x/=10;
//	}while(x>0);
//	printf("%d\n",n);
//	return 0;
//}

//int main()
//{
//	int fact=1,i=1;
//	int n;
//	scanf("%d",&n);
//	while(i<=n){
//		fact*=i;
//		i++;
//	}
//	printf("%d!=%d\n",n,fact);
//	return 0;
//}

//int main()
//{
//	int fact=1,i=1;
//	int n;
//	scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		fact*=i;
//	}
//	printf("%d!=%d\n",n,fact);
//	return 0;
//}

int main()
{
	int fact=1;
	int n;
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		fact*=i;
	}
	printf("%d!=%d\n",n,fact);
	return 0;
}
