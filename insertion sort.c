#include<stdio.h>
int main()
{
    int ar[50],n,i,j,temp;
    printf("How many element you want to store\n");
    scanf("%d",&n);
    printf("Now enter the %d element one by one\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
    printf("arrays element are given below\n");
    for(i=0;i<n;i++)
        printf("%d",ar[i]);
    for(i=1;i<=n-1;i++)
    {
        for(j=i;j>0&& ar[j-1]>ar[j]; j--)
        {
            temp=ar[j];
            ar[j]=ar[j-1];
            ar[j-1]=temp;
        }
    }
    printf("\n  Insertion Sorted arrays are\n");
  for(i=0;i<n;i++)
        printf("%d",ar[i]);

}
