#include <stdio.h>
#include <string.h>
/*
*ĳ�ֻ���ÿ�����Ͻ���������ʱ��Ҫ��¼�ֻ���������
�Լ�ÿ���ֻ������ơ��������ֻ���������ÿ���ֻ��ĵ��ۣ��ֻ��ṹ�嶨�����£�
struct phone{
	char name[15];
	int count;
	float price;
};
��д���򣬽����̵깤����Ա¼��Ľ����ֻ�����������ÿ���ֻ��Ļ�����Ϣ�����ơ����������ۣ���
���㲢�������������ѵ��ܽ�

*/
{ 
  struct phone{ 
  char name[15]; 
  int count; 
  float price; 
  }p[30]; 
  int main(){
  int i,sum=0; 
  for(i=0;i<30;i++){//ѭ������ 
  scanf("%s %d %f",p[i].name,&p[i].count,&p[i].price);//�������֣��������۸� 
  if(p[i].price==0)break;//�۸�Ϊ0�ͽ������� 
  sum+=p[i].count*p[i].price;//�����˼۸���뵽��Ǯ������ 
  }printf("%d",sum); 
  }

