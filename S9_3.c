#include <stdio.h>

int main(void) {
	int p[10],q[10],r[10];
	int i;
	for(i=0;i<4;i++)
	{
		scanf("%d %d",&p[i],&q[i]);
		if(i%2==0)
		r[i]=p[i]/q[i];
		else
		r[i]=p[i]%q[i];
	}
	for(i=0;i<4;i++)
	{
		printf("\n%d",r[i]);
	}
	return 0;
}