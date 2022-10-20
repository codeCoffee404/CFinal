#include <stdio.h>
#include <string.h>
//求出Fibonacci数列的前30个数并存放到数组a中,输出数组a的所有元素（要求每行输出5个元素）。
//每月的兔子数都是前两个月的数量之和。

 
int main(){ 
  int i,a[30]; //定义变量 
  a[0]=1,a[1]=1; //变量初始化 
  for(i=2;i<30;i++)//把斐波那契数列30个数放入数组 
  a[i]=a[i-2]+a[i-1]; 
  for(i=0;i<30;i++) //输出数组 
  { 
  printf("%d\t",a[i]); 
  if(i%5==0)printf("\n");//如果一行的数字有5个了，换行 
  } 
  
  }

