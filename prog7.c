#include<stdio.h>
int main() {
	char operation;
	int a,b,output;
	printf("Enter Operation : ");
	scanf("%c",&operation);
	printf("Enter Number 1 : ");
	scanf("%d",&a);
	printf("Enter Number 2 : ");
	scanf("%d",&b);
	
switch(operation){
    		case ('+'||'a'||'A'):
      			output = a + b;
      			printf("Addition = %d",output);
     		break;

    		case ('-'):
      			output = a - b;
      			printf("Addition = %d",output);
      		break;
      		case ('*'):
      			output = a * b;
      			printf("Addition = %d",output);
      		break;
      		case ('/'):
      			output = a / b;
      			printf("Addition = %d",output);
      		break;
    		default:
    		printf("asdasd");
     
	}
	return 0;
}
