#include <stdio.h> 
  #include <math.h> 
  int main() 
  { 
  int i,sum2=1; 
  double sum1=0; 
  scanf("%d",&sum2);//�����ж��ٶִ��� 
  for(i=1;i<=64;i++)//64������ 
  { 
  sum1+=pow(2,i-1);//���Ŀǰ�ĸ����ܹ���Ҫ���ٴ��� 
  if((sum2*1e7)<sum1)break;//���Ŀǰ������Ҫ�Ĵ��׳�����ӵ�еĴ�������break 
  } 
  
  printf("%d",i);//�����󵽵�ռ�˶��ٸ� 
  
  }

