#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter a number in which you want to print the stars: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
        	if((i+j)<=n)
        	{
        		printf(" ");
			}
			else
			{
				printf("*");
			}
            
        }
        printf("\n");
    }
}
