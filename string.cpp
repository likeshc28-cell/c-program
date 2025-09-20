#include<stdio.h>
int main(){
	char str[10];
	scanf("%s",str);
	int len=0;
	for (int i=0;str[i]!='\0';i++){
		len++;
	}
	printf("%d\n",len );
}
