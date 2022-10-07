#include<stdio.h>
int member(int a,int key,int arr[])
{
	
	return 0;
}
int main()
{
	int nf,ne;
	scanf("%d%d",&nf,&ne);
	int a[ne],f[nf],l[ne-nf],H=0,F=nf;
	for(int i=0;i<ne;i++)	
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<nf;i++)
	{
		f[i]=a[i];
		for(int j=0;j<i+1;j++)
		{
			printf("%d ",f[j]);
		}
		printf("F\n");
	}
	for(int i=0;i<(ne-nf);i++)
	{
		l[i]=a[i+nf];
	}
	int i=0,j=0;
	while((H+F)!=ne)
	{
		int c=0;
		for(int y=0;y<nf;y++)
		{
			if(f[y]==l[j])
			{
				c++;
				break;
			}
		}
		if(c)
		{
			for(int k=0;k<nf;k++)
			{
				printf("%d ",f[k]);
			}
			printf("H\n");
			H++;
		}
		else
		{
			F++;
			f[i]=l[j];
			i++;
			for(int k=0;k<nf;k++)
			{
				printf("%d ",f[k]);
			}
			printf("F\n");
			if(i==nf)
			{
				i=0;
			}
		}
		j+=1;
	}
	printf("%d	%d",H,F);
}
