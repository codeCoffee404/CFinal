//���庯��int get_count(char *name)�����ַ���name�ĳ��ȣ������ؽ����
//��main�����ж���һ���ַ����飬�������ɸ��ַ������ú���get_count�����ַ����ĳ��ȣ�
//��������������
#include <stdio.h>
#include <string.h>
    int get_count(char *name){//����ָ�� 
  int length,i,count; 
  length=strlen(name);//�ж�����ĳ��� 
  for(i=0;i<length;i++){ 
  if(name[i]>='a'&&name[i]<='z'||name[i]>='A'&&name[i]<='Z'){//�ж��ǲ�������Ҫ����ַ� 
  count++;//�ַ���1 
  
  }
  
  }
  return count;
  
  } 
  
  int main(){
  char s[80];
  int count;//������� 
  scanf("%s",s);//����Ҫ�жϵ��ַ��� 
  count=get_count(s);//���ú�����������ֵ 
  printf("%d",count);//��� 
  }

