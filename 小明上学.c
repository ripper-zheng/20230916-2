#include<string.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define  max(a,b) ((a)>(b)?(a):(b))
#define  min(a,b) ((a)<(b)?(a):(b))


long long r,y,g;

int n;

int k[10024],t[10024];

int i,j;

int main()
{
	scanf("%d %d %d",&r,&y,&g);
	scanf("%d",&n);
	for(i=1;i<=n;i++)scanf("%d %d",&k[i],&t[i]);
	long long time=0; 
	for(i=1;i<=n;i++)
	{
		if(k[i]==0||k[i]==1)
		{
			time+=t[i];
		}	
		else if(k[i]==2) 
		{
			time+=t[i]+r; 
		}
		else if(k[i]==3)
		{
			;
		}
		
	} 
	printf("%d",time);
	
	
	return 0;
}
