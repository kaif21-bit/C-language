#include<stdio.h>
int main()
{
    int ar[50],n,i,j,swap;
    printf("How many element you want to store\n");
    scanf("%d",&n);
    printf("Now enter the %d element one by one\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
    printf("arrays element in unsorted order are given below\n");
    for(i=0;i<n;i++)
        printf("%d",ar[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(ar[j]>ar[j+1])
            {
                swap=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=swap;
            }
        }
    }
    printf("\n arrays element in sorted order are given below\n");
    for(i=0;i<n;i++)
        printf("%d",ar[i]);


}
