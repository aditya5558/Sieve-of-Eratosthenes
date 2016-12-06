#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	printf("Enter the value of n");
	scanf("%d",&n);

	int prime[n+1];
	for(int i = 2; i <= n; i ++)
		prime[i] = i;

	for(int i = 2; i*i <= n; i ++)
		for(int j = i*i; j <= n; j += i)
			prime[j] = 0;

	for(int i = 2; i <= n; i ++)
		if(prime[i] != 0)
			printf("%d ",prime[i]);

	return 0;
}	