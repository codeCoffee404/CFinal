#include <stdio.h>
#include <string.h>
/*
*某手机店每天早上进货，进货时需要记录手机的数量，
以及每个手机的名称、所包含手机的数量、每个手机的单价，手机结构体定义如下：
struct phone{
	char name[15];
	int count;
	float price;
};
编写程序，接收商店工作人员录入的进货手机的总数量和每个手机的基本信息（名称、个数、单价），
计算并输出当天进货花费的总金额。

*/
{ 
  struct phone{ 
  char name[15]; 
  int count; 
  float price; 
  }p[30]; 
  int main(){
  int i,sum=0; 
  for(i=0;i<30;i++){//循环输入 
  scanf("%s %d %f",p[i].name,&p[i].count,&p[i].price);//输入名字，数量，价格 
  if(p[i].price==0)break;//价格为0就结束输入 
  sum+=p[i].count*p[i].price;//数量乘价格加入到总钱数当中 
  }printf("%d",sum); 
  }

