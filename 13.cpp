#include <stdio.h>
#include <string.h>
/*

从键盘输入某班58个学生的《C语言程序设计》的成绩，
编程计算该班《C语言程序设计》的平均分。

*/ 
int main(){ 
  int a[58],i,sum; 
  printf("请输入58个学生的成绩");//提示输入 
  for(i=0;i<58;i++){//
  scanf("%d",&a[i]);//输入数据 
  sum+=a[i];}//把每个输入的而数据都加一起 
  printf("%d",sum/58);}//输入的数据求平均值输出


