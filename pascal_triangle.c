#include<stdio.h>
int main()
{
    int n,i,k,j,flag=1;
    printf("Enter the number of rows ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=1;j<=(n-i);j++)
            printf(" ");
        for(k=0;k<(i+1);k++)
        {
            if((k==0)||(i==0))
                flag=1;
            else
                flag=flag*(i-k+1)/k;
            printf("%d ",flag);
        }
        printf("\n");
    }
    return 0;
}