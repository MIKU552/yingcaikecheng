#include <stdio.h>

int main()
{
    int a[]={10,2,8,22,16,4,10,6,14,20},b[10],i,n=1;
    while(!(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3]&&a[3]==a[4]&&a[4]==a[5]&&a[5]==a[6]&&a[6]==a[7]&&a[7]==a[8]&&a[8]==a[9]))
    {
        printf("第%d次后",n);
        for(i=0;i<=9;i++)
        {
            if(i==0)    b[0]=(a[0]+1)/2+(a[9]+1)/2;
            else b[i]=(a[i]+1)/2+(a[i-1]+1)/2;
        }
        for(i=0;i<=9;i++)
        {
            a[i]=b[i];
            printf(" %d",a[i]);
        }
        printf("\n");
        n++;
    }
    return 0;
}
