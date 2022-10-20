#include<stdio.h>
#include<math.h>
#include<string.h>
//从读入的整数数据中，统计大于零的整数个数和小于零的整数个数。
//用输入零来结束输入，程序中用变量 i 统计大于零的整数个数，用变量 j 统计小于零的整数个数。
 int main(){
   int n;
   int i=0;
   int j=0;
   printf("Enter iNT number,with 0 to end\n");
    scanf("%d",&n);
	 while(n!=0){
	 	if(n>0)
	 	 i++;
	 	 else if(n<0)
	 	 j++;
	 	 
	 	 
	 	 scanf("%d",&n);
	 	 
	 	
	 	
	 	
	 	
	 }
 	printf("大于0的个数是%d,小于0的个数是%d",i,j);
 } 
