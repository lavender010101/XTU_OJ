#include<stdio.h>
 int main(){
    int n,a[1000],i,sum=0;
        scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
        }
    printf("%d",sum);
}
