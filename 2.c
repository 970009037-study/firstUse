#include<stdio.h>
int main()
{
	int a[5][3],i,j,max,s;
	float ave;
	for(i=0;i<5;i++)
	{
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<5;i++)
	{
		max=a[i][0];
		for(j=1;j<3;j++)
		{
			if(max<a[i][j])
                 max=a[i][j];
		}
		printf("%4d",max);
	}
	printf("\n");
	for(j=0;j<3;j++)
	{
		s=0;
		for(i=0;i<5;i++)
		{
			s=s+a[j][i];
		}
		ave=s/5.0;
		printf("%f\n",ave);
	}
	return 0;
}