#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int a,b;
	while(scanf("%d%d",&a,&b)==2&&(a||b)) 
		printf("%d\n",a*b/__gcd(a,b));
}
