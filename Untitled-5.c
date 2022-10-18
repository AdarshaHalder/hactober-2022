#include<stdio.h>
int main()
{
    int n,r,i,j,k,s,flag=1,count=1;
    printf("Enter an even number greater than 2: ");
    scanf("%d",&n);
    printf("After decomposing the prime numbers are \n");
    for(i=2;i<=n/2;i++)
    {
        flag=1;
        for(j=2;j<=i/2;++j)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            s=i;
            r=n-s;
            count=1;
            for(k=2;k<=r/2;k++)
            {
                if(r%k==0)
                {
                    count=0;
                    break;
                }
            }
            if(count==1)
                printf("%d and %d\n",s,r);
        }
    }
    return 0;        
}
