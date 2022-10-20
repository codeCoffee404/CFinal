//本题要求编写程序，将输入的n个整数存入数组a中，
//然后计算这些数的平均值，再输出所有大于平均值的数。
#include <stdio.h>
#include <string.h>
int main() { 
  int a[80],n,i,sum; 
  for(i=0;i<80;i++) {//输入上限80 
  scanf("%d",&a[i]); 
  sum+=a[i]; 
  if(a[i]==0)break;如果输入0就退出输入 
  } 
  printf("%d",sum/i);求平均值 
  
  }

