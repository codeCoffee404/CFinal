#include<stdio.h>
#include<math.h>
#include<string.h>
//2、从键盘输入两个整数，输出最小数。
 int main(){
 	int a,b,c;
 	
    printf("从键盘输入两个整数");
 	scanf("%d%d",&a,&b);
 	c=a>b?b:a;
 	printf("最小的数%d",c);
 	
 	
 } 
