#include<stdio.h>
#include<math.h>
 int main(){
    float a,b,c,d,s;
    scanf("%f%f%f",&a,&b,&c);
    d=(a+b+c)/2;
    if(a<(b+c)&&b<(a+c)&&c<(a+b)){ 
       s=sqrt(d*(d-a)*(d-c)*(d-b));
       printf("%.2f",s);
    } 
    else printf("Not a triangle.");
}
