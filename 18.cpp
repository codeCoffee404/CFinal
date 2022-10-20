/*程实现：统计某班10名学生成绩中及格的人数，并对成绩进行从低到高排序。
其中getPass（score，n）函数用于计算及格人数，
score为数组名，n为人数、Sort（score，n）函数用于排序，score为数组名，n为人数。
*/
#include <stdio.h>
#include <string.h>
int getPass(int score[],int n){//及格人数 
  int i,count=0; 
  for(i=0;i<n;i++) 
  if(score[i]>=60)count++;//如果大于60，及格人数加1 
  return count;} 
  void Sort(int score[],int n){//排序 
  int i,j,t; 
  for(i=0;i<10;i++)//冒泡排序法 
  for(j=0;j<10;j++) 
  { 
  if(score[i]<score[j]){ 
  t=score[i]; 
  score[i]=score[j]; 
  score[j]=t; 
  } 
  } 
  
  
  } 
  int main() 
  { 
  int score[10],n=10,i,j; 
  for(i=0;i<n;i++)//输入10个成绩 
  scanf("%d",&score[i]); 
  j=getPass(score,n);//及格人数 
  Sort(score,n);//排序 
  for(i=0;i<n;i++)//排序后的数组输出 
  printf("%d\t",score[i]); 
  printf("\n%d",j);//输出及格人数 
  }

