#include<stdio.h>
int main()
{
	int sum=-10000,a[1000],s[1000],i=0,j=0,k=0,n;
	char x;
	while(1)
	{
		scanf("%d%c",&a[i++],&x);
		if(x=='\n')break;
	}
	n=i;
	s[0]=a[0];
	for(i=1;i<n;i++)
	{
		if(s[i-1]>0)
		{
			s[i]=s[i-1]+a[i];
			k=i;
		}
		else{
			s[i]=a[i];
			j=i;
			k=i;
		}
	}
	for(i=0;i<n;i++)
		if(sum<s[i])sum=s[i];
	printf("sum=%d\n",sum);
	return 0;
}