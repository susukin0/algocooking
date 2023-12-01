#include <stdio.h>
int main() {
    int n,answer,sum=0;
    int N = 100000;
	int a[N];
	scanf("%d", &n);
    	for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
	for(int i=0; i<n; i++) {
       sum += a[i];
    }
	int min = a[0];
	for(int i=0; i<n; i++){
		if(a[i]<min) min = a[i];
		}
	sum -= min;
	printf("%d", sum);
    return 0;
}

