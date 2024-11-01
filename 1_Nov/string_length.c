#include<stdio.h>
#include<string.h>
void strcopy(char *s1,char *s2){
	int len=0;
	while(s1[len]){
	  s2[len]=s1[len];
	  len++;
	}
	s2[len]="\0";
	printf("%s",s2);
	
}

int main(){
  char s1[100];
  char s2[100];
  printf("enter the first string ");
  scanf("%[^\n]s",&s1);
  strcopy(s1,s2);
  
}