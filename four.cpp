#include<stdio.h>
#include<math.h>
#include<string.h>
//�Ӷ�������������У�ͳ�ƴ����������������С���������������
//�����������������룬�������ñ��� i ͳ�ƴ�����������������ñ��� j ͳ��С���������������
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
 	printf("����0�ĸ�����%d,С��0�ĸ�����%d",i,j);
 } 
