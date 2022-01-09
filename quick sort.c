#include<stdio.h>
void quicksort(int ar[30],int first,int last)
{
   int i,j,pivot,swap;
   if(first<last)// condition
   {
       pivot=first;
       i=first;
       j=last;
       while(i<j)//condition
       {
           while(ar[i]<=ar[pivot]&&i<last)
            i++;
           while(ar[j]>ar[pivot])
            j--;
           if(i<j)
           {
               swap=ar[i];
               ar[i]=ar[j];
               ar[j]=swap;
           }
       }
       swap=ar[pivot];
       ar[pivot]=ar[j];
       ar[j]=swap;
       quicksort(ar,0,j-1);
       quicksort(ar,j+1,last);
   }
}

int main()
{
    int ar[30],n,i;
    printf("Enter how many element yow want to enter\n");
    scanf("%d",&n);
    printf("Enter %d element one by one\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
    printf("Arrays element are given below\n");
    for(i=0;i<n;i++)
    printf("%d",ar[i]);
    quicksort(ar,0,n-1);
    printf("\n sorted array are");
    for(i=0;i<n;i++)
        printf("%d",ar[i]);
    return 0;
 
}
