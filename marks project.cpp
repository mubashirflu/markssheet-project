#include<stdio.h>
#include<conio.h>
int main(){
	int english,math,chemistry,physics,urdu,chemistry_lab,physics_lab;
	int total=600, obtained;
	float percentage;
	printf("enter the number of the english(100):");
	scanf("%d",&english);
	printf("enter the number of ,math(100):");
	scanf("%d",&math);
	printf("enter the number of chemistry(100):");
	scanf("%d",&chemistry);
	printf("entetr the number of physics(100):");
	scanf("%d",&physics);
	printf("enter the number of urdu(100):");
	scanf("%d",&urdu);
	printf("entrt the number of chemistry_lab(50):");
	scanf("%d",&chemistry_lab);
	printf("enetr the number of physics_lab(50):");
	scanf("%d",&physics_lab);
	obtained=english+math+chemistry+physics+urdu+chemistry_lab+physics_lab;
	printf("%d obtained\n",obtained);
	percentage=(obtained*100)/total;
	printf("%f percentage\n ",percentage);
	if(percentage>=90){
		printf("student contained A+ grade:");
	}else if(percentage>=80){
		printf("student contianed A grade:");
	}else if(percentage>=70){
		printf("student contained B garde:");
	}else if(percentage>=60){
		printf("student contined C grade:");
	}else {
		printf("student fail:");
	}
	getch();
}