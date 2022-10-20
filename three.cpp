#include<stdio.h>
#include<math.h>
#include<string.h>
//对于给定的正整数N，需要计算 S=1!+2!+3!+...+N!。
 int main(){
 	int n,i;
 	int s=1;
 	printf("输入一个数，求其阶乘");
	 scanf("%d",&n);
	 for(i=1;i<=n;i++){
	    s*=i;
	 } 
   printf("%d的阶乘是%d",n,s);
 	
 	
 } 
