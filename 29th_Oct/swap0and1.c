#include<stdio.h>
#include<stdbool.h>
int main(){
	float num;
	printf("Enter a number: \n");
	scanf("%f",&num);
	int intpart;
	float decipart;
	float res=0;
	int place=1;
	int div=10;
	bool b=false;
	printf("Number: %f\n",num);
	if(num<0){
		num=-num;
		b=true;
	}
	intpart=(int)num;
	decipart=num-intpart;
	if(intpart==0){
		res=1;
	}
	while(intpart>0){
		int x=intpart%10;
		if(x==0){
			x=1;
		}
		else if(x==1){
			x=0;
		}
		res+=x*place;
		place*=10;
		intpart/=10;
	}
	while(decipart>0){
		decipart*=10;
		int y=(int)decipart;
		if(y==0){
			y=1;
		}
		else if(y==1){
			y=0;
		}
		res+=y/(float)div;
		decipart-=y;
		div*=10;
	}
	if(b==true){
		printf("Formatted Number: %f\n",-1*res);
	}
	else{
		printf("Formatted Number: %f\n",res);
	}

}