#include <stdio.h>
int main(){
    int n,a[100],i,j,x;
scanf("%d",&n);
for(i=0;i<n;i++)scanf("%d",&a[i]);
for(i=1;i<n;i++){x=a[i];
    j=i-1;
    while(j>=0&&a[j]>x){a[j+1]=a[j];
        j--;}a[j+1]=x;
    }
for(i=0;i<n;i++)printf("%d ",a[i]);
}