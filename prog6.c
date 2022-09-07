#include<stdio.h>
int main() {
	char gender;
	printf("Enter : ");
	scanf("%c",&gender);
	if(gender == 'f'){
		printf("You are a Female");	
	}else if(gender == 'F'){
		printf("You are a Female");
	}else if(gender == 'm'){
		printf("You are a Male");
	}else if(gender == 'M'){
		printf("You are a Male");
	}else{
		printf("Invalid Value");
	}
	return 0;
}
