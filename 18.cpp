/*��ʵ�֣�ͳ��ĳ��10��ѧ���ɼ��м�������������Գɼ����дӵ͵�������
����getPass��score��n���������ڼ��㼰��������
scoreΪ��������nΪ������Sort��score��n��������������scoreΪ��������nΪ������
*/
#include <stdio.h>
#include <string.h>
int getPass(int score[],int n){//�������� 
  int i,count=0; 
  for(i=0;i<n;i++) 
  if(score[i]>=60)count++;//�������60������������1 
  return count;} 
  void Sort(int score[],int n){//���� 
  int i,j,t; 
  for(i=0;i<10;i++)//ð������ 
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
  for(i=0;i<n;i++)//����10���ɼ� 
  scanf("%d",&score[i]); 
  j=getPass(score,n);//�������� 
  Sort(score,n);//���� 
  for(i=0;i<n;i++)//������������� 
  printf("%d\t",score[i]); 
  printf("\n%d",j);//����������� 
  }

