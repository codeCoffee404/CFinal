#include <stdio.h> 
  #include <math.h> 
  int main() 
  { 
  int i,sum2=1; 
  double sum1=0; 
  scanf("%d",&sum2);//输入有多少吨大米 
  for(i=1;i<=64;i++)//64个格子 
  { 
  sum1+=pow(2,i-1);//算出目前的格子总共需要多少大米 
  if((sum2*1e7)<sum1)break;//如果目前格子需要的大米超过了拥有的大米数，break 
  } 
  
  printf("%d",i);//输出最后到底占了多少格 
  
  }

