#include<stdio.h>
#include<math.h>
#include<string.h>
//1、从键盘输入一个小写字母，转化为大写字母并输出。
 int main(){
 	char a,b;
 	
    printf("从键盘输入一个小写字母");
 	a=getchar();
 	b=a-32;
 	printf("转化后的大写字母及其accsii值%c,%d",b,b);
 	
 	
 } 
