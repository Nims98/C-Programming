#include<stdio.h>
int main() {
	
	int start=20,end=911,count,total;
	for(count = start;count<=end;count++){
		if(count%3==0){
			total = total + count;
		}
	}
	printf("output %d",total);
	return 0;
}
