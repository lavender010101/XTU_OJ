#include<stdio.h>
#include<math.h>
int main(){
	float x;
	scanf("%f",&x);
	if(0<=x&&x<10)
		printf("%.5f",cos(x+3));
	else if(10<=x&&x<20)
		printf("%.5f",pow(cos(x+7.5),2));
	else if(20<=x&&x<30)
		printf("%.5f",pow(cos(x+4),4));
	else
		printf("Not define");
}
