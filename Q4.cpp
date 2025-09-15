#include <stdio.h>
int main (){
	int a,b,c;
	scanf ("%d%d",&a,&b,&c);
	c=a-b;
	printf((c%2==0)?"EVEN":"odd");
	return 0;
}
