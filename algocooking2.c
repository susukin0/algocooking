#include <stdio.h>
int main(){
int x,sum=0,answer;
scanf("%d", &x);
if(x==1) printf("2");
for(int i=0; i<=x; i++){
	sum = (i*(i+1))/2;
	if(sum>x) {
		answer = sum - x;
		printf("%d", answer);
		break;
}
}
return 0;
	}

