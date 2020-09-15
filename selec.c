#include<stdio.h>
int main()
{
    int a[10],n,i,j,min,temp;
    printf("enter no. of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min])
                min=j;
        }
        if(min!=i){
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
    printf("sorted array");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    return 0;
}
