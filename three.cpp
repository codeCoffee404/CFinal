#include<stdio.h>
#include<math.h>
#include<string.h>
//���ڸ�����������N����Ҫ���� S=1!+2!+3!+...+N!��
 int main(){
 	int n,i;
 	int s=1;
 	printf("����һ����������׳�");
	 scanf("%d",&n);
	 for(i=1;i<=n;i++){
	    s*=i;
	 } 
   printf("%d�Ľ׳���%d",n,s);
 	
 	
 } 
